#include<stdio.h>
int main()
{
	char first[20], last[20];
	
	printf("Enter your name and surname : ");
	scanf("%s %s",first,last);
	
	printf("Hi %s %s\nHow are you?",first,last);
	return 0;
}
