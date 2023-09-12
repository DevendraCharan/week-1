#include <stdio.h>
#include <math.h>
int main()
{
float C,S,P,T,R;
printf("Enter Principle Amount");
scanf("%f",&P);
printf("Enter Rate");
scanf("%f",&R);
printf("Enter Time Period");
scanf("%f",&T);
S=P*T*R/100;
printf("SIMPLE INTEREST IS %f \n",S);
C=P*pow((1+R/100),T)-P;
printf("COMPOUND INTEREST IS %f \n",C);
return 0;
}
