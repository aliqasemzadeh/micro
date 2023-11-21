#include <iostream>

struct Lesson {
    char name[20];
    int unit;

};


struct Student {
    int id;
    int natonailId;
    float avg;
    char name[10];
    int mobile;
    bool graduate;
    int g1;
    int g2;
    int g3;
    float calAvg()
    {
        return (g1 + g2 + g3) / 3;
    }
};


using namespace std;

int main()
{
    Student snow_queen;
    cin >> snow_queen.g1;
    cin >> snow_queen.g2;
    cin >> snow_queen.g3;
    cout << snow_queen.calAvg();
    return 0;
}
