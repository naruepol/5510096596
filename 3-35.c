#include<stdio.h>
int main()
{
	char name[40];
	
	printf("Enter your name and surname : ");
	scanf("%[^\n]",name);
	
	printf("Hi %s\nHow are you?",name);
	return 0;
}
