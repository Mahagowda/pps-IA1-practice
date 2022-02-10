#include<stdio.h>
 void input(int*a,int*b)
 {
   printf("enter the number:");
   scanf("%d%d",a,b);
 }
 void add(int a,int b,int*sum)
 {
   *sum=a+b;
 }
 void output(int a,int c,int sum)
 {
   printf("sum of %d+%d is %dn",a,c,sum);
 }
 int main()
 { 
   int a,b,sum;
 input(&a,&b);
 add(a,b,&sum);
 output(a,b,sum);
 return 0;
 }
