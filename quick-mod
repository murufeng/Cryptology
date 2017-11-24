#include <iostream>
using namespace std;
void main()
{
	int x,a,b,c,r,n;
	cout<<"please input two interger x,r,n:"<<endl;
	cout<<"x=";
	cin>>x;
	cout<<"r=";
	cin>>r;
	cout<<"n=";
	cin>>n;
	a=x,b=r,c=1;
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
	{
		cout<<"x^rmodn="<<c<<endl;
	}
}
