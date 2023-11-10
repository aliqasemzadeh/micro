#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main()
{
    int r;
    cin >> r;
    cout << "A:" << PI * pow(r, 2) << endl;
    cout << "S:" << 2 * PI * r << endl;
    return 0;
}
