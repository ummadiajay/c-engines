#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
        scanf("%c",&ch);
        switch(ch){
		case 'A':
 		case 'a':
			printf("\n %c is a vowel",ch);
			break;
		case 'e':
 		case 'E':
			printf("\n %c is a vowel",ch);
			break;
		case 'I':
 		case 'i':
			printf("\n %c is a vowel",ch);
			break;
		case 'o':
 		case 'O':
			printf("\n %c is a vowel",ch);
			break;
		case 'u':
 		case 'U':
			printf("\n %c is a vowel",ch);
			break;

		default:printf("\n %c is not  a vowel",ch);
	 }
}
			
		
