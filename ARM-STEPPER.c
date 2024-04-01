#include<lpc214X.h>
unsigned long i;
void delay(unsigned int);
int main()
{
int a=200;
IO1DIR=0x00FF0000;
i=0X00080000;
while(a)
{
IO1SET=i;
delay(10000);
IO1CLR=0X00FF0000;
i=i>>1;
if(i==0X00008000)
{i=0X00080000;}
a=a-1;
}}
void delay(unsigned int count)
{
unsigned int i,j;
for(i=0;i<=count;i++)
for(j=0;j<=89;j++);
}