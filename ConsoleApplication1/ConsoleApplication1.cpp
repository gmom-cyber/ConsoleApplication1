

#include <iostream>
#include <cmath>//модуль мат. логики
#include <ctime>//модуль для работы рандома
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int n, nonnegativeX=0;


    cout << "Введите количество элементов первого массива(max 100): ";
    cin >> n;

    if (n > 100)
    {
        cout << "Сликом большое число *_*";
        return 0;
    }
    int massX[100];
    float massY[100];


    for (int i = 0; i < n; i++)//Заполняем первый

    {
        massX[i] = rand() % 199 - 99;
    }
    for (int i = 0; i < n; i++)//Решаем задачу 
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
    //Красивый вывод данных
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

