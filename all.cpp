#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    double x, y, z;
    cout << "Введите x, y, z: ";
    cin >> x >> y >> z;
    
    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "Неверные данные" << endl;
        return 1;
    }
    
    if (x + y <= z || x + z <= y || y + z <= x) {
        cout << "Треугольник не существует" << endl;
        return 0;
    }
    
    double a = x, b = y, c = z;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    
    double a2 = a * a, b2 = b * b, c2 = c * c;
    double sum2 = a2 + b2;
    double eps = 1e-10;
    
    if (fabs(sum2 - c2) < eps) {
        cout << "Треугольник прямоугольный" << endl;
    } else if (sum2 < c2) {
        cout << "Треугольник тупоугольный" << endl;
    } else {
        cout << "Треугольник остроугольный" << endl;
    }
    
    return 0;
}
