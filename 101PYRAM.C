#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,j=0,x;
clrscr();

printf("enter value");
scanf("%d",&x);

for(i=1;i<=x;i++)
{
	for(j=1;j<=i;j++)
	{
		if(j%2==1)
			{
			printf("1");
			}

		else
			{
			printf("0");
			}
	}
	printf("\n");

}
getch();
}