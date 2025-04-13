#include<iostream>
#include <bits/stdc++.h>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);

#include <iostream>
#include <vector>
using namespace std;

// Function to multiply 'x' with the number stored in result[].
// result_size is the number of digits currently stored in result[].
int multiply(int x, vector<int> &result) {
    int carry = 0;  // Initialize carry

    // Multiply 'x' with each digit of the result
    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;  // Store last digit of 'prod' in result
        carry = prod / 10;  // Put the rest in carry
    }

    // Put carry in result
   
    while (carry > 0) {
        result.push_back(carry % 10);
        carry /= 10;
    }


    return result.size();
}

// Function to compute the factorial of n
void factorial(int n) {
    vector<int> result;
    result.push_back(1);  // Initialize result as 1
    for (int x = 2; x <= n; x++) {
        multiply(x, result);
    }

    // The result is stored in reverse order, print it in the correct order.
    // cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    // cout << endl;
}


void extraLongFactorials(int n) {
    factorial(n);
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cout<<"n:"<<n;

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
