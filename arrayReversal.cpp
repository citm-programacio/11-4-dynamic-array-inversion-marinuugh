// arrayReversal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class ArrayDinamico
{
private:
    int size = 0;
    int capacity;

    int* array;

public:
    ArrayDinamico()
    {
        capacity = 4;
        array = new int[capacity];
    }

    ArrayDinamico(int _c)
    {
        capacity = _c;
        array = new int[capacity];
    }

    void printInfo()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    int addElement(int newElement)
    {
        if (size + 1 > capacity)
        {
            cout << "Maximum array size exceeded." << endl;
            return -1;
        }
        else
        {
            array[size] = newElement;
            size++;
        }
    }

    void reverseArray()
    {
        int* arrAux = new int[capacity];
        int j = 0;

        for (int i = size - 1; i >= 0; i--)
        {
            arrAux[j] = array[i];
            j++;
        }
        delete array;
        array = arrAux;
    }
};

int main()
{
    ArrayDinamico myArray;

    myArray.addElement(4);
    myArray.addElement(10);
    myArray.addElement(1);
    myArray.addElement(13);
    myArray.addElement(7);

    myArray.printInfo();

    myArray.reverseArray();

    myArray.printInfo();
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
