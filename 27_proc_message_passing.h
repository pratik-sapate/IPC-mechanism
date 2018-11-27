#ifndef __27_PROC_MESSAGE_PASSING_H
#define __27_PROC_MESSAGE_PASSING_H

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define KEY 1234
#define TYPE 12
#define LEN 20

typedef struct msg
{
	long type;
	char data[20];
}msg_t;
#endif
