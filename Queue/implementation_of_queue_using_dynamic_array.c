#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int front;
    int tail;
    int size;
    int *arr;
}Queue;

Queue*createqueue(int size){
    Queue *queue=(Queue*)malloc(sizeof(queue));
    queue->front=-1;
    queue->tail=-1;
    queue->size=size;
    queue->arr=(int *)malloc(sizeof(int )*size);
    return queue;

}
void enqueue(Queue *queue,int n){
    if(queue->tail==queue->size -1)
        printf("Queue is full!\n");
    else{
        if(queue->front==-1)
            queue->front++;
        queue->tail++;
        queue->arr[queue->tail]=n;
        printf("Successfully enqueued %d\n", queue->arr[queue->tail]);
    }
}

void dequeue(Queue *queue){
    if((queue->tail==-1 && queue->front==-1)|| (queue ->front==queue->tail+1))
    printf("Queue is empty!\n");
    else{
        printf("Successfully dequeued %d\n",queue->arr[queue->front]);
        queue ->front++;
    }

}

void display(Queue *queue){
    if(queue->front==-1)
    printf("Queue is empty!\n");
    else
    {
        printf("Queue elements:");
        for(int i=queue->front;i<=queue ->tail;i++){
            printf("%d ",queue->arr[i]);
        }
        printf("\n");
    }
}
int main(){
    Queue *queue=createqueue(5);
    dequeue(queue);
    enqueue(queue,10);
    enqueue(queue,20);
    enqueue(queue,30);
    enqueue(queue,40);
    enqueue(queue,50);
    enqueue(queue,60);
    display(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    free(queue);
    return 0;
}
