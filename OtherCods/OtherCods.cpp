/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    int i,vrem, time = 0;

    cout << "Введите кол-во прошедших 5 минутных интервалов:" << endl;
    cin >> vrem;

    for (i = 0; i <= vrem; i++)
        time += 5 * i;

    cout << time;

    return 0;
}*/

/*#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    srand(time(0));

    const int SIZE = 10;

    int arr[SIZE];
    double Sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 20;
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        Sum += arr[i];
    }

    cout << endl;
    cout << Sum << endl << endl;

    cout << Sum / SIZE;
    cout << endl;

    return 0;
}*/

/*#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    srand(time(0));

    int const SIZE = 4, ROW = 4;
    int arr[SIZE][ROW];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Главная диагональ: ";

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0;  j < ROW;  j++)
        {
            if (i == j)
                cout << arr[i][j] << " ";
        }
    }

    cout << endl << "Побочная диагональ: ";

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            if (i + j == SIZE - 1)
                cout << arr[i][j] << " ";
        }
    }

    cout << endl << "Элеметны под главной диагонали: ";

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            if (i > j)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Элементы над главной диагональю: " << endl;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < ROW; j++)
        {
            if (i < j)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

/*#include <iostream>
#include <string>

using namespace std;//рисуем пирамидки

int main()
{
    setlocale(LC_ALL, "Russian");
    system("color 0A");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}*/