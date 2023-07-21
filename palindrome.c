#include<stdio.h>
#include<stdlib.h>
int create();
void display(int aa);

struct node
{
    char data;
    struct node *next,*prev;
}*head,*tail,*newnode,*temp,*null,*temp1;

int main()
{
    int choice,option;
    while(1)
    {
        printf("\n 1.create\n");
        printf("2.display\n");
        printf("3.count\n");
        printf("enter the choice(1,2,3,4): ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                 int a=create();
                 break;
            case 2:

                display(a);
                 break;

            default:
                 printf("enter the correct choice");
                 break;

        }
    }
}
    int create()
    {
    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter the data:");
        scanf(" %c",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
           head->prev=NULL;
        }
        else
        {
            temp=tail;
           while(temp->next!=NULL)
           {
               temp=temp->next;

           }
           temp->next=newnode;
           newnode->prev=temp;
           tail=newnode;

        }
    }
return n;
    }
    void display(int a)
    {
       /* printf("enter the size word:");
    scanf("%d",&nn);*/

          printf("\ngiven  list\n");
        temp=head;
    while(temp->next!=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->next;
    }
    printf("%c",temp->data);

    printf("\nReversed  list\n");

    temp1=tail;
    while(temp1->prev!=NULL)
    {
        printf("%c ",temp1->data);
        temp1=temp1->prev;
    }
    printf("%c",temp1->data);


  temp=head;
  temp1=tail;
int count=1,flag=0;
    while(temp->next!=NULL)
    {
    while(temp1->prev!=NULL)
    {
        temp=temp->next;
        temp1=temp1->prev;

    if(temp->data==temp1->data)
    {
        count++;
        flag=1;
    }

    }
    }


if(count==a && flag==1)
{
printf("\npalindrome");
}
else
{
    printf("\nnot palindrome");

}

    }
