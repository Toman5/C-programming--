#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element);
void dequeue();
void display();
void enqueue(int element)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if ((rear+1)%max==front)
    {
        printf("stack overflow");
    }
    else
    {
    rear=(rear+1)%max;
    queue[rear]=element;
    }
}
void dequeue()
{

    if((front==-1)&&(rear==-1))
    {
        printf("stack is overflow");
    }
    else if(front==rear)
    {
        printf("deleted element is %d",queue[front]);
        front=rear=-1;
    }
    else
        {
        printf("deleted element is %d",queue[front]);
        front=(front+1)% max;
    }
}
void display()
{
int i=front;
if(front==-1 && rear==-1)
{
    printf("queue is empty");
}
else
{
    printf("elements in a queue are:");
    while(i!=rear)
    {
        printf("%d",queue[i]);
        i=(i+1)%max;
    }
    printf("%d",queue[i]);
}
}
int main()
{
    int choice,option,element;
    while(1)
    {
        printf("\n 1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.display\n");
        printf("enter the choice(1,2,3): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:

            printf("enter the element:");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    }
}
