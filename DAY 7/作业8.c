 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ǵݹ�
//fei()
//{
//	int i = 0;
//	int n = 0;
//	int sum1 = 1;
//	int sum2 = 1;
//	int ret = 1;
//	printf("������Ҫ��ӡ������\n");
//	scanf("%d", &n);
//	if (n < 3)
//		printf("1");
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			sum1 = sum2;
//			sum2 = ret;
//			ret = sum1 + sum2;
//
//		}
//		printf("%d", ret);
//	}
//	
//}

//�ݹ�
fac(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fac(n - 1) + fac(n - 2);
	}
}

fei()
{
	int n = 0;
	int ret = 0;
	printf("������Ҫ��ӡ�����֡�\n");
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("1");
	}
	if (n > 2)
	{
		ret = fac(n);
	}
	printf("%d", ret);
}

//n��K �η�
int S(int n,int k)
{
	if (k > 0)
	{
		return n * S(n, k - 1);
	}
	return 1;
}

squ()
{
	int n = 0;
	int k = 0;
	printf("������n��ֵ��\n");
	scanf("%d", &n);
	printf("������k��ֵ��\n");
	scanf("%d", &k);
	int ret=S(n,k);
	printf("%d", ret);

}

//���
int Sum(int a, int n)
{
	if (n > 9)
	{
		a += n % 10;
		Sum(a, n / 10);
	}
	else
		return a + n;
}
int sum()
{
	int n = 0;
	int a = 0;
	printf("������Ҫ��������֡�\n");
	scanf("%d", &n);
	int ret = Sum(a, n);
	printf("%d\n", ret);
}


//�����ַ���
void reverse_string(char* string1, char* string2, int n)
{
	if (n > 1)
	{
		*(&string2 +6-n ) = *(&string1+n-1);
		n--;
	}
	else
		return 0;
}

void re()
{
	char ch1[] = "abcdef";
	char ch2[] = "abcdef";
	/*printf("������Ҫ�����ַ�����\n");
	scanf("%s", &ch);*/
	int sz = strlen(ch1);
	reverse_string(&ch1,&ch2,sz);
	printf("%s\n", ch2);
}

int main()
{

	//fei();//쳲��������С�
	//squ();//n��k�η���
	//sum();//����ÿλ֮�͡�
	re();//�����������
	return 0;
}