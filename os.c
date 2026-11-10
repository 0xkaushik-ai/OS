#include <stdio.h>
#include <unistd.h>

int main () {
    int pid = fork();
    if(pid == 0) {
        printf("I am the child \n");

    }else {
        printf("I am the parent,child is %d \n", pid);
    }
    return  0;
}