#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int top;
    int size;
    int *arr;
}stack;

stack* createstack(int size){
    stack *s=(stack*)malloc(sizeof(stack));
    s->size=size;
    s->top=-1;
    s->arr=(int *)malloc(size * sizeof(int));
    return s;
}

int push(stack *s,int data){
    if(s->top==s->size-1){
        printf("Stack overflow!\n");
        return -1;
    }
    s->arr[++s->top]=data;
    return 0;
}

int pop(stack *s){
    if(s->top==-1){
        printf("Stack underflow!\n");
        return -1;
    }
    return s->arr[s->top--];
}
int peek(stack *s)
{
    if(s->top==-1){
        printf("Stack is empty!\n");
        return -1;
    }
    return s->arr[s->top];
}

int display(stack *s){
    if(s->top==-1){
        printf("stack is empty!\n");
        return -1;
    }
    for(int i = s->top+1;i>=0;i--){
        printf("%d ",s->arr[i]);
    }
    printf("\n");
    return 0;
}

int capacity(stack*s){
    return s->top+1;
}
int freestack(stack *s){
    if(s==NULL)
    return -1;
    free(s->arr);
    free(s);
    return 0;
}
int main(){
    stack *s = createstack(5);
    push(s,5);
    push(s,10);
    push(s,20);
    printf("Top element is %d\n",peek(s));
    printf("Stack size is %d\n",capacity(s));
    
    pop(s);
    display(s);
    freestack (s);

    return 0;

}