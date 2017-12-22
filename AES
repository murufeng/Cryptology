#include<stdio.h>
#define N 8
int main()
{
	int i,x,y;
	int a[N],b[N];
	printf("请输入两个16进制数:");
	scanf("%x %x",&x,&y);
	printf("十六进制表示加法:");
	printf("%x + %x",x,y);
	printf("=%x",x^y);
	for(i=0;i!=N;i++)
	{
		a[N-1-i]=x%2;
		x/=2;
	}
	for(i=0;i!=N;i++)
	{
		b[N-1-i]=y%2;
		y/=2;
	}
	printf("\n");
	printf("二进制表示加法:");
	for(i=0;i<8;i++)
	{
		printf("%d",a[i]);
	}
		printf("+");
	for(i=0;i<8;i++)
	{
		printf("%d",b[i]);
	}
	printf("=");
	for(i=0;i<8;i++)
	{
		printf("%d",(a[i]^b[i]));
	}
	printf("\n");
	return 0;
}
