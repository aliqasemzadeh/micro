#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14


int main()
{
    int r;
    cout << "Please enter radius:";
    cin >> r;
    cout << "S:" << 2 * PI * r;
    cout << "A:" << PI * pow(r, 2);
}