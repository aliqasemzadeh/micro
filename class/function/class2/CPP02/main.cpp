#include <iostream>
// یک عدد از ورودی بگیرید و مشخص کنید زوج است یا فرد
using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x % 2 == 0)
    {
        cout << "It is even.";
    }else{
        cout << "It is odd.";
    }
    return 0;
}
