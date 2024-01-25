#include<stdio.h>
main()
{
	int pid;
	printf("\n Demo of orphan process\n");
	pid=fork();
	if(pid==0)
	{
		printf("child process pid=%d" ,getpid());
		printf("\nparent process pid(from child) = %d\n",getppid());
		sleep(10);
		printf("\nchild process pid = %d,getpid()");
		printf("\nparent process pid (from child) = %d",getppid());
	}
	else if (pid>0)
	{
		printf("\nparent process pid = %d\n",getpid());	
	}
	else
		printf("\n error in creation\n");
}
