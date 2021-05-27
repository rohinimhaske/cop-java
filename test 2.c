#include<stdio.h>
#include<conio.h>
main( )
{
int a,b,c,n, sum;
printf(" Enter a Three Digit Number");
scanf("%d",&n);
a=n/100;
b=( (n%100)/10);
c=n%10;
sum=a+b+c;
printf("Sum of Individual Digits of Given Numbers is %d", sum);
return 0;
}
