// Лабораторна робота No 6.1
#include <iostream>
using namespace std;
//#include <ctime>
#include <time.h>

int Sum(int mas[], const int n);




int main() {

    int x; int i = 0;
    while (i < 23)
    {

        x = rand() % 13 + 4;

        /*if ( x == 6 )
        {
            continue ;
        }*/
        if (x == 9)
        {
            continue;
        }

        /*if ( x == 12 )
        {
            continue ;
        }
        */
        if (x == 15)
        {
            continue;
        }

        cout << " " << x << " ";
        i = i + 1;


    } //виведення всіх рандомних елементів масиву

    const int s = 23;// кількість елементів масиву
    int a[s] = { 4,13,8,5,5,16,7,5,11,7,4,8,16,5,13,14,14,11,12,7,7,7 };// оголосили та ініціалізували масив вже з рандомними значеннями
    cout << "sum = " << Sum(a, s) << ";" << endl;

    cout << "amount of numbers= " << s << ";"; //ксть елементів одновимірного масиву

     //заміна елементів масиву нулями :

    for (int i = 0; i < s; i++) {
        cout << "a[" << i << "]= ? ";
        cin >> a[i];
    }

    for (int i = 0; i < s - 1; i++)
    {

        int imin = i;
        for (int j = i + 1; j < s; j++)
            if (a[j] < a[imin])
                imin = j;
        int tmp = a[i];
        a[i] = a[imin];
        a[imin] = tmp;
    }

    for (int i = 0; i < s; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}


int Sum(int mas[], const int n)
{
    int m = 0;
    for (int i = 0; i < n; i++) // ітераційний спосіб)
        m += mas[i];
    return m;
}


/*
#include <iostream>
using namespace std;

int Sum(int mas[], const int i);

int main() {
    const int s=23;
    int a[s] = {4,13,8,5,5,16,7,5,11,7,4,8,16,5,13,14,14,11,12,7,7,7};

    cout << "sum " << Sum(a,s-1) << endl; // s-1 //  значення максимального індексу

    return 0;
}
int Sum(int mas[], const int i) // рекурсивний спосіб)
{
    if (i<0)
        return 0;
    else
        return mas[i] + Sum(mas,i-1);
}*/