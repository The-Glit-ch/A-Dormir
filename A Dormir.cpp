#include <iostream>
#include <Windows.h>

int main()
{
    int i = 0;
    while (true)
    {
        std::cout << i <<" sheep\n";
        Sleep(1000);
        i++;
    }
}
