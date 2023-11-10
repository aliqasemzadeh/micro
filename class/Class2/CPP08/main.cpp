#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a == b) {
        cout << "A is equal to B";
    } else {
        if(a > b){
            cout << "A is bigger than B";
        } else if(a < b) {
            cout << "B is bigger than A";
        } else {
           cout << "A is not equal to B";
        }
    }
    return 0;
}
