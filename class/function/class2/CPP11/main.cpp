#include <iostream>
// عددی را از ورودی بیگیرید مقسوم علیه های آن را چاپ کنید
// همراه با پیام مناسب
using namespace std;

int main()
{
    int x;
    cout << "Please enter x:";
    cin >> x;
    int maxValue = 1;
    int minValue = 1;
    int flag = 0;
    for(int i =1; i <= x; i++)
    {
        if(x % i == 0) {
            cout << i << endl;
            if(i > maxValue && i != x)
            {
                maxValue = i;
            }
            if(i != 1)
            {
                if(flag == 0) {
                   minValue = i;
                   flag = 1;
                }
            }
        }
    }
    cout << "BMM:" << maxValue << endl;
    cout << "KMM:" << minValue << endl;
    return 0;
}
