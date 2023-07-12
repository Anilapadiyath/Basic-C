#include <stdio.h>
#include <stdlib.h>
struct node       //add data at particular position of linked list
{
    int data;
    struct node *next;
};
void insert();
int main()
{
    int i,n,p;
    char ch;
    struct node *head=NULL,*ptr;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter head data=");
    scanf("%d",&head->data);
    head->next=NULL;
    printf("how more data you want to add=");
    scanf("%d",&n);
    ptr=head;
    struct node *temp=NULL;
    for(i=1;i<=n;i++)
       {
           temp=(struct node*)malloc(sizeof(struct node));
           printf("Enter data=");
           scanf("%d",&temp->data);
           temp->next=NULL;
           ptr->next=temp;
           ptr=temp;
       }
    ptr->next>=NULL;
    printf("\nSINGLE LINK LIST:");
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
          {
            printf("%d ",ptr->data);
          }
     while(1)
    {
        printf("\nDo you want to continue? y or n?");
        scanf(" %c",&ch);
        if(ch=='y')
           {
              printf("\nWhich position you want to enter?");
              scanf("%d",&p);
              for(ptr=head,i=1;i<p-1;ptr=ptr->next,i++);
              if(i==(p-1))
                {
                temp=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter temp data=");
                scanf("%d",&temp->data);
                temp->next=ptr->next;
                ptr->next=temp;
                }

          printf("FINAL DATA:");
          for(ptr=head;ptr!=NULL;ptr=ptr->next)
             {
                 printf("%d ",ptr->data);
             }
           }
        else
            {break;}
        }
    }


