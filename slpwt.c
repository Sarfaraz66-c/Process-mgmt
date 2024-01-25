#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
main()
{
	printf("stmt before fork\n");
	int p=fork();
	if(p==0)
	{
		sleep(3);
		printf("childs process\n");
	}
	else
	{
		wait();
		printf("parents process\n");
	}
}
