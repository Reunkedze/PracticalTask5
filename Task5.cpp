#include <iostream>

const int arrLen = 7;

void checkBalance(int arr[], const int len)
{
	for (size_t i = 1; i < len; i++)
	{

		int sum1;
		int sum2;
		sum1 = 0;
		sum2 = 0;

		for (size_t n = 0; n < i; n++)
		{
			sum1 += arr[n];
		}
		for (size_t p = 1; p <= len - i; p++)
		{
			sum2 += arr[len - p];
		}
		if (sum1 == sum2)
		{
			std::cout << "true" << std::endl;
			break;
		}
	}
}

int main()
{
	int myArr[arrLen] = { 11, 5, 8, 1, 16, 5, 4 };
	checkBalance(myArr, arrLen);
}
