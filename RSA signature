#include <iostream>
using namespace std;
int quick(int x,int r,int n);
int mod(int u,int n);
int main()
{
	int p,q,n,x,d,y,e,m,c;
	cout<<"please input p and q"<<endl;
	cout<<"p=";
	cin>>p;
	cout<<"q=";
	cin>>q;
	n=p*q;
	cout<<"e=";
	cin>>e;
	x=(p-1)*(q-1);
	cout<<n<<endl;
	cout<<x<<endl;
	d=mod(e,x)%x;
	cout<<"d="<<d<<endl;
	cout<<"input m :";
	cin>>m;
	c=quick(m,d,n);
	cout<<"签名为:"<<c<<endl;
	y=quick(c,e,n);
	if(y==m)
		cout<<c<<"是消息"<<m<<"的有效签名"<<endl;
	else
		cout<<c<<"不是消息"<<m<<"的有效签名"<<endl;
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
