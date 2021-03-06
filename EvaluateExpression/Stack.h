#ifndef _Stack_h_
#define _Stack_h_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef char SElemType;

typedef enum {
	ERROR = 0,
	OK = 1
}Status;

#define STACK_INIT_SIZE 100		//存储空间初始分配量
#define STACKINCREMENT  10		//存储空间分配增量

typedef struct {
	SElemType *base;			//在栈构造之前和销毁之后，base的值为NULL
	SElemType *top;				//栈顶指针
	int stacksize;				//当前已分配的存储空间，以元素问单位
}SqStack;


Status InitStack(SqStack *S);
Status GetTop(SqStack S, SElemType *e);
Status Push(SqStack *S, SElemType e);
Status Pop(SqStack *S, SElemType *e);

#endif // !_Stack_h_
