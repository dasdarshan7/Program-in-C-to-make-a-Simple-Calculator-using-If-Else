//  Program in C to make a Simple Calculator using If-Else
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
float d;
printf("\n Enter 1st number: " );
scanf("%d", &a);
printf("\n Enter 2nd number: " );
scanf("%d", &b);
printf("\n Enter 1 for addition, 2 for substraction, 3 for multiplication & 4 for division");
printf("\n Enter your choice: ");
scanf("%d", &c);
if(c==1)
{
d=a+b;
printf("\n %d + %d = %f",a,b,d);
}
else if(c==2)
{
d=a-b;
printf("\n %d - %d = %f",a,b,d);
}
else if(c==3)
{
d=a*b;
printf("\n %d x %d = %f",a,b,d);
}
else if(c==4)
{
d=(float)a/b;
printf("\n %d / %d = %f",a,b,d);
}
else
printf("\n Wrong Choice ");
getch();
return 0;
}
