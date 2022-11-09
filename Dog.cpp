// Animals_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"

void Dog:: Barking(int count)
{
    weight -= 2 * count;
}
void Dog:: Eating(int gram)
{
    weight += gram;
}
void Dog::Playing()
{
    weight -= 1;
}

void Dog:: Sleeping(int minutes)
{
    weight +=minutes / 60;
}

Dog::Dog(int aWeight, char aName[10])
{
    weight = aWeight;
    strcpy_s(name, aName);
}

int main_Dog()
{
    char n1[] = "Kazablan";
    char n2[] = "Lassi";
    Dog Kaza(40100, n1);
    Dog Lassi(30000, n2);

    Kaza.weight = 40000;
    Kaza.Eating(170);
    Kaza.Sleeping(30);
    Kaza.Playing();

    Lassi.weight = 25000;
    for (int i = 0; i < 10; i++)
    {
        Lassi.Playing();
    }
    Lassi.Eating(100);
    Lassi.Sleeping(60);

    std::cout << "Hello World!\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
