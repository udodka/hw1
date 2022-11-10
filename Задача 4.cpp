#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cin >> n;
    sum = 0;
    while (n >= 10)
    {
        sum += n % 10;
        n /= 10;
    }
    sum += n;
    cout << sum << endl;
}