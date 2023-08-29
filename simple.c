#include <stdio.h>
void main()
{
float p,q,r,s;
printf("principal amount\n");
scanf("%f",&p);
printf("rate\n");
scanf("%f",&q);
printf("time period\n");
scanf("%f",&r);
s=p*q*r/100;
printf("%f",s);
}
