#include <iostream>
#include <vector>
using namespace std;

vector<string> calcsubstr(string str1) {
    vector<string> vec;
    for (int i = 0; i < str1.length(); i++) {
        for (int j = i + 1; j <= str1.length(); j++) {
            vec.push_back(str1.substr(i, j - i+1));
        }
    }
    return vec;
}

int countSubstringFrequency(const string& str, const string& sub) {
    if (sub.empty()) return 0;

    int count = 0;
    size_t pos = str.find(sub);

    while (pos != string::npos) {
        count++;
        pos = str.find(sub, pos + sub.length());
    }
    cout<<sub<<" "<<count<<endl;
    return count;
}

string gcdOfStrings(string str1, string str2) {
    int maxlen=0;
    string res="";
    vector<string>vec=calcsubstr(str1);
    for(int i=0;i<vec.size();i++){
        string sub=vec[i];
        if(countSubstringFrequency(str1,sub)%2==0 && countSubstringFrequency(str2,sub)%2==0 && sub.length()>maxlen){
            res=sub;
            maxlen=sub.length();
        }
    }
    return res;
}

int main(){
    string str1="ABCABC";
    string str2="ABC";
    cout<<gcdOfStrings(str1,str2)<<endl;
    return 0;
}