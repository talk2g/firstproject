#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("\n enter the numbers");
scanf("%d%d",&a,&b);
printf("\n 1) addition
        \n   2) subtraction
      \n 3)product
               \n 4)division
);
scanf("%d",&d);
switch(d)
{
case 1: c=a+b;
printf("\n the sum is %d ",c);
case 2: c=a-b;
printf("\n the difference is %d ",c);
case 3: c=a*b;
printf("\n the product is %d ",c);

case 4: c=a/b;
printf("\n the remainder is %d ",c);

}
getch();
}