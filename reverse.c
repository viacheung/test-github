#include <stdio.h>
#include <math.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse( int number )
{
    int flag=1,i=0,j=0,k=0,sum=0;
    if(number<0)
    {
        number*=(-1);
        flag*=(-1);
    }
    int number1=number;
    while(number1>0)
    {
    	number1/=10;
    	k++;
	}
	int a[k-1];
    while(number>0)
    {
        a[i]=number%10;
        number/=10;
        i++;
    }
    i--;
    while(i>=0)
    {
        sum+=(a[i]*pow(10,j));
        j++;
        i--;
    }
    if(flag<0)
        sum*=(-1);
    return sum;
}
