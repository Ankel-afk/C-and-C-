#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
 int main(int argc, char *argv[])
 {
     pid_t pid;
     for(;argc >= 1; argc--){
     pid = fork();
     if (pid == 0){
         printf("a poor child is getting zombified!\n");
         exit(1);
        }
     }
     while(1)
         sleep(1);
     
}
