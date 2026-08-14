#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
}Node;

typedef struct linkedlist{
    int size;
    Node *head;
    Node *tail;
}linkedlist;

Node*createnode(int value){
    Node*node=malloc(sizeof(Node));
    node->value=value;
    node->next=NULL;
    return node;
}

linkedlist *createLinklist(){
    linkedlist*list=malloc(sizeof(linkedlist));
    list->size=0;
    list->head=NULL;
    list->tail=NULL;
    return list;
}

void insert(int value,int position,linkedlist*list){
    if(position<0||position>list->size)
    return;
    Node *node=createnode(value);
    if(position==0){
        node->next=list->head;
        list->head=node;
        if(list->size==0)
        list->tail=node;
    }
    else if(position==list->size){
        list->tail->next=node;
        list->tail=node;
    }
    else
    {
        Node*curr=list->head;
        for(int i=0;i<position-1;i++)
        curr=curr->next;
        node->next=curr->next;
        curr->next=node;
    }
    list->size++;
    printf("%d inserted at position %d\n",value,position);
}

void delete(int position,linkedlist *list){
    if(list->size==0||position<0||position>=list->size)
    return;
    if(position==0){
        Node*temp=list->head;
        list->head=list->head->next;
        free(temp);
        list->size--;
        if(list->size==0)
        list->tail=NULL;
        return;
    }
    Node*curr=list->head;
    for(int i =0;i<position-1;i++)
    curr=curr->next;
    Node*temp=curr->next;
    curr->next=temp->next;
    if(position==list->size-1)
    list->tail=curr;
    free(temp);
    list->size--;
}

void display(linkedlist*list){
    Node*curr=list->head;
    printf("List(size=%d):",list->size);
    while(curr){
        printf("%d ->",curr->value);
        curr=curr->next;
    }
    printf("NULL\n");
}
int main(){
    linkedlist *list=createLinklist();
    insert(10,0,list);
    insert(20,1,list);
    insert(30,2,list);
    display(list);
    insert(40,1,list);
    display(list);
    delete(2,list);
    display(list);
    delete(0,list);
    display(list);
    delete(list->size-1,list);
    display(list);
    return 0;
}
