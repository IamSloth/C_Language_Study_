

/***************************************************

자기주도 C언어 프로그래밍
Page166, Assesment 8-6

This code is just for studying.
This code was written on March 29, 2022.
by IamSloth

****************************************************/


/** 문제 **
자연수 n을 입력받아 각 문제의 출력예와 같이 출력되는 프로그램을 작성하시오

입력 예) 3
출력 예) 

    1
  1 2
1 2 3

*/


#include <stdio.h>

int main()
{
	int inputNum = 0;
	int outputNum = 1;

	scanf("%d", &inputNum);
	
	for (int i = 1; i <= inputNum; i++)
	{
		for (int j = 1; j <= inputNum*2 - (i * 2); j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= i; j++)
		{
			printf("%d ",outputNum++);
		}

		printf("\n");
		outputNum = 1;
	}

	return 0;
}