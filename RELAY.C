#include<reg51.h>

void delay(unsigned int);
sbit relay=P1^0;

void main(void)
{
	while(1)
	{
	relay=1;
	  delay(300);
  relay=0;
	  delay(300);
}
}
 void delay(unsigned int t)
{
  unsigned int i,j;
	for(i=0;i<t;i++)
		for(j=0;j<1275;j++);
}