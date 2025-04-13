#include <iostream>
using namespace std;

struct rectangle
{
    int len;
    int bre;
    char x;
};

void initialize(rectangle *r, int l, int b) //pass by reference
{

    r->len = l;
    r->bre = b;
}

int calcperimeter(int l, int b)
{
    return 2 * (l + b);
}

int calcarea(int l, int b)
{
    return l * b;
}

int main()
{

    // rectangle r={10,2,'a'};
    // cout<<"length "<<r.len<<endl;
    // cout<<"breadth "<<r.bre<<endl;
    // cout<<"char "<<r.x;

    // return 0;
    int l = 0, b = 0;
    rectangle r = {0, 0, 'x'};
    cout << "Enter length:";
    cin >> l;
    cout << "Enter breadth:";
    cin >> b;

    initialize(&r, l, b);

    int perimeter = calcperimeter(r.len, r.bre);
    cout << "Perimeter:" << perimeter << endl;

    int area = calcarea(r.len, r.bre);
    cout << "Area: " << area << endl;
}