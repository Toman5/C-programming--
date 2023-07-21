#include<stdio.h>
#include<stdlib.h>
# define
void Enqueue();
void Dequeue();
void peak();
void display();
struct node
{
    int data;
    struct node *next;
}*temp,*newnode,*front,*rear;
int main()
{
    int choice,option;
    while(1)
    {
        printf("\n 1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.peak\n");
        printf("4.display\n");
        printf("enter the choice(1,2,3,4): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
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
void Enqueue()
{
    printf("enter the elements: %d");
    scanf("%d",&data);
    if(front==NULL && rear==NULL)
    {
        front=newnode;
        rear=newnode;

    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void Dequeue()
{
     temp=front;
    if(front==NULL && rear==NULL )
    {
        printf("the queue is empty");
    }
    else
    {
        printf("%d is deleted",front->data);

        front=front->next;
        free(temp);
    }
}
void peak()
{
    if(front==NULL && rear==NULL )
    {
        printf("the node is empty");
    }
    else
    {
        printf("the peak element is : %d",front->data);
    }
}
void display()
{
    temp=front;
    printf("Stack elements are: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}
