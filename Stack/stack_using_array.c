#include<stdio.h>
#define Max_stack 5
int top= -1;
int x;
int stack[Max_stack];
void push(){
    if(top==Max_stack-1){
        printf("stack overflow!!!");
        printf("\n");
    }
    else
    {
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
    
}


    void display()
    {
    
        if(top==-1){
            printf("stack is empty");
        }
        else{
            for(int i =0;i<=top;i++){
                printf("%d ",stack[i]);
            }
        }
        printf("\n");
    }

    void pop(){
        if(top==-1){
            printf("stack underflow!!!");
        }
        else{
            printf("%d ",stack[top]);
            top--;
        }
    }
int main()
{
    push();
    push();
    push();
    push();
    push();
    push();
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    

}
