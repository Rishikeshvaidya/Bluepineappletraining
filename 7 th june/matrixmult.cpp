#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"\n Enter rows for 1st matrix :";
	cin>>r1;
	cout<<"\n Enter column for 1st matrix :";
	cin>>c1;
	int a[r1][c1];
	cout<<"\n Enter elements:";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n Enter rows for 2nd matrix :";
	cin>>r2;
	cout<<"\n Enter column for 2ndmatrix :";
	cin>>c2;
	int b[r2][c2],c[r1][c2];
	cout<<"\n Enter elements:";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}
	
	if(c1==r2)
	{
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(int k=0;k<c2;k++)
				{
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
		cout<<"\n\n Multiplication is:\n";
		for(int i=0;i<r1;i++)
		{
		for(int j=0;j<c2;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	}
	else
	{
		cout<<"\n\n\t Multiplication Not Possible";
	}
}
