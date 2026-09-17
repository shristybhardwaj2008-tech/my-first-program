include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5,total,percentage;
printf("enter marks of 5 subjects (out of 100)\n");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

total=m1+m2+m3+m4+m5;
percentage=total/5;

printf("total=%.2f\n",total);
printf("percentage=%.2f%%\n",percentage);

if(percentage>=90 && percentage<=100){
printf(" grade A ');
}
else if(percentage>=80 && percentage<90){
printf(" grade B ");
}
else if(percentage>=60 && percentage<80){
printf(" grade C ");
}
else {
printf(" grade D ");
} 
return 0;
}
