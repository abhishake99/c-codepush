#include <iostream>
using namespace std;

void toh1(int n, int a, int b, int c)
{

    if (n > 0)
    {

        toh(n - 1, a, c, b);
        cout << "from " << a << " to " << c << endl;
        toh(n - 1, b, a, c);
    }
}


void toh2(int n, int a, int b, int c)
{

    if (n > 0)
    {

        toh(n - 1, a, c, b);
        toh(n - 1, a, b, c);
        toh(n - 1, b, a, c);
    }
}

int main()
{

    toh(3, 1, 2, 3);
    return 0;
}