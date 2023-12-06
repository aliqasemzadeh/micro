#include <iostream>

using namespace std;

int main() {
    float v, temp;
    cout << "Please enter voltage:";
    cin >> v;
    temp = (20 * v) / 5 + 30;
    cout << "Temp:" << temp << endl;
    cout << "Real Temp:" << temp - 2 << endl;

    return 0;
}
