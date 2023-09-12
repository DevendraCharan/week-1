#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter Two Values");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("The Swapped Values");
printf("%d \n%d",a,b);
return 0;
}

