#include<iostream>
using namespace std;
void get(int a[50][50],int r,int c);
void display(int a[50][50],int r,int c);
void mult(int a[50][50],int r1,int c1,int b[50][50],int r2,int c2,int c[50][50]);
int main()
{
	int a[50][50],b[50][50],c[50][50],r1,c1,r2,c2;
	cout<<"\n Enter rows for 1st matrix :";
	cin>>r1;
	cout<<"\n Enter column for 1st matrix :";
	cin>>c1;
	cout<<"\n Enter elements:";
	get(a,r1,c1);
	cout<<"\n Enter rows for 2nd matrix :";
	cin>>r2;
	cout<<"\n Enter column for 2ndmatrix :";
	cin>>c2;
	cout<<"\n Enter elements:";
	get(b,r2,c2);	
	cout<<"\n 1st Matrix is:\n";
	display(a,r1,c1);
	cout<<"\n 2nd Matrix is:\n";
	display(b,r2,c2);
	if(c1==r2)
	{
		mult(a,r1,c1,b,r2,c2,c);
		cout<<"\n\n Multiplication is:\n";
		display(c,r1,c2);
	}
	else
	{
		cout<<"\n\n\t Multiplication Not Possible";
	}
}
void get(int a[50][50],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
}
void display(int a[50][50],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void mult(int a[50][50],int r1,int c1,int b[50][50],int r2,int c2,int c[50][50])
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
}
