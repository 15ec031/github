#include<stdio.h>
#include<conio.h>
int main()
{
int n,rs=0,reminder;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
reminder=n%10;
rs=rs*10+reminder;
    n /= 10;
    }
printf("Reversed Number = %d", rs);
return 0;
}
