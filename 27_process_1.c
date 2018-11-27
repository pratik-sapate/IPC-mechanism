#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include"27_proc_message_passing.h"
int main()
{
	int msg_cre,send;
	msg_t message;
	msg_cre=msgget(KEY,0666|IPC_CREAT);
	if(msg_cre<0)
	{
		perror("error msgset process1");
		_exit(1);
	}
	while(1)
	{
		message.type=TYPE;
		printf("Process: enter data\n");
		fgets(message.data,sizeof(message.data),stdin);
		message.type=TYPE;
		send=msgsnd(msg_cre,&message,LEN,0);
		if(send<0)
		{
			perror("error msgsnd process1");
			_exit(2);
		}
	}
}
	
