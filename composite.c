#include<stdio.h>

int main()
{
	int i,num,flag=0;
	printf("enter any number:");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{
  		if (num%i==0)
		{
			flag=1;
			break;
		}
	}
if (flag==1)
printf("/n %d is a composite number",num);
else
printf("/n %d is a prime number ",num);
}

