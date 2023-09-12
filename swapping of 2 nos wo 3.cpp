#include <stdio.h>
int main()
{
int KM,M,CM,MM;
printf("Enter The Value In Kilo Meters");
scanf("%d",&KM);
MM=1000*CM;
CM=1000*M;
M=1000*KM;
printf("The Value In Meters");
printf("%d \n",M);
printf("The Value In Centimeters");
printf("%d \n",CM);
printf("The Value In Millimeters");
printf("%d \n",MM);
return 0;
}
