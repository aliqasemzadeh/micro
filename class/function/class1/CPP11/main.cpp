#include <iostream>
// عددی را از ورودی بگیرید و مقسوم علیه های آن را چاپ کنید.
// همراه با پیام مناسب چاپ شود
using namespace std;

int main()
{
    int x;
    cout << "Please enter x:";
    cin >> x;
    int maxValue = 1;
    int minValue = 2;
    int flag = 0;
    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0)
        {
            cout << i << endl;
            if(i > maxValue && i != x)
            {
                maxValue = i;
            }


            if(i!= 1)
            {
                if(flag == 0) {
                   minValue = i;
                   flag = 1;
                }
            }
        }
    }
    cout << "BMM:";
    cout << maxValue << endl;
    cout << "KMM:";
    cout << minValue;
    return 0;
}
