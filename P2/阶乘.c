#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i,j;
	int n,m=1,k=0;		// j辅助运算  k保存进位数据  m,a[]数组的元素个数 每个元素包含四位
	int a[MAX] = { 0 };

	scanf("%d", &n);
    a[0]=1;
	for (i = 1; i <= n; i++)
	{

		for (j = 0; j < m; j++)		// 保证每一个 数组元素都可以 *i  值
		{
			a[j] = a[j] * i + k;
			k = a[j] / 10000;		// 传入下一数组元素的进位数据
			a[j] = a[j] % 10000;	// 可输出的a[] 的值
		}
		if (k)
		{
			a[j] = k;			// 进位数据传给下一个
			m++;
			k = 0;

		}
	}
	printf("%d", a[m - 1]);		// 输出最后一个溢出但是尚未进位，但是
	for (i = m - 2; i >= 0; i--)	 //输出数据
	{
		printf("%04d", a[i]);
	}
	return 0;
}
