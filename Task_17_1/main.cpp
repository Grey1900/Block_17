#include <iostream>

void swap (int* a, int* b)
{
    std::cout   << "Befor swap: a = " 
                << *a
                << ", b = "
                << *b
                << std::endl;

    int temp = *a;
    *a = *b;
    *b = temp;

    std::cout   << "After swap: a = " 
                << *a
                << ", b = "
                << *b
                << std::endl;
}

int main()
{
    int a = 10;
    int b = 20;
        
    swap(&a, &b);
}
