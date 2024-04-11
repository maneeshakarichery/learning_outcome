#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define NUM_THREADS 5

sem_t semaphore;
int shared_variable = 0;

void* thread_function(void* arg) {
    sem_wait(&semaphore); // Wait on the semaphore
    shared_variable++;
    printf("Thread %ld: shared_variable = %d\n", (long)arg, shared_variable);
    sem_post(&semaphore); // Signal that access to shared variable is done
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    sem_init(&semaphore, 0, 1); // Initialize the semaphore with initial value 1

    for (long i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, thread_function, (void*)i);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    sem_destroy(&semaphore);
    return 0;
}

