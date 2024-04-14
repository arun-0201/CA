/*#include<LPC21XX.h>

void delay()
{
	int i,j;
	for (i=0;i<1000;i++){}
	for (j=0;j<1000;j++){}
}


int main()
{
	PINSEL0=0x00000000;
	IO0DIR=0x00000000;
	while(1)
	{
		IOSET0=0X00005555;
		delay ();
		IOCLR0=0X00005555;
		delay ();
		return 0;
	}
}*/

#include<lpc21xx.h>

void delay(void);

int main()

{

IODIR0=0xFFFFFFFF;

while(1)

{

IOSET0=0x0F00;

delay();

IOCLR0=0x0F00;

delay();

}

}

void delay(void)


{

int i;

for(i=0;i<=600000;i++);

}
