#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int front;
    int tail;
    int size;
    int *arr;

}Queue;

Queue *createqueue(int size){
    Queue *queue=(Queue*)malloc(sizeof(queue));
    queue->front=-1;
    queue->tail=-1;
    queue->size=size;
    queue->arr=(int *)malloc(sizeof(int )*size);
    return queue;
}
void enqueue(Queue *queue,int n){
    if((queue->tail+1)%queue->size==queue->front)
    printf("Queue is full!\n");
    else{
        queue->tail=(queue->tail+1)%queue->size;
        if(queue->front==-1){
            queue->front++;
        }
        queue->arr[queue->tail]=n;
        printf("Successfully enqueued %d\n",n);
        
    }
}
void dequeue(Queue *queue){
    if(queue->front==-1)
    printf("Queue is empty!!!\n");
    else{
        printf("Successfully dequeued %d\n",queue->arr[queue->front]);
        if(queue->front==queue->tail){
            queue->front=-1;
            queue->tail=-1;
        }
        else{
            queue->front=(queue->front+1)%queue->size;
        }
    }
}
void display(Queue *queue){
    if(queue->front==-1)
    {
        printf("Circular queue elements:(empty)\n");
        return;
    }
    printf("Circular queue elements:");
    for(int i=queue ->front;i!=queue->tail;i=(i+1)%queue->size){
        printf("%d ",queue->arr[i]);

    }
    printf("\n");
}
int main(){
    
        Queue *queue=createqueue(5);
        display(queue);
        
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
        enqueue(queue,100);
        display(queue);
        dequeue(queue);
        dequeue(queue);
        enqueue(queue,200);
        display(queue);
        dequeue(queue);
        dequeue(queue);
        dequeue(queue);
        enqueue(queue,300);
        free(queue);
        return 0;
    }










    

