#include <iostream>
using namespace std;
void main()
{
	int n,u,n1,n2,b1,b2,t,k,r,w,c;
	cout<<"please input two interger u and n:"<<endl;
	cout<<"u=";
	cin>>u;
	cout<<"n=";
	cin>>n;
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
	if(n2!=1)
	{
		cout<<u<<"模"<<n<<"不存在逆元"<<endl;
	}
	if(n2==1)
	{
		w=(n+b2)%n;
		cout<<u<<"模"<<n<<"的逆元:"<<w<<endl;
		c=w%n;
		cout<<w<<"mod"<<n<<"="<<c<<endl;
	}
}
