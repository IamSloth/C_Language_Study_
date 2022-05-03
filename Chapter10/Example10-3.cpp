/***************************************************

자기주도 C언어 프로그래밍
Page199, Example 10-3

This code is just for studying.
This code was written on April 2, 2022.
by IamSloth

****************************************************/


/** 문제 **
피보나치 수열이란 첫 번째 항과 두 번째 항만 1이고
나머지 항은 바로 앞의 두 항의 합과 같은 수열을 말한다
각 항의 값을 계산하는 다음의 예를 보고
피보나치 수열의 10, 20, 30, 40 항의 값을 출력하는 프로그램을 작성하시오.

입력 예) 
출력 예) 피보나치 수열 10항 : 55
		 피보나치 수열 20항 : 6765
		 피보나치 수열 30항 : 832040
		 피보나치 수열 40항 : 102334155
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

	printf("피보나치 수열 10항 : %d\n", num[10]);
	printf("피보나치 수열 20항 : %d\n", num[20]);
	printf("피보나치 수열 30항 : %d\n", num[30]);
	printf("피보나치 수열 40항 : %d\n", num[40]);

	printf("\n");

	return 0;
}