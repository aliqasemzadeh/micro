#include <iostream>
// پنج عدد از ورودی بگیرید و مجموع آن را چاپ کنید.
// حاصل ضرب همان پنج عدد را نیز چاپ کنید
// میان گین این 5 عدد را نیز چاپ کنید
using namespace std;

int main()
{
    int sum = 0;
    int m = 1;
    for(int i=0; i< 5; i++)
    {
        int x;
        cin >> x;
        sum += x; //  sum = sum + x;
        m *= x; //  m = m * x;
    }
    cout << "Sum:" << sum << endl;
    cout << "M:" << m << endl;
    cout << "Avg:" << sum / 5.0 << endl;
    return 0;
}
