#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    pid_t pid1, pid2;

    pid1 = fork();
    if (pid1 == 0) {
        // Filho 1
        while(1) {
            printf("A");
            fflush(stdout);
        }
    }

    pid2 = fork();
    if (pid2 == 0) {
        // Filho 2
        while(1) {
            printf("B");
            fflush(stdout);
        }
    }

    // Pai (comporta-se como Filho 3)
    while(1) {
        printf("C");
        fflush(stdout);
    }

    return 0;
}
