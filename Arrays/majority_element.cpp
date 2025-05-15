#include <iostream>
using namespace std;

// Using Moore's Voting algorithm  -->o(n)
int fun(int *v, int size)
{

    // int size = sizeof(v) / sizeof(int);
    // cout<<"Size: "<<size;
    int ctr = 0;
    int ele;
    for (int i = 0; i < size; i++)
    {
        if (ctr == 0)
        {
            ele = v[i];
            cout << ele << " ";
        }
        if (v[i] == ele)
        {
            ctr++;
        }
        else
            ctr--;
    }
    int ctr1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (v[i] == ele)
            ctr1++;
    }
    cout << "counter" << ctr1;
    if (ctr1 > size / 2)
        return ele;
    return -1;
}

int main()
{

    int v[] = {1, 5, 5, 5, 5, 6, 7, 6, 7, 6, 8, 6, 9, 6, 10, 6, 13, 6, 6, 6, 6, 6, 6, 6};
    int size = sizeof(v) / sizeof(int);
    cout << "Size: " << size << endl;
    int res = fun(v, size);
    cout << "Majority: " << res;
    return 0;
}