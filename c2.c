#include <stdio.h> 

int main()
{
	int sum = 0, i = 0, item = 0;
	int a,n;
	scanf("%d%d", &a, &n);
	while( i<n )
	{
		item = item*10+a;
		sum+=item;
		i++;
	}
	printf("sum=%d", sum);
	return 0;
}
