#include <stdio.h>
int main(){
	int n;
	printf("enter an integer:");
	scanf("%d",&n);
	if(n==0)
		printf("\n %d is a zero",n);
	else if(n>0)
		printf("\n %d is a positive integer",n);
	else 
		printf("\n %d is a negative integer",n);
}



