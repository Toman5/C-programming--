#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void insertatmid();
struct node
{
    int data;
    struct node *next;
}*head,*newnode,*temp,*null;

int main()
{
    int choice,option;
    while(1)
    {
        printf("\n 1.create\n");
        printf("2.display\n");
        printf("3.count\n");
        printf("4.exit\n");
        printf("5.insert at middle");
        printf("enter the choice(1,2,3,4,5): ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                 create();
                 break;
            case 2:
                 display();
                 break;
            case 3:
                 count();
                 break;
            case 4:
                exit(0);
                break;
            case 5:
                 insertatmid();
                 break;

        }
    }
}
    void create()
    {
    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    }
    void display()
    {
        temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    }
    void count()
    {
        int count=0;
        temp=head;
        while(temp!=NULL)
    {

        count++;
        temp=temp->next;
    }
    printf("%d",count);
    }
void insertatmid()
{
    int pos,j;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the number:");
    scanf("%d",&newnode->data);
    printf("\n enter the position:");
    scanf("%d",&pos);
    temp=head;
    for(j=1;j<pos;j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    }
void insertFront()
{
    newNode->data = data;
    newNode->next = head;
    newnode->prev = NULL;
    if (head!= NULL)
        head->prev = newnode;
    head = newnode;
}
