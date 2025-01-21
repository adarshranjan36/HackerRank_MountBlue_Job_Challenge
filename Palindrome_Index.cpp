#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(const string& str,int left,int right){
    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int palindromeIndex(const string& str){
    int left=0;
    int right=str.length()-1;

    while(left<right) {
        if(str[left]==str[right]){
            left++;
            right--;
        } else {
            if(isPalindrome(str,left+1,right)){
                return left;
            }
            if(isPalindrome(str,left,right-1)){
                return right;
            }
            return -1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n; 
    cin.ignore();
    while(n--){
        string str;
        getline(cin, str); 
        cout<<palindromeIndex(str)<<endl;
    }
    return 0;
}
