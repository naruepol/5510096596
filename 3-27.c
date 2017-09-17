#include <stdio.h>
int main()
{
	char name[30];
	
	printf("Enter your name : ");
	scanf("%s",name);
	
	int i;
    for(i=0;i<=10;i++){
		printf("%.8s\n",name);
	}	

	return 0;	
}
