#include<stdio.h>

struct node
{
    int data;
    struct node * next

}*top=0;

int size=0;

struct node * newNode(){
    return malloc(sizeof(struct node));
}

void push(int x){
    struct node *temp=newNode();
    temp->data=x;

    if(!top){
        top=temp;
        temp->next=0;
    }

    else{
        temp->next=top;
        top=temp;
    }

    size++;
}

int pop(){
    int x;
    if(!top){
        printf("Stack is empty\n");
        return;
    }

    else{
        x=top->data;
        struct node * temp=top;
        top=top->next;
        free(temp);
        printf("%d is popped\n",x );
        size--;
    }

}

int Stacksize(){
printf("size :  %d\n",size);
}

int TopElement(){
  if(!top){
    printf("Stack is empty\n");
    return;
  }

  printf("%d\n",top->data );
}


int main(){
    int x=0,p=0;
    char ch='y',ch1='y',choice='y';

//    while(choice=='y'){

do{
    printf("Enter option:\n 1.push\n 2.pop\n 3.Size of Stack\n 4.TopElement\n");
    scanf("%d",&p);
    ch='y';

      switch(p){
        case 1:
                while(ch!='n'){
                  printf("Enter data\n");
                  scanf("%d",&x);
                  push(x);
                  printf("\nWant to enter more data? y or n ?\n");
                  scanf(" %c",&ch);//ch=getchar();
                 }
        break;

        case 2: while(ch!='n'){
          if (size==0)
          {
            printf("Stack is empty\n");
            break;
          }
          pop();
          printf("Wanna pop more ? Enter y or n\n");
          scanf(" %c",&ch);//ch=getchar();
        }
        break;

        case 3:
        Stacksize();
        break;

        case 4: TopElement();
        break;

        default: exit(0);
    }
    printf("Wanna continue ? Enter choice y or n\n");
    scanf(" %c",&choice);
  }while(choice!='n');

/*    printf("Wanna continue ? Enter choice y or n");
    scanf(" %c",&choice);
*/
               return 0;

    }



              /*Stacksize(), push(5) , Stacksize(), push(9),Stacksize(), push(10),Stacksize(),push(11),Stacksize();

               Stacksize(),pop(),Stacksize(),pop(),Stacksize(),pop(),Stacksize(),pop(),Stacksize(),pop();

               */




