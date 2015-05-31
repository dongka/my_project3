#include<stdio.h>
#include"queue.h"

int main( void)
{
	Queue line;
	Item temp;
	char ch;

	InitializeQueue( &line);
	puts( "Testing the Queue interface.Type a to add a value");
	puts( "type d to delete a value,and type q to quit");
	while( ( ch = getchar( )) != 'q')
	{
		if( ch != 'a' && ch != 'd')
			continue;
		if( ch == 'a')
		{
			printf( "Integer to add: ");
			scanf( "%d",&temp);
			if( !QueueIsFull( &line))
			{
				printf( "putting %d into queue\n",temp);
				EnQueue( temp,&line);
			}
			else
				puts( "Queue is full");
		}
		else 
		{
			if( QueueIsEmpty( &line))
				puts( "nothing to delete!");
			else
			{
				Dequeue( &temp,&line);
				printf( "removing %d from queue\n",temp);
			}

		}
		printf( "%d item in queue \n",QueueItemCount( &line));
		puts( "type a to add,d to delete,q to quit:");
	}
	EmptyTheQueue( &line);
	puts( "bye!");
		return 0;
}
