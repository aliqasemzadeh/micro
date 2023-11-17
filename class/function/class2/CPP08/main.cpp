#include <iostream>
// تابعی بنویسید که
// n!  = 1*2*3...*n
// حاصل آن را بدست آورد
using namespace std;

int fact(int n)
{
    int m = 1;
    for(int i = 1; i<=n;i++)
    {
        m = m * i;
    }
    return m;
}

int main()
{
    int x;
    cin >> x;
    cout << fact(x);
    return 0;
}
