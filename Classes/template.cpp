#include <iostream>
using namespace std;

template <class T>
class arthematic
{

private:
    T a;
    T b;

public:
    arthematic()
    {
        this->a = 0;
        this->b = 0;
    }
    arthematic(T a, T b);
    T add();
    T subtract();
};

template <class T>
arthematic<T>::arthematic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T arthematic<T>::add()
{
    return this->a + this->b;
}

template <class T>
T arthematic<T>::subtract()
{
    return this->a - this->b;
}

int main()
{
    arthematic<int> a1(10, 5);
    cout << "Addition: " << a1.add() << endl;
    cout << "Subtraction: " << a1.subtract() << endl;

    arthematic<float> a2(10.1, 5.5);
    cout << "Addition: " << a2.add() << endl;
    cout << "Subtraction: " << a2.subtract() << endl;

    return 0;
}