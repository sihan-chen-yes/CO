#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i,j;
	int n,m=1,k=0;		// j��������  k�����λ����  m,a[]�����Ԫ�ظ��� ÿ��Ԫ�ذ�����λ
	int a[MAX] = { 0 };

	scanf("%d", &n);
    a[0]=1;
	for (i = 1; i <= n; i++)
	{

		for (j = 0; j < m; j++)		// ��֤ÿһ�� ����Ԫ�ض����� *i  ֵ
		{
			a[j] = a[j] * i + k;
			k = a[j] / 10000;		// ������һ����Ԫ�صĽ�λ����
			a[j] = a[j] % 10000;	// �������a[] ��ֵ
		}
		if (k)
		{
			a[j] = k;			// ��λ���ݴ�����һ��
			m++;
			k = 0;

		}
	}
	printf("%d", a[m - 1]);		// ������һ�����������δ��λ������
	for (i = m - 2; i >= 0; i--)	 //�������
	{
		printf("%04d", a[i]);
	}
	return 0;
}
