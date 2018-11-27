#include"27_proc_message_passing.h"
int main()
{
	int msg_cre,rec;
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
		rec=msgrcv(msg_cre,(void*)&message,sizeof(message.data),TYPE,0);
		if(rec<0)
		{
			perror("error msgsnd process1");
			_exit(2);
		}
		printf("process 2: %s",message.data);
		msgctl(msg_cre, IPC_RMID, NULL);
	}
}
