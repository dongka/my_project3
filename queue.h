#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include<stdbool.h>

/*在此处插入Item的类型定义*/
/*例如*/
/*或：typedef struct item*/

typedef int Item;
#define MAXOUEUE 10

typedef struct node
{
	Item item;
	struct node *next;
}Node;
typedef struct queue
{
	Node *front;
	Node *rear;
	int items;
}Queue;

/*操作：初始化队列*/
/*操作前：pq指向一个之列*/
/*操作后：该队列已满，则返回True */
void InitializeQueue( Queue *pq);

/*操作：检查队列是否为空*/
/*操作前：pq指向一个先前已初始化过的队列*/
/*操作后：如果该队列已满，则返回True;否则返回FALSE*/
bool QueueIsFull( const Queue *pq);

/*操作：检查队列的项目的个数*/
/*操作前：pq指向一个先前已经初始化的队列*/
/*操作后：如果队列为空，则返回True，否则返回FALSE*/
bool QueueIsEmpty( const Queue *pq);

/*操作：确定队列项目的个数*/
/*操作前：pq指向一个先前一初始化的队列*/
/*操作后：返回队列中项目的个数*/
int QueueItemCount( const Queue *pq);

/*操作：向队尾添加项目*/
/*操作前：pq指向一个先前已初始化过的队列*/
/*item是要添加到队尾的项目*/
/*操作后：如果队列未满，item被添加到*/
/*队列的尾部。函数返回false*/
/*不改变队列，函数返回False*/
bool EnQueue( Item item,Queue *pq);

/*操作：从队列首段删除项目*/
/*操作前：pq指向一个先前已初始化过的队列*/
/*操作后：如果队列非空，队列首端的项目*/
/*		被复制到*pitem,并从队列中删除*/
/*		函数返回Ture;如果这个操作*/
/*		使队列为空，把队列重置为空队列*/
/*		如果队列开始为空*/
/*		不改变队列，函数返回FALSE*/
bool Dequeue( Item *pitem ,Queue *pq);

/*操作：清空队列*/
/*操作前：pq指向一个先前已初始化的队列*/
/*操作后：队列被清空*/

void  EmptyTheQueue( Queue *pq);

#endif














