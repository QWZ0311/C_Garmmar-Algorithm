#include <stdio.h>
#include <stdlib.h>
typedef struct linklist//定义结构
{
    int a;
    struct linklist *next;
} linklist;
int main()
{
    linklist *head = NULL, *current, *prev;
    for (int i = 0; i < 10; i++)//链表赋值
    {
        current = (linklist *)malloc(sizeof(linklist));//结构指针赋内存
        if (head == NULL)//头指针为空时给头指针指向下一个
            head = current;
        else
            prev->next = current;//前一个结构中的指针指向下一个
        current->next = NULL;///若为循环链表则指向head
        current->a = i;
        prev = current;
    }
    current = head;//链表输出
    while (current != NULL) 
    {
        printf("%d\n", current->a);
        current=current->next;
    }
    current = head;//链表内存释放
    while (current != NULL) 
    {
        free(current);
    }   
    return 0;
}