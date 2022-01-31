#include<reg51.h>

void delay()
{
int i,j;
for(i=0;i<10;i++)
	for(j=0;j<1000;j++);
}

sbit LED1 = P2^0;
sbit LED2 = P2^1;

sbit SW1 = P2^2;
sbit SW2 = P2^3;

void main()
{
  P2 = 0x0C;

	while(1)
	{
		if(SW1 == 0 )
		{
			LED1 = 1;
		}
		else 
			LED1 = 0;	
		
		if(SW2 == 0 )
		{
			LED2 = 1;
		}
		else 
			LED2 = 0;
	}
}