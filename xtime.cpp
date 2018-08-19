#include<stdio.h>

unsigned char XTIME(unsigned char x);

unsigned char multiply(unsigned char a, unsigned char b);

int exchange(int x);

#define N 8

int main()

{

 

    unsigned char z;

    int a,b;

    printf("请输入两个16进制数:");

    scanf("%x %x",&a,&b);

    z=multiply(a,b);

    printf("十六进制乘法表示:");

    printf("%x*%x=",a,b);

    printf("%x\n",z);

    printf("二进制的乘法表示:");

    exchange(a);

    printf("*");

    exchange(b);

    printf("=");

    exchange(z);

    printf("\n");

    return 0;

}

int exchange(int x)

{

    int i,A[N];

    for(i=0;i!=N;i++)

    {

        A[N-1-i]=x%2;

        x/=2;

    }

    for(i=0;i!=N;i++)

    {

        printf("%d",A[i]);

    }

    return 0;

}


unsigned char XTIME(unsigned char x) 
{ 
    return ((x << 1) ^ ((x& 0x80) ? 0x1b : 0x00));  
}

  

unsigned char multiply(unsigned char a, unsigned char b) 
{  

    unsigned char temp[8] = { a};  

    unsigned char tempmultiply =0x00;  

    int i = 0;  

    for (i = 1; i < 8; i++) {  

        temp[i] = XTIME(temp[i -1]);  

    } 


    tempmultiply = (b & 0x01) *a;  

    for (i = 1; i <= 7; i++)
{  

        tempmultiply ^= (((b >>i) & 0x01) * temp[i]);  

    } 


    return tempmultiply;  

}


