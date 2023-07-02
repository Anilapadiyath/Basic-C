#include <stdio.h>
#include <stdlib.h>  //SIMPLE CALCULATOR
int divi(int d1,int d2);
int mult(int m1,int m2);

int summ(int s1,int s2)
{
    int sum;
    sum=s1+s2;
   return sum;
}
int subt(int s1,int s2)
{
    int sub;
    sub=s1-s2;
    return sub;
}
int main()
{
    int a,b,c,sum,sub,mul,div;;
    int (*fun[4])(int,int)={&summ,&mult,&subt,&divi};  //FUNCTION POINTER DECLARATION
    printf("SIMPLE CALCULATOR\n");
    printf("Enter numbers=");
    scanf("%d%d",&a,&b);
    printf("SELECT\n");
    printf("1:ADD\n");
    printf("2:MUL\n");
    printf("3:SUB\n");
    printf("4:DIV\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:sum=(*fun[c-1])(a,b);  //ADDITION
               printf("SUM=%d+%d=%d\n",a,b,sum);
               break;

        case 2:mul=(*fun[c-1])(a,b); //MULTIPLICATION
               printf("MUL=%dx%d=%d\n",a,b,mul);
               break;

        case 3:sub=(*fun[c-1])(a,b);  //SUBTRACTION
               printf("SUB=%d-%d=%d\n",a,b,sub);
               break;

        case 4:div=(*fun[c-1])(a,b);      //DIVISION
               printf("DIV=%d/%d=%d",a,b,div);
               break;

    return 0;
    }
}

int divi(int d1,int d2)
{
    int div;
    div = d1/d2;
    return div;
}


int mult(int m1,int m2)
{
    int mul;
    mul=m1*m2;
    return mul;
}
