#include<stdio.h>
int i,j,m,n,m1,n1,k;
int display(int,int,int[][100]);
int display1(int,int,int[][100]);
int play(int,int,int[][100]);
int play1(int,int,int[][100]);
int mul(int,int,int,int,int,int[][100],int[][100],int[][100]);
main()
{
	int a[100][100],b[100][100],c[100][100];
	printf("Enter no.of rows and columns in I-matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter no.of rows and columns in II-matrix:");
	scanf("%d%d",&m1,&n1);
	display(m,n,a);
	display1(m,n,a);
	play(m1,n1,b);
	play1(m1,n1,b);
	mul(m,n,m1,n1,k,a,b,c);
}
int display(int m,int n,int a[ ][100])
{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%5d",&a[i][j]);
		}
		printf("\n");
	}
}
int display1(int m,int n,int a[ ][100])
{
	printf("\n");
	printf("first matrix values are:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
int play(int m1,int n1,int b[ ][100])
{
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%5d",&b[i][j]);
		}
		printf("\n");
	}
}
int play1(int m1,int n1,int b[ ][100])
{
	printf("second matrix values are:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
}
int mul(int m,int n,int m1,int n1,int k,int a[][100],int b[][100],int c[][100])
{
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	printf("%dX%d Mutiplication values are\n",m,n);
		for(i=0;i<m1;i++)
		{
		for(j=0;j<n1;j++)
		{
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
	
}
