#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 30, b;
    b = a; // giving a=b gives sematic error
    cout << setw(25) << "the value of b "<< "=" << setw(4) << b << endl;
    b = a + 2;
    cout << setw(25) << "value of b "<< "=" << setw(4) << b << endl;
    return 0;
}