
// Лабораторна робота No 6.2 
#include <iostream> 
#include <iomanip>
#include <time.h>
using namespace std;

int UnitTest(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        S += a[i];
    return S;
}

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1); //рекурсивний спосіб
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}
/*
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i=0; i<size; i++)
        a[i] = Low + rand() % (High-Low+1); //ітераційний спосіб
}
*/
void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i]; //рекурсивний спосіб
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

/*
void Print(int* a, const int size)
{
    for (int i=0; i<size; i++)  //ітераційний спосіб
        cout << setw(4) << a[i];
    cout << endl;
}
*/

void Inverse(int* a, const int n)
{

    for (int i = 0; i < n / 2; i++) //ітераційний спосіб
    {
        int tmp;
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
        ++i;
    }
}
//рекурсивний спосіб
/*void Inverse(int*a, const int n, int i)
{
    int tmp = a [i];

    a[i] = a[i + 1];
    a[i + 1] = tmp;
    if (i < n / 2)
    {
        Inverse(a, n, i+1);
    }
}*/
int main()
{
    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел 
    const int n = 8;
    int a[n];

    int Low = -10;
    int High = 10;

    Create(a, n, Low, High, 0);
    //Create(a, n, Low, High); //ітераційний спосіб

    Print(a, n, 0);
    //Print(a, n);//ітераційний спосіб

    Inverse(a, n);
    //Inverse(a, n,0); //рекурсивний спосіб

    Print(a, n, 0);
    return 0;
}

