#include <stdio.h>
#include <stdlib.h>
struct node                  //SINGLE LINKED LIST USING for loop
{
    int data;
    struct node *next;
};
struct node *head=NULL,*ptr,*del;
struct node *temp=NULL;
int i,n,p;
void print_data();
void insert_first();
void insert_last();
void insert_intermediate();
void delete_firstdata();
void delete_lastdata();
void delete_intermediate();
int main()
{
    char ch;
    int num;
    printf("How many data you want to add to your linked list? =");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter head data=");
    scanf("%d",&head->data);
    head->next=NULL;
    ptr=head;
    for(i=1;i<n;i++)
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
             printf("\n1:INSERT DATA FIRST");
             printf("\n2:INSERT DATA INTERMEDIATE");
             printf("\n3:INSERT DATA LAST");
             printf("\n4:DELETE FIRST DATA");
             printf("\n5:DELETE INTERMEDIATE DATA ");
             printf("\n6:DELETE LAST DATA");
             printf("\n7:PRINT");
             printf("\nSelect a number=");
             scanf("%d",&num);
             switch(num)
                {
                 case 1:insert_first();
                        n++;
                        break;
                 case 2:insert_intermediate();
                        n++;
                        break;
                 case 3:insert_last();
                        n++;
                        break;
                 case 4:delete_firstdata();
                        n--;
                        break;
                 case 5:delete_intermediate();
                        n++;
                        break;
                 case 6:delete_lastdata();
                        n--;
                        break;
                 case 7:print_data();
                        break;
                }
            }

    }

    return 0;
}
void insert_intermediate()
{
     printf("\nWhich position you want to insert?");
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
}
void insert_first()
{
     temp=(struct node*)malloc(sizeof(struct node));
     printf("\nInsert first data=");
     scanf("%d",&temp->data);
     temp->next=head;
     head=temp;
}
void insert_last()
{
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nInsert last data=");
    scanf("%d",&temp->data);
    temp->next=NULL;
    for(ptr=head;ptr->next->next!=NULL;ptr=ptr->next);
    ptr->next->next=temp;
}
void print_data()
{
    printf("\nFINAL LINKED LIST:");
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
        {
         printf("%d ",ptr->data);
        }
}
void delete_intermediate()
{
    printf("Which position you want to delete=");
    scanf("%d",&p);
    for(ptr=head,i=1;i<p-1;ptr=ptr->next,i++);
        del=ptr->next;
        ptr->next=ptr->next->next;
        ptr->next->next=NULL;
        free(del);
}

void delete_lastdata()
{
     for(ptr=head;ptr->next->next!=NULL;ptr=ptr->next);
     del=ptr->next;
     ptr->next=NULL;
     free(del);
}
void delete_firstdata()
{
     temp=(struct node*)malloc(sizeof(struct node));
     temp=head;
     head=head->next;

}

