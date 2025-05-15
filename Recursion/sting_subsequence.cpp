#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(string s,string curr){
    if(s==""){
        cout<<curr<<endl;
        return;
    }
    //remove 
    fun(s.substr(1),curr);

    //include
    fun(s.substr(1),curr+s[0]);

}

int main(){

    string s="abcd";
    string curr="";
    fun(s,curr);
    return 0;
}