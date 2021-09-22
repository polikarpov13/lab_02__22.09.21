#include <iostream>
using namespace std;

int main()
{
    double x;
    double z1;
    double z2;


    cout << "X = ";
    cin >> x;

    z1 = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
    z2 = (1 - tan(x))/(1 + tan(x));

    cout << "Z1 = " << z1 << endl;
    cout << "Z2 = " << z2 << endl;

}

