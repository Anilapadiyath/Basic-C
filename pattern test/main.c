#include <stdio.h>
#include <stdlib.h>
void pattern_1(int n);
void pattern_2(int n);
int main()
{
    int n,c;
    printf("Enter limit=");
    scanf("%d",&n);
    printf("SELECT:");
    printf("\n1:Pattern 1");
    printf("\n2:Pattern 2\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:pattern_1(n);
               break;
        case 2:pattern_2(n);
               break;
    }

    return 0;
}

void pattern_1(int n)
{
    int i,j,x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("  ");
        }
         for(x=i;x<n;x++)
        {
            printf("* ");
        }
        printf("\n");

}
}

void pattern_2(int n)
{
    int i,j,x,y,a=n;;

    for(i=0;i<n;i++)
     {
         for(j=0;j<i+1;j++)
          {
            printf(" ");
          }
         for(x=0;x<a;x++)
          {
          printf("* ");
          }
          a--;
    printf("\n");
     }

}

