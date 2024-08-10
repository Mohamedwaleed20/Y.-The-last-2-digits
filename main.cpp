#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;


    int product = ((a % 100) * (b % 100) % 100) * ((c % 100) * (d % 100) % 100) % 100;


    if (product < 10)
        {
        cout << "0" << product << std::endl;
    }
    else
    {
        cout << product << std::endl;
    }

    return 0;
}
