#include <stdio.h>
#include <stdlib.h>
typedef struct StackNode
{
    int a;
    struct StackNode *next;
} StackNode, *LinkStackPtr;
typedef struct LinkStack
{
    LinkStackPtr top;
    int count;
} LinkStack;
void Push(LinkStack *S, int e) //入栈
{
    LinkStackPtr s;
    s=(LinkStackPtr)malloc(sizeof(StackNode));
    s->a=e;
    s->next=S->top;
    S->top=s;
    S->count++;
}
int Pop(LinkStack *S) //出栈
{
    LinkStackPtr p;
    if(S->top==NULL)
        return 0;
    int a=S->top->a;
    p=S->top;
    S->top=S->top->next;
    free(p);
    S->count--;
    return a;
}


