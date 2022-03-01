#include <iostream>

void InitArray(int* arr, const int len)
{
    const int input[] = {1, 4, 7, 10, 13, 16, 19, 22};
    for (int i = 0; i < len; i++)
    {
        arr[i] = input[i];
    }
}

int main()
{
    const int arrLen = 8;
    int myarr[8];
    InitArray(myarr, arrLen);
    for (int i = 0; i < arrLen; i++)
    std::cout << myarr[i] << ' ';
}
