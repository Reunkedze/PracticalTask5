#include <iostream>

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] == 1)
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    const int mysize = 5;
    int myarr[] = { 1, 0, 0, 1, 0 };
    for (int i = 0; i < mysize; i++)
    std::cout << myarr[i] << ' ';
    std::cout << std::endl;
    print(myarr, mysize);
    for (int i = 0; i < mysize; i++)
    std::cout << myarr[i] << ' ';
}
