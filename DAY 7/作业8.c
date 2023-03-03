 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//非递归
//fei()
//{
//	int i = 0;
//	int n = 0;
//	int sum1 = 1;
//	int sum2 = 1;
//	int ret = 1;
//	printf("请输入要打印的数：\n");
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

//递归
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
	printf("请输入要打印的数字。\n");
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

//n的K 次方
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
	printf("请输入n的值：\n");
	scanf("%d", &n);
	printf("请输入k的值：\n");
	scanf("%d", &k);
	int ret=S(n,k);
	printf("%d", ret);

}

//求和
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
	printf("请输入要计算的数字。\n");
	scanf("%d", &n);
	int ret = Sum(a, n);
	printf("%d\n", ret);
}


//反向字符串
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
	/*printf("请输入要操作字符串。\n");
	scanf("%s", &ch);*/
	int sz = strlen(ch1);
	reverse_string(&ch1,&ch2,sz);
	printf("%s\n", ch2);
}

int main()
{

	//fei();//斐波那契数列。
	//squ();//n的k次方。
	//sum();//计算每位之和。
	re();//反向操作符。
	return 0;
}