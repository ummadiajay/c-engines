#include<stdio.h>
int main()
{       
	int n=20,sum=0;
	float avg=0;
	for( int i=0;i<=n;i++){
		//printf("\n %d",i);
		sum=sum+i;
	}
 	avg=sum/(n+1);
	printf("average of %d numbers is: %.3f", n ,avg);
 
	 	


}
	
	

