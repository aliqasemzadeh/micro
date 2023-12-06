#include <iostream>

using namespace std;

int main() {
    float v, temp;
    cout << "Please enter voltage:";
    cin >> v;
    temp = (20 * v) / 5 + 30;
    cout << "Temp:" << temp << endl;
    if(temp >= 37.5 || temp <= 36.5) {
        cout << "Check Temp Pleas." << endl;
    }
    return 0;
}
