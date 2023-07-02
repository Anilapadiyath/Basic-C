#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[100],ch[6],str1[6]="ANILA";
    int option=0,c;
    printf("Inside the locker\n");
    printf("Enter the string=");
    scanf("%[^\n]s",str);
    printf("Enter the key=");
    scanf("%s",ch);
    ch[5]='\0';
    c=strcmp(ch,str1);
    if(c==0)
    {
        printf("OPEN\n");
       printf("select one option:\n");
       printf("1:INSERT\n");
       printf("2:DELETE\n");
       printf("3:REPLACE\n\n");
       scanf("%d",&option);

       switch(option)
         {
           case 1:insert(str);
                  break;
           case 2:del(str);
                  break;
           case 3:replace(str);
                  break;
         }
    }
    else
    {
       printf("\nINCORRECT KEY\n");

    }
    printf("\nLOCKED\n\n");
    return 0;
}
//SUB FUNCTIONS

int del(char str[100])
{
    int i,ch1;
    printf("Enter the position of character you want to delete=");
    scanf(" %d",&ch1);
    for(i=0;str[i]!='\0';i++)
    {
        if(i==(ch1-1))
        {
            continue;
        }
        printf("%c",str[i]);
    }
}

int insert(char str[100])
{
    int a,b,i,j=0;
    char ch1,ins[100];
    a=strlen(str);
    printf("which position you want to insert? ");
    scanf("%d",&b);
    printf("Enter the character you want to insert=");
    scanf(" %c",&ch1);

    for(i=0;i<a;i++)
     {
        ins[j]=str[i];
        j++;
        if(i==(b-1))
        {
         ins[j]=ch1;
         j++;
        }
     }
     printf("%s\n\n",ins);
     return 0;
}


int replace(char str[100])
{
    char ch1;
    int i,ch;
    printf("Enter the position to be replaced=");
    scanf("%d",&ch);
    printf("Enter the character to inserted=");
    scanf(" %c",&ch1);
    for(i=0;str[i]!='\0';i++)
    {
        if(i==(ch-1))
        {
            str[i]=ch1;
        }
    }
    printf("\n%s\n",str);
    return 0;
}
