/*************************
 * Автор: Иванова Ксения *
 * Вариант: 1            *
 * Название: Лаба 1      *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double t1, t2, t3, alfa, dl, radianAlfa;
  double halfAlpha, sinHalf, sin2, sin4;
  const double pi = 3.14;
  const double g = 9.8;

  // Блок ввода данных
  cout << "alfa = ";
  cin >> alfa;
  cout << "dl = ";
  cin >> dl;

  // Блок расчетов
  radianAlfa = alfa * (pi / 180.0);
  t1 = 2.0 * pi * sqrt(dl / g);
  t2 = 2.0 * pi * sqrt((dl / g) * (1.0 + (1.0 / 16.0) * pow(radianAlfa, 2.0)));

  halfAlpha = radianAlfa / 2.0;
  sinHalf = sin(halfAlpha);
  sin2 = pow(sinHalf, 2.0);
  sin4 = pow(sinHalf, 4.0);
  t3 = 2.0 * pi * sqrt((dl / g) * (1.0 + (1.0 / 4.0) * sin2 + (9.0 / 64.0) * sin4));

  // Блок вывода результатов
  cout << "_________________________" << endl
       << "t1 = " << t1 << endl
       << "t2 = " << t2 << endl
       << "t3 = " << t3 << endl
       << "_________________________" << endl;

  return 0;
}
