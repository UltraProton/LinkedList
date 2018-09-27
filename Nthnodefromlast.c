#include <stdio.h>

typedef struct node {
int data;
struct node *next;
}Node;

Node* Nthfromlast(Node * head,int n){
    int count=0;
    Node * pNth=head, *ptemp=head;
    while(count<n &&ptemp){
        ptemp=ptemp->next;
        count++;
    }

    if(!ptemp && count<n){
        printf("Not enough nodes\n");
        return 0;
    }

    while(ptemp){
        pNth=pNth->next;
        ptemp=ptemp->next;
    }

    return pNth;

}

Node* newNode(int key){
    Node* temp= (Node*)malloc(sizeof(Node));
    temp->data=key;
    temp->next=0;
    return temp;
}


int main(void){
    Node* head=newNode(1);
    head->next=newNode(2);
    head->next->next=newNode(3);
    head->next->next->next=newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(6);
    head->next->next->next->next->next->next = newNode(7);
    head->next->next->next->next->next->next->next = newNode(8);

    Node* x=Nthfromlast(head,5);

    printf("%d ",x->data);

    return 0;

}
