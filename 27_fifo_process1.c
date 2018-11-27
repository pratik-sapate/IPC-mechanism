#include<stdio.h>
#include<fifo.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include"27_proc_message_passing.h"
int main()
{
	int fd,err_fget;
	char data[32];
	fd=open(path,O_WRONLY);
	if(fd<0)
	{
	}
	printf("enter data in the file\n");
	err_fget=fget(data,sizeof(data),stdin);
	if(err_fget<0)
	{
		perror("error is");
	}
	wr

