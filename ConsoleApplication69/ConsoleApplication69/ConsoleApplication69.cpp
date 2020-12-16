#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int i, n;
    time_t t;
    setlocale(LC_ALL, "Russian");
    time(&t);
    srand((unsigned int)t);
    cout << "Введите количество бочонков, которое будет вытащено: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << rand() % 100 + 1 << endl;
    }
    return 0;
}
