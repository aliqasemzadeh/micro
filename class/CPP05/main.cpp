#include <iostream>

using namespace std;

// Two if in one program
// شرط های منطقی تو در تو

int main()
{
    int a, b, reset = 0;

    cin >> reset;
    if(reset > 0) {
        cin >> a >> b;
        if(a > b) {
            cout << "A is bigger";
        } else {
            cout << "B is bigger";
        }
    }

    return 0;
}
