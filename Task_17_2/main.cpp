#include <iostream>

void reverseArray(int* array, int size)
{
    std::cout << "Original array: ";
    for(int i = 0; i < 10; i++)
    {
        array[i] = i+1;
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    for(int i = 0; i < size/2; i++)
    {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }

    std::cout << "Reversed array: ";
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main(int, char**){
    int array[10] = {};

    reverseArray(array, 10);
}
