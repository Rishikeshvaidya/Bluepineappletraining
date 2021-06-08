/*...............................................................program......................................................................................*/

#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter a Character:");
	scanf("%c",&c);
	if((c>=65 && c<=90) ||(c>=97 && c<=122))
	{
		printf("\n %c is alphabet",c);
	}
	else 
	{
		printf("\n %c is not alphabet",c);
	}
}
/*...............................................................output...............................................................................

 Enter a Character:A

 A is alphabet


 Enter a Character:!

 ! is not alphabet



 Enter a Character:2

 2 is not alphabet
--------------------------------
Process exited after 2.384 seconds with return value 19
Press any key to continue . . .
.....................................................................................................................................................*/
