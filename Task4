#include <iostream>

const int arrayLength = 8;

void engine(int arr[], const int n)
{
	
	int copy[arrayLength];

	for (size_t i = 0; i < arrayLength; i++)
	{
		copy[i] = arr[i];
	}

	for (size_t i = 0; i < arrayLength; i++)
	{
		if (i - n < arrayLength)
		{
			arr[i] = copy[i - n];
		}
		else if (i - n >= arrayLength)
		{
			arr[i] = copy[(i - n) % arrayLength];
		}
	}
}

int main()
{
	int arr[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
	for (size_t i = 0; i < arrayLength; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
	engine(arr, 1);
	for (size_t i = 0; i < arrayLength; i++)
		std::cout << arr[i] << ' ';
	return 0;
}
