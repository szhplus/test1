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
					printf("%d�Ǹ�λ����\n", a);
					printf("���ĸ�λ��%d", a);
					printf("��������:%d", a);
					return 0;
				}
				else
				printf("%d��ʮλ����\n", a);
				printf("����ʮλ�ǣ�%d\n", a / 10);
				printf("���ĸ�λ�ǣ�%d\n",a%10 );
				printf("����������%d%d", a % 10, a / 10);
				return 0;
			}
			else
				printf("%d�ǰ�λ����\n", a);
			    printf("���İ�λ��%d\n", a / 100);
			    printf("����ʮλ��%d\n", (a / 10) % 10);
				printf("���ĸ�λ��%d\n", a % 10);
				printf("��������%d%d%d", a % 10, (a / 10) % 10, a / 100);
				return 0;
		}
		else
			printf("%d��ǧλ����\n", a);
		    printf("����ǧλ��:%d\n", a / 1000);
		    printf("���İ�λ��%d\n", (a / 100) % 10);
		    printf("����ʮλ��%d\n", (a / 10) % 10);
		    printf("���ĸ�λ��%d\n", a % 10);
		    printf("��������%d%d%d%d", a % 10, (a / 10) % 10, (a / 100) % 10, a / 1000);
	}
	else
		printf("%d����λ����", a);
	    printf("������λ��%d\n", a / 10000);
	    printf("����ǧλ��:%d\n", (a / 1000)%10);
	    printf("���İ�λ��%d\n", (a / 100) % 10);
	    printf("����ʮλ��%d\n", (a / 10) % 10);
	    printf("���ĸ�λ��%d\n", a % 10);
	    printf("��������%d%d%d%d%d", a % 10, (a / 10) % 10, (a / 100) % 10, (a / 1000) % 10, a / 10000);









	return 0;
}





