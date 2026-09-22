// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/************************
 * Автор: Иванова К.Д.  *
 * Дата : 16.09.2026    *
 * Вариант 1            *
 * Название : Лаба 1    *
 ************************/

#include <iostream>
using namespace std;
int main() {

    double t1, t2, t3, alfa, dl, radianAlfa;
    const double pi = 3.14;
    const double g = 9.8;

    cout << "alfa = ";
    cin >> alfa;

    cout << "dl = ";
    cin >> dl;

    radianAlfa = alfa * (pi / 180.0);

    t1 = 2.0 * pi * sqrt(dl / g);

    t2 = 2.0 * pi * sqrt((dl / g) * (1.0 + (1.0 / 16.0) * pow(radianAlfa, 2)));

    double halfAlpha = radianAlfa / 2.0;
    double sinHalf = sin(halfAlpha);
    double sin2 = pow(sinHalf, 2);
    double sin4 = pow(sinHalf, 4);

    t3 = 2.0 * pi * sqrt((dl / g) * (1.0 + (1.0 / 4.0) * sin2 + (9.0 / 64.0) * sin4));

    cout << "_________________________" << endl;
    cout << "t1 = " << t1 << endl;
    cout << "t2 = " << t2 << endl;
    cout << "t3 = " << t3 << endl;
    cout << "_________________________" << endl;
}