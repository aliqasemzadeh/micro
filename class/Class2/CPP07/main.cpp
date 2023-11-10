#include <iostream>

#define PI 3.14
const float pi = 3.14;

using namespace std;

int main()
{
    int r;
    cout << "Please enter radius:";
    cin >> r;
    cout << "Area:" << PI * r *r << endl;
    cout << "Surrounding:" <<  2 * PI * r << endl;
    return 0;
}
