#include <stdio.h>
#include <stdlib.h>
struct shop        //EMPLOYEE DETAILS PROJECT
{
    char shop_name[30];
    int date;
    union shop_floor
    {
        char floor_name[20];
        struct employee
        {
            char employee_name[20];
            int hours_worked;
        }e;
        struct item
        {
           int no_item_sold;
           float item_price;
        }i;
    }f;
}s;
void scan_shopdetails();
void scan_employeedetails();
void print_alldetails(float sum);

int main()
{
    float n,sum;
    scan_shopdetails();
    printf("Enter floor name:");
    scanf("%s",s.f.floor_name);
    scan_employeedetails();
    printf("Number of items sold in floor:");
    scanf("%d",&s.f.i.no_item_sold);
    printf("Total prices of items:");
    scanf("%f",&s.f.i.item_price);
    printf("Enter pay per hour:");
    scanf("%f",&n);
    sum=n*s.f.e.hours_worked;
    print_alldetails(sum);
printf("\n\n");
    return 0;
}
void print_alldetails(float sum)  //PRINT ALL DETAILS
{
    printf("\nShop name:%s",s.shop_name);
    printf("\nD/M/Y:%d",s.date);
    printf("\nFloor:%s",s.f.floor_name);
    printf("\nEmployee name:%s",s.f.e.employee_name);
    printf("\nHours worked:%d",s.f.e.hours_worked);
    printf("\nSalary:%0.2f",sum);
    printf("\n\nItems sold in floor:%d",s.f.i.no_item_sold);
    printf("\nTotal price of items:%0.2f",s.f.i.item_price);
}
void scan_shopdetails()
{
   printf("Enter shop name:");   //SCAN SHOP DETAILS
   scanf("%[^\n]s",s.shop_name);
   printf("Enter the date:");
   scanf("%d",&s.date);
}
void scan_employeedetails()     //SCAN EMPLOYEE DETAILS
{
    printf("Enter employee name:");
    scanf("%s",s.f.e.employee_name);
    printf("Total hours:");
    scanf("%d",&s.f.e.hours_worked);
}
