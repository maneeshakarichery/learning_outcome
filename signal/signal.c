#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void signalHandler(int signum) {
    if (signum == SIGUSR1) {
        printf("Received SIGUSR1\n");
       
    }
}

int main() {
   
    signal(SIGUSR1, signalHandler);

    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("Error creating child process");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {
       
        while (1) {
            
            sleep(1);
        }
    } else {
        
        printf("Sending SIGUSR1 to child process with PID %d\n", child_pid);
        kill(child_pid, SIGUSR1);

        

    return 0;
}

}
