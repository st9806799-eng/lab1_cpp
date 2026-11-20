#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 2.0;
    double b = 3.141;

    double inner = 1.0 + cbrt(log(b / a));
    double middle = 1.0 + cbrt((0.711 * log(b)) / inner);
    double y = cbrt(middle);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "y = " << y << endl;

    return 0;
}
