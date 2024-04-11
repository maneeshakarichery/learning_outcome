#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

pthread_mutex_t mutex;
int shared_variable = 0;

void* thread_function(void* arg) {
    pthread_mutex_lock(&mutex); // Lock the mutex before accessing the shared variable
    shared_variable++;
    printf("Thread %ld: shared_variable = %d\n", (long)arg, shared_variable);
    pthread_mutex_unlock(&mutex); // Unlock the mutex after accessing the shared variable
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    pthread_mutex_init(&mutex, NULL);

    for (long i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, thread_function, (void*)i);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    pthread_mutex_destroy(&mutex);
    return 0;
}

