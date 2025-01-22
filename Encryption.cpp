#include <bits/stdc++.h>
using namespace std;
string encryption(string s) {
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    int len=s.length();
    int cols=ceil(sqrt(len));
    string encrypted="";
    
    for(int i=0;i<cols;i++) {
        for(int j=i;j<len;j+=cols) {
            encrypted+=s[j];
        }
        encrypted+=" ";
    }
    if(!encrypted.empty()){
        encrypted.pop_back();
    }
    return encrypted;
}
int main(){
    string s;
    cin>>s;
    string result=encryption(s);
    cout<<result;
    return 0;
}
