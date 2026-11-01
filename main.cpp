#include <iostream>
#include <cmath>

using namespace std;

// Оголошення функцій
void task_if37();
void task_if11();
void task_geom34();

int main()
{
    int menu;

    cout << "Choose task:" << endl;
    cout << "1 - If37" << endl;
    cout << "2 - If11" << endl;
    cout << "3 - Geom34" << endl;
    cout << "Your choice: ";
    cin >> menu;

    if (cin.fail())
    {
        cout << "Wrong input!" << endl;
        return 0;
    }

    switch (menu)
    {
        case 1: task_if37(); break;
        case 2: task_if11(); break;
        case 3: task_geom34(); break;
        default: cout << "Wrong choice!" << endl;
    }

    return 0;
}

// If37
// Обчислити значення функції q(x) для заданого x
void task_if37()
{
    double x, q;

    cout << "If37" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (cin.fail())
    {
        cout << "Wrong input!" << endl;
        return;
    }

    if (x < 0)
    {
        q = -2 * x;
    }
    else if (x <= 2)
    {
        q = x * x + 1;
    }
    else
    {
        q = 5;
    }

    cout << "Result: " << q << endl;
}

// If11
// Якщо числа різні, замінити їх на більше число
// Якщо однакові, замінити обидва числа на нуль
void task_if11()
{
    int A, B;

    cout << "If11" << endl;
    cout << "Enter A: ";
    cin >> A;

    cout << "Enter B: ";
    cin >> B;

    if (cin.fail())
    {
        cout << "Wrong input!" << endl;
        return;
    }

    if (A != B)
    {
        if (A > B)
        {
            B = A;
        }
        else
        {
            A = B;
        }
    }
    else
    {
        A = 0;
        B = 0;
    }

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
}

// Geom34
// Перевірити, чи належить точка зеленій області
void task_geom34()
{
    double r, x, y;

    cout << "Geom34" << endl;
    cout << "Enter r: ";
    cin >> r;

    if (cin.fail() || r <= 0)
    {
        cout << "Wrong radius!" << endl;
        return;
    }

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    if (cin.fail())
    {
        cout << "Wrong input!" << endl;
        return;
    }

    // Відстань до центра кола по осях
    double d = r / sqrt(2.0);

    // Перевірка попадання точки в коло
    double circle = (x - d) * (x - d) + (y - d) * (y - d);

    // Зелена частина кола праворуч
    bool green1 = circle < r * r &&
                  x > d &&
                  y < x &&
                  y > 2 * d - x;

    // Зелений трикутник знизу ліворуч
    bool green2 = x > -d &&
                  x < 0 &&
                  y < x &&
                  y > -2 * d - x;

    if (green1 || green2)
    {
        cout << "Point belongs to green area" << endl;
    }
    else
    {
        cout << "Point does not belong to green area" << endl;
    }
}
