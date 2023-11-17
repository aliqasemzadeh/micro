#include <iostream>
// پنج عدد از ورودی بگیرد
// حاصل جمع
// حاصل ضرب
// میانگین
// آن ها را حساب کنید
using namespace std;

int main()
{
    int sum = 0;
    int m = 1;

    for(int i = 0; i < 5; i = i + 1)
    {
        int x;
        cin >> x;
        sum += x; // sum = sum + x;
        m *= x; // m = m * x;
    }
    cout << "Sum:" << sum << endl;
    cout << "M:" << m << endl;
    cout << "Average:" << sum / 5.0;
    return 0;
}
