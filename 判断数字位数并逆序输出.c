#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a / 10000 < 1)
	{
		if (a / 1000 < 1)
		{
			if (a / 100 < 1)
			{
				if (a / 10 < 1)
				{
					printf("%d是个位数。\n", a);
					printf("他的个位是%d", a);
					printf("他的逆序:%d", a);
					return 0;
				}
				else
				printf("%d是十位数。\n", a);
				printf("他的十位是：%d\n", a / 10);
				printf("他的个位是：%d\n",a%10 );
				printf("他的逆序是%d%d", a % 10, a / 10);
				return 0;
			}
			else
				printf("%d是百位数。\n", a);
			    printf("他的百位是%d\n", a / 100);
			    printf("他的十位是%d\n", (a / 10) % 10);
				printf("他的个位是%d\n", a % 10);
				printf("他的逆序%d%d%d", a % 10, (a / 10) % 10, a / 100);
				return 0;
		}
		else
			printf("%d是千位数。\n", a);
		    printf("他的千位是:%d\n", a / 1000);
		    printf("他的百位是%d\n", (a / 100) % 10);
		    printf("他的十位是%d\n", (a / 10) % 10);
		    printf("他的个位是%d\n", a % 10);
		    printf("他的逆序%d%d%d%d", a % 10, (a / 10) % 10, (a / 100) % 10, a / 1000);
	}
	else
		printf("%d是万位数。", a);
	    printf("他的万位是%d\n", a / 10000);
	    printf("他的千位是:%d\n", (a / 1000)%10);
	    printf("他的百位是%d\n", (a / 100) % 10);
	    printf("他的十位是%d\n", (a / 10) % 10);
	    printf("他的个位是%d\n", a % 10);
	    printf("他的逆序%d%d%d%d%d", a % 10, (a / 10) % 10, (a / 100) % 10, (a / 1000) % 10, a / 10000);









	return 0;
}





