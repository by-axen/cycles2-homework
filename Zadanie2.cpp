#include <stdio.h>

/* https://github.com/by-axen/cycles2-homework */

int main()
{
	int a;
	while(a!=22)
	{
		scanf("%i",&a);
		if(a==7)
		{
			printf("chislo ravno 7\n");
		}
		else
		{
			if(a>7)
			{
			printf("chislo bolshe 7\n");
			}
			else
			{
			printf("chislo menshe 7\n");
			}
		}
		
		if(a==10)
		{
			printf("chislo ravno 10\n");
		}
		else
		{
			if(a>10)
			{
			printf("chislo bolshe 10\n");
			}
			else
			{
			printf("chislo menshe 10\n");
			}
		}
		
		if(a%2==0)
		{
			printf("chislo delitsya na 2\n");
		}
		else
		{
			printf("hislo NE delitsya na 2\n");
		}
		
		if(a%3==0)
		{
			printf("chislo delitsya na 3\n");
		}
		else
		{
			printf("hislo NE delitsya na 3\n");
		}
	}
		
	return 0;
}
