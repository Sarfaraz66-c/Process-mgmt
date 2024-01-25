#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
Main(int argc, char *argv[])
{
	int fd1;
	char ch;
	fd1=open(argv[1],O_WRONLY);
	if(fd1==-1)
	{
		perror("file cannot be opened\n");
		exit(0);
	}
		do
		{
			read(0,&ch,1);
			if(
