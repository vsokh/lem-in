#include "lem_in.h"

void		queue_clear(t_queue *queue)
{
	if (queue->front)
		free(queue->front);
	free(queue);
}

t_queue		*queue_init(void)
{
	t_queue	*queue;

	queue = (t_queue *)malloc(sizeof(t_queue));
	queue->front = NULL;
	queue->rear = NULL;
	queue->size = 0;
	return (queue);
}

bool		is_empty(t_queue *queue)
{
	return (queue->size == 0 ? TRUE : FALSE);
}

t_adjlst	*dequeue(t_queue *queue)
{
	t_node	*tmp;

	tmp = queue->front;
	queue->size != 0 ? queue->size-- : 0;
	if (queue->size)
	{
		queue->front = queue->front->next;
		free(tmp);
	}
	return (queue->front->vertex);
}

void		enqueue(t_queue *queue, t_adjlst *v, size_t level)
{
	if (queue->front == NULL)
	{
		queue->front = (t_node *)malloc(sizeof(t_node));
		queue->front->vertex = v;
		queue->front->next = NULL;
		queue->rear = queue->front;
		queue->size++;
	}
	else if (!v->room->in_queue)
	{
		queue->rear->next = (t_node *)malloc(sizeof(t_node));
		queue->rear->next->vertex = v;
		queue->rear->next->next = NULL;
		queue->rear = queue->rear->next;
		queue->size++;
	}
	v->room->level = level;
	v->room->in_queue = TRUE;
	v->room->visited = TRUE;
}