// Лабораторна робота No 6.3
#include <iostream> 
#include <iomanip>
#include <time.h>
using namespace std;
int i; int j;

int UnitTest(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        S += a[i];
    return S;
}

int Test(int* a, const int size)
{

    if (a[j] > a[j + 1]) //якщо преший елемент масиву білтший за другий-масив упорядкований за спаданням
        cout << "упорядкований за спаданням" << endl;
    else
        cout << "упорядкований за зростанням" << endl; //якщо ні-за не спаданням   
}


int main()
{
    setlocale(LC_ALL, "Russian"); //підключення російської мови для виводу в консолі
    const int n = 5;
    int a[n] = { 1,2,3,4,5 };

    for (i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    Test(a, n);



    const int k = 5;
    int b[k] = { 5,4,3,2,1 };

    for (i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    Test(b, k);


}
