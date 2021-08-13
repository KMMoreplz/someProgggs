#include <iostream>

void arrayMass(long int mas[], int smallest, int d, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        mas[i] = (0 + rand() % d) - smallest;
    }
}