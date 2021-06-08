/*.....................................program....................................................*/

#include<stdio.h>
int main()
{
	unsigned long long int n;
	int counter=0;
	printf("\n Enter a number:");
	scanf("%llu",&n);
	while(n!=0)
	{
		n=n/10;
		counter=counter+1;
	}
	printf("count of digits is :%d",counter);
}

/*.....................................output....................................................




 Enter a number:45698
count of digits is :5



 Enter a number:123
count of digits is :3


*/

