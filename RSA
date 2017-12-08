#include <iostream>
using namespace std;
int quick(int x,int r,int n);
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
	d=1;
    while(((e*d)%x)!=1)
	{
    d++;
	}
	//由公钥e求出私钥d
	//检测d;
    /*cout<<d<<endl;
	cout<<((d*e-1)%x)<<endl;*/
	cout<<"input m :";
	cin>>m;
	c=quick(m,e,n);
	cout<<"加密后 c:"<<c<<endl;
	y=quick(c,d,n);
	cout<<"解密后 m:"<<y<<endl;
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
