

#include <iostream>
#include <cmath>//модуль мат. логики
#include <ctime>//модуль для работы рандома
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, nonnegativeX=0;
    cout << "Введите количество элементов первого массива: ";
    cin >> n;
    int* massX = new int[n];
    float* massY = new float[n];
    for (int i = 0; i < n; i++)
    {
        massX[i] = rand() % 199 - 99;
    }
    for (int i = 0; i < n; i++)
    {
        if (massX[i] > 0)
        {
            massY[i] = 1 - sin(massX[i]);
            nonnegativeX++;
        }
        if (massX[i] == 0) 
        {
            massY[i] = 1 - cos(massX[i]);
            nonnegativeX++;
        }
        if (massX[i] < 0)
        {
            massY[i] = 1 - cos(massX[i]);
        }
    }
    cout << "Массив massX: ";
    for (int i = 0; i < n; i++)
    {
        cout << massX[i] << " ";
    }
    cout << endl << "Массив massY: ";
    for (int i = 0; i < n; i++)
    {
        cout << massY[i] << " ";
    }
    cout << endl << "Кол-во неотрицательных элементов в массиве massX: "<< nonnegativeX;
}

