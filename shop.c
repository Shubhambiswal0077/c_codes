#include <stdio.h>

void  main()
{
float a,b,c,d,e;
printf("\n enter quantity of rice to be bought(in kgs):");
scanf("%f",&a);
printf("\n enter quantity of sugar to be bought(in kgs):\n");
scanf("%f",&b);
d=a*16.75;
e=b*15;
c=a*16.75+b*15;
printf("\t\tsuper market\t\t\n\tfinal bill\t\t\nitem\tprice per kg\tquantity\tfinal price\nrice\t16.75\t\t%0.2f\nsugar\t15\t\t%0.2f\t\t%0.2f\ntotal:%0.2f\n]",a,d,b,e,c);
}
