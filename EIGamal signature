#include <iostream>
using namespace std;
int mod(int u,int n);
int quick(int x,int r,int n);
int inv(int a,int b);
int main()
{
	int p,g,x,y,a,b,m,c1,c2,x1,x2,k,r;
	cout<<"please input p and g"<<endl;
	cout<<"p=";
	cin>>p;
	cout<<"g=";
	cin>>g;
	cout<<"x=";
	cin>>x;
	y=quick(g,x,p);
	cout<<"please input m:";
	cin>>m;
	cout<<"随机选取整数k=";
	cin>>k;
	c1=quick(g,k,p);
	a=mod(k,p-1);
	cout<<"a="<<a<<endl;
	b=(m-x*c1)*a;
	c2=inv(b,p-1);
	cout<<"c2="<<c2<<endl;
	cout<<"密文为:"<<"c=("<<c1<<","<<c2<<")"<<endl;
	x1=(quick(y,c1,p)*quick(c1,c2,p))%p;
	x2=quick(g,m,p);
	if(x1==x2)
		cout<<"("<<c1<<","<<c2<<")"<<"是对明文m="<<m<<"的有效签名"<<endl;
	else
		cout<<"("<<c1<<","<<c2<<")"<<"不是对明文m="<<m<<"的有效签名"<<endl;
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
int inv(int a,int b)
{
	int c=a%b;
	if(c<0)
		return c=c+b;
	else
		return c;
}
