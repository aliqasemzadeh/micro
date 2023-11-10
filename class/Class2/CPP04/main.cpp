#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Please enter A:";
    cin >> a;

    cout << "Please enter B:";
    cin >> b;

    if(a > b) {
        cout << "A is bigger.";
    }  else if(b > a) {
        cout << "B is bigger.";
    } else {
        cout << "Both are equal.";
    }

    return 0;
}
