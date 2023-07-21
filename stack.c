#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peak();
void display();
struct node
{
    int data;
    struct node *next;
}*temp,*newnode,*top=NULL;
int main()
{
    int choice,option;
    while(1)
    {
        printf("\n 1.push\n");
        printf("2.pop\n");
        printf("3.peak\n");
        printf("4.display\n");
        printf("enter the choice(1,2,3,4): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        }
    }
}
void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(top==NULL)
    {
        top=newnode;

    }
    else
    {
        newnode->next=top;
        top=newnode;
    }
    temp=newnode;
}
void pop()
{
    if(top==NULL)
    {
        printf("the stack is empty");
    }
    else
    {
        printf("%d is deleted",top->data);
        temp=top;
        top=top->next;
        free(temp);
    }
}
void peak()
{
    if(top==NULL)
    {
        printf("the node is empty");
    }
    else
    {
        printf("the peak element is : %d",top->data);
    }
}
void display()
{
    temp=top;
    printf("Stack elements are: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}
