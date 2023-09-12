#include <stdio.h>
int main()
{
int a,b;
printf("Enter Two Values");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The Swapped Values");
printf("%d \n%d",a,b);
return 0;
}

