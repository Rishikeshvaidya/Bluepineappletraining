/*...............................................................program......................................................................................*/
#include<stdio.h>
int main()
{
	unsigned long long int n,sum=0;
	int i,j;
	printf("\n Enter upto which number do u want to find perfect numbers:");
	scanf("%llu",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(i==sum)
		{
			printf("%d\t",sum);
		}
		
	}
}
/*...............................................................output......................................................................................


 Enter upto which number do u want to find perfect numbers:1000
6       28      496
--------------------------------
Process exited after 3.957 seconds with return value 1000
Press any key to continue . . .






*/
