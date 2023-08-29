#include <stdio.h>
void main()
{
int x,y,z,temp;
printf("the value of x is");
scanf("%d",&x);
printf("the value of y is");
scanf("%d",&y);
printf("the value of z is");
scanf("%d",&z);
temp=x;
x=y;
y=z;
z=x;
}
