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
void reverse_string(char* string1, char* string2, int n,int a)
{
	if (n >= 2)
	{
		*(&string2[n-2]) = *(&string1[a-n]);
		reverse_string(string1, string2,  n-1,a);
	}
}

void re()
{
	char ch1[10] = { 0 };
	//char ch2[10] = { 0 };
	int sz = 0;
	printf("������Ҫ�����ַ�����\n");
	scanf("%s", &ch1);
	/*printf("�������ַ������ȡ�\n");
	scanf("%d", &sz);*/
	sz = sizeof(&ch1) + 2;
	int a = sz;
	char ch2[sizeof(&ch1) + 2] = { 0 };
	reverse_string(&ch1,&ch2,sz,a);
	printf("%s\n", ch2);
}

//�ݹ鷽��
//int my_strlen(char* ch1)
//{
//	if (*ch1!= 0)
//	{
//		return 1 + my_strlen(&ch1[0] + 1);
//	}
//	else
//		return 0;
//	
//}
//
////�ǵݹ�
//int my_strlen(char* ch1)
//{
//	int i = 0;
//	for (i = 0; *(&ch1[i]) != 0; i++);
//	return i;
//}
//
//void Strlen()
//{
//	char ch1[] = "qwerty";
//	printf("�ַ�������Ϊ%d",my_strlen(&ch1));
//}

//�ݹ�
int step1(int n)
{
	if (n >= 1)
	{
		return n*step1(n - 1);
	}
	else
		return 1;
}
int step2(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}

void step()
{
	int n = 0;
	printf("������n: \n");
	scanf("%d", &n);
	int ret1 = step1(n);
	int ret2 = step2(n);
	printf("�ݹ���Ϊ��%d��\n�ǵݹ���Ϊ��%d��\n", ret1,ret2);
}

//�ݹ�
int Print(int n)
{
	if (n > 9 )
	{
		Print(n / 10);
	}
	printf("%d ", n%10);
}
void print()
{
	int n = 0; 
	printf("���������֣�\n");
	scanf("%d", &n);
	Print(n);
}

int main()
{

	//fei();//쳲��������С�
	//squ();//n��k�η���
	//sum();//����ÿλ֮�͡�
	//re();//�����������
	//Strlen();//�Զ���ʵ��strlen��
	//step();//ʵ�ֽ׳ˡ�
	print();//��ӡ���ֵ�ÿһλ��
	return 0;
}