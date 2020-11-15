// Лабораторна робота No 6.4
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int  N, c, m, imin, imax, i, max, min;

int UnitTest(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        S += a[i];
    return S;
}

int Max(int* a, const int size)
{
    int max = 0;
    int imax = -1;
    for (int i = 0; i < size; i++)
        if (a[i] > max)
        {
            max = a[i];
            imax = i;
        }
    return imax;

}

int Min(int* a, const int size)
{
    int min = 0;
    int imin = -1;
    for (int i = 0; i < size; i++)
        if (a[i] < min)
        {
            min = a[i];
            imin = i;
        }
    return imin;
}

void Input(int* a, const int size)
{
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << endl;
}

void Sort(int* a, const int size)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }

        }
    }
}
int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (a[i] < 0)
            S += a[i];
    return S;
}

/*
int Multi(int* a, const int size)
{
    int p=1;
    for (int i=0; i<size; i++)
        if ( i<imax && i>imin )
            p *= a[i];
    return p;
}*/


int Multi(int* a, const int size)
{
    int p = 1;
    for (int i = 0; i < size; i++)
        if (i<Max(a, N) && i>Min(a, N))
            p *= a[i];
    return p;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "N = "; cin >> N;
    int a[N];

    Input(a, N);
    cout << "елементи які ви ввели:" << endl;

    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    Sort(a, N);

    cout << "вже впорядковані елементи за зростанням:" << endl;
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;



    Max(a, N); Min(a, N);




    cout << "Добуток елементів масиву на проміжку між максимальним та мінімальним елементами  = " << Multi(a, N) << endl;

    cout << "Сума від'ємних елементів масиву = " << Sum(a, N) << endl;
    return 0;
}
