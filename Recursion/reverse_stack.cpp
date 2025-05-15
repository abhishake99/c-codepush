#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(stack<int> &s)
{

    if (s.empty())
    {
        return;
    }
    int current_element = s.top();
    s.pop();
    fun(s);
    s.push(current_element);
}

int main()
{
    stack<int> s;
    int num = 10;
    while (num)
    {
        s.push(num);
        num--;
    }
    fun(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}