#include<stdio.h>
int main(){
int a,b,temp;
printf("enter a and b ");
scanf(" %d %d",&a , &b);

temp=a;
a=b;
b=a;

printf("after swap: a=%d, b=%d", a,b );
return 0;
}
