#include <iostream>
using namespace std;
int mod(int u,int n);
int quick(int x,int r,int n);
int main()
{
	int p,q,a,b,c1,c2,m,d,k,x,y,m1;
	cout<<"please input p and a"<<endl;
	cout<<"p=";
	cin>>p;
	cout<<"a=";
	cin>>a;
	cout<<"d=";
	cin>>d;
	b=quick(a,d,p);
	cout<<"please input m:";
	cin>>m;
	cout<<"随机选取整数k=";
	cin>>k;
	c1=quick(a,k,p);
	x=quick(b,k,p);
	c2=(m*x)%p;
	cout<<"密文为:"<<"c=("<<c1<<","<<c2<<")"<<endl;
	y=mod(quick(c1,d,p),p);
	m1=(c2*y)%p;
	cout<<"解密后明文m:"<<m1<<endl;
	return 0;
}
int mod(int u,int n)
{
	int n1,n2,b1,b2,t,k,r,w;
    n1=n,n2=u,b1=0,b2=1;
	k=n1/n2;
	r=n1-k*n2;
	while(r!=0)
	{
		n1=n2;
		n2=r;
		t=b2;
		b2=b1-k*b2;
		b1=t;
		k=n1/n2;
	    r=n1-k*n2;
	}
	if(n2==1)
	{
		w=(n+b2)%n;
		return w;
	}
	return 0;		  
}
int quick(int x,int r,int n)
{
	int a=x,b=r,c=1;
	while(b!=0)
	{
		if(b&1==0)
		{
			b=b/2;
			a=(a*a)%n;
		}
		else
		{
			b=b-1;
			c=(c*a)%n;
		}
	}
	if(b==0)
		return c;
	else
		return 0;
}
