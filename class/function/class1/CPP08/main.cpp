#include <iostream>
// تابعی بنویسید که
// n!  = 1*2*3...*n
// حاصل آن را بدست آورد
using namespace std;

int factor(int n)
{
    int m = 1;
    for(int i =1; i<=n;i++)
    {
        m = m * i;
    }
    return m;
}

int main()
{
    int x , y;
    cin >> x >> y;
    cout << "x!=" << factor(x) << endl;
    cout << "y!=" << factor(y) << endl;
    return 0;
}
