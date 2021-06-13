#include<bits/stdc++.h>
using namespace std;
int postfixeval(char exp[]);
int main()
{
	char exp[30];
	cout<<"\n Enter Postfix Expression:";
	gets(exp);
	postfixeval(exp);
}
int postfixeval(char exp[])
{
	int i=0,t,v,a,b;
	stack<int>s;
	while(exp[i]!='\0')
	{
		if(isalpha(exp[i])!=0)
		{
			cout<<"\n Enter value of "<<exp[i]<<":";
			cin>>v;
			s.push(v);
		}
		else
		{
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			
			if (exp[i]=='+')
				t=b+a;
			else if(exp[i]=='-')
				t=b-a;
			else if(exp[i]=='*')
				t=b*a;
			else if(exp[i]=='/')
				t=b/a;
			else if(exp[i]=='^')
				t=b^a;
				
			s.push(t);
		}
		i++;
		
	}
	
	cout<<"\n Result is:"<<t;
}

/*
output:


 Enter Postfix Expression:abc+*d*

 Enter value of a:2

 Enter value of b:3

 Enter value of c:4

 Enter value of d:5

 Result is:70
--------------------------------
Process exited after 83.15 seconds with return value 0
Press any key to continue . . .
*/
