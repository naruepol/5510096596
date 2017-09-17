#include<stdio.h>
int main()
{
	char name[40];
	int date, month, year;
	
	printf("Enter your name and surname : ");
	scanf("%[^\n]",name);
	printf("Enter your Birdhday [d/m/y] : ");
	scanf("%d/%d/%d",&date,&month,&year);

	printf("Hi %s How are you?",name);
    printf("/nBirdthday is %d %d %d",date,month,year);
	
	return 0;
}
