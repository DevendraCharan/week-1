#include <stdio.h>
int main()
{
int s1,s2,s3,s4,s5;
float R;
printf("Enter Marks Of Each SUBJECT");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
R=(s1+s2+s3+s4+s5)/5;
printf("Percentage Of The Subject Marks");
printf("%f",R);
return 0;
}

