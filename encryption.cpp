#include <iostream>
using namespace std;
int mod(int u,int n);
void main()
{
	int a,b,i,t;
	int n=26;
	char m[10000],c[10000];
	cout<<"仿射密码的加密解密算法:"<<endl;
	cout<<"please input ciphertext as m:";
    gets(m);
	cout<<"please input  cipher plaintext as c:";
	gets(c);
	cout<<"please input a :";
	cin>>a;
	cout<<"please input b:";
	cin>>b;
	cout<<"输入的明文为:";
	for(i=0;i<strlen(c);i++)
	{
		cout<<c[i];
	}
	cout<<endl;
	cout<<"输入的密文为:";
	for(i=0;i<strlen(m);i++)
	{
		cout<<m[i];
	}
	cout<<endl;
	cout<<"给明文进行加密后的密文为:";
    for(i=0;i<strlen(c);i++)
	{
		if(c[i]<='z'&&c[i]>='a')
		{
			     c[i]=c[i]-'a';
				 c[i]=((a*c[i])+b)%n;
				 c[i]=c[i]+'a';
		}
		else if(c[i]<='Z'&&c[i]>='A')
		{
				c[i]=c[i]-'A';
				c[i]=((a*c[i])+b)%n;
				c[i]=c[i]+'A';
		}
		else
			{
				c[i]=c[i];
			}
	}
	for(i=0;i<strlen(c);i++)
	{
		cout<<c[i];
	}
	cout<<endl;
	t=mod(a,n);
	for(i=0;i<strlen(m);i++)
	{
		if(m[i]<='z'&&m[i]>='a')
			{
			     m[i]=m[i]-'a';
				 m[i]=(t*(m[i]-b+n))%n;
				 m[i]=m[i]+'a';
			}
			else if(m[i]<='Z'&&m[i]>='A')
			{
				m[i]=m[i]-'A';
				m[i]=(t*(m[i]-b+n))%n;
				m[i]=m[i]+'A';
			}
			else
			{
				m[i]=m[i];
			}
	}
	cout<<"解密后明文:";
	for(i=0;i<strlen(m);i++)
	{
		cout<<m[i];
	}
	cout<<endl;
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
