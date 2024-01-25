#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
main()
{
        pid_t pid;
	pid=fork();
        if(pid==0)
        {
                printf("child process\n");
        }
        else
        {
                printf("parent process\n");
        }
}