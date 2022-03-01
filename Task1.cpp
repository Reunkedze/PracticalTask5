#include <iostream>
 
void print(double arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	const int mysize = 5;
	double myarr[] = { 22.3, 33.2, 12.18, 34.15, 27.19 };

	print(myarr, mysize);
	return 0;
}
