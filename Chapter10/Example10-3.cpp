/***************************************************

�ڱ��ֵ� C��� ���α׷���
Page199, Example 10-3

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** ���� **
�Ǻ���ġ �����̶� ù ��° �װ� �� ��° �׸� 1�̰�
������ ���� �ٷ� ���� �� ���� �հ� ���� ������ ���Ѵ�
�� ���� ���� ����ϴ� ������ ���� ����
�Ǻ���ġ ������ 10, 20, 30, 40 ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��) 
��� ��) �Ǻ���ġ ���� 10�� : 55
		 �Ǻ���ġ ���� 20�� : 6765
		 �Ǻ���ġ ���� 30�� : 832040
		 �Ǻ���ġ ���� 40�� : 102334155
*/

//1 1 2 3 5 8 13 21 34 55

#include <stdio.h>

int main()
{
	int num[45] = { 0,1,1 };
	printf("\n");

	for (int i = 1; i < 41; i++)
	{
		num[i + 2] = num[i] + num[i + 1];
	}

	printf("�Ǻ���ġ ���� 10�� : %d\n", num[10]);
	printf("�Ǻ���ġ ���� 20�� : %d\n", num[20]);
	printf("�Ǻ���ġ ���� 30�� : %d\n", num[30]);
	printf("�Ǻ���ġ ���� 40�� : %d\n", num[40]);

	printf("\n");

	return 0;
}