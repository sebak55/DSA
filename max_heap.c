#include<stdio.h>
#include<stdlib.h>
struct maxheap{
    int *arr;
    int size;
    int totalsize;
};
void initHeap(struct maxheap*h,int n){
    h->arr=(int *)malloc(n*sizeof(int));
    h->size=0;
    h->totalsize=n;
}

void swap(int *n1,int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void insert(struct maxheap *h,int value){
    if(h->size==h->totalsize){
        printf("Heap overflow\n");
        return;
    }
    h->arr[h->size]=value;
    int index=h->size;
    h->size++;
    while(index>0&&h->arr[(index-1)/2]<h->arr[index]){
        swap(&h->arr[(index-1)/2],&h->arr[index]);
            index=(index-1)/2;
    
    }
    printf("%d inserted into the heap\n",value);
}

void printHeap(struct maxheap*h){
    for(int i=0;i<h->size;i++){
        printf("%d ",h->arr[i]);
    }
    printf("\n");
}
void heapify(struct maxheap*h,int index){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left<h->size&&h->arr[left]>h->arr[largest])
    largest =left;
    if(right<h->size&&h->arr[right]>h->arr[largest])
    largest=right;
    if(largest!=index){
        swap(&h->arr[index],&h->arr[largest]);
        heapify(h,largest);
    }
}
void deleteHeap(struct maxheap*h){
    if(h->size==0){
        printf("Heap underflow\n");
        return ;
    }
    printf("%d is deleted from the heap\n",h->arr[0]);
    h->arr[0]=h->arr[h->size-1];
    h->size--;
    if(h->size==0)
    return ;
    heapify(h,0);
}
void destroyHeap(struct maxheap*h){
    free(h->arr);
    h->arr=NULL;
}
int main(){
    struct maxheap h1;
    initHeap(&h1,6);
    insert(&h1,1);
    insert(&h1,2);
    insert(&h1,3);

    printHeap(&h1);

    insert(&h1,10);
    insert(&h1,20);
    insert(&h1,30);

    printHeap(&h1);
    deleteHeap(&h1);
    printHeap(&h1);
    deleteHeap(&h1);
    printHeap(&h1);
    destroyHeap(&h1);
}