#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    float m, n;
    x = 5;
    y = 4;
    m = 2.5;
    n = x + y / x;
    cout << n << endl;
    z = m * x + y;
    cout << z << endl;
    z *= x * m + x;//equals to z= z*x*m+x
    cout << z << endl;
    return 0;
}