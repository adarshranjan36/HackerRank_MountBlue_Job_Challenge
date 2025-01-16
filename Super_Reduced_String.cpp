#include <bits/stdc++.h>
using namespace std;
string superReducedString(string s) {
    stack<char>st;
    for(char ch:s){
        if(!st.empty()&& st.top()==ch){
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    if(st.empty()){
        return "Empty String";
    }
    string result ="";
    while(!st.empty()){
        result =st.top()+result;
        st.pop();
    }
    return result;
}
int main(){
    string s;
    getline(cin, s);
    string result = superReducedString(s);
    cout<<result<<endl;
    return 0;
}
