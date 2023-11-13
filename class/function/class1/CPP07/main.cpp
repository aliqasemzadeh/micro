#include <iostream>
// یک عدد از ورودی بگیرد و علامت آن را مشخص کند
using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x > 0) {
        cout << "X is +";
    }
    if(x < 0) {
        cout << "X is -";
    }
    if(x == 0) {
        cout << "X is zero";
    }
    return 0;
}
