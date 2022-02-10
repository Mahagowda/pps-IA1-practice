#include<stdio.h>
int cmp(int a,int b,int c,int *largest)
{
  *largest=0;
  if(a>b && a>c)
        *largest=a;
  else if(b>c)
        *largest=b;
  else
        *largest=c;
}
int input()
{
  int a;
  printf("enter the number:");
  scanf("%d", &a);
  return a;
}
void output(int l)
{
  printf("largest number is:%d\n",l);
}
int main()
{
  int x,y,z,l;
  x=input();
  y=input();
  z=input();
  cmp(x,y,z,&l);
  output(l);
  return 0;
}

