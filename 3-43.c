#include<stdio.h>
int main()
{
	int a; 
	a = 10;
	printf(" %d \n",a++); //10
	printf(" %d \n",++a); //12
	printf(" %d \n",a+=2); //14, 12
	printf(" %d \n",++a); //15
	return 0;	
}
