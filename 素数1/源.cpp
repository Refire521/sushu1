#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, k;
	printf("���������֣�n=");
	scanf_s("%d", &n);
	k = sqrt(n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)break;
	}
	if (i < k)printf("��������");
	else  printf("������");
	return 0;
}