#include <stdio.h>
void main()
{
float qr,qs,pr,ps;
scanf("%f",&qr);
scanf("%f",&qs);
pr=16.75*qr;
ps=15*qs;
printf("!!alpha mall bill!!\n");
printf("item \t price pkg \t quantity \t price\n");
printf("rice \t 16.75rs. \t %f \t %f rs.\n",qr,pr);
printf("sugar \t 15rs .\t %f \t %f rs.\n",qs,ps);
printf("total amount =%f Rs.\n",pr+ps);
printf ("thank you");
}
