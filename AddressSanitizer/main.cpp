// AddressSanitizer

#include <iostream>

int returnValue()
{
    int *arr = new int[100];
    return arr[100];
}



int main()
{
    int arr_value = returnValue();

    std::cout << "arr = "<< arr_value << std::endl; // allocate array of 100 integeres

    return 0;
}