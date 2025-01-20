#include<bits/stdc++.h>
using namespace std;
int bDay(const vector<int>& s,int d,int m){
    int count=0;
    int n=s.size();
    int sum = 0;
    for (int i=0;i<m;i++){
        sum+=s[i];
    }
    if(sum==d){
        count++;
    }
    for(int i=m;i<n;i++){
        sum+=s[i]-s[i-m];
        if(sum==d){
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int d,m; 
    cin>>d>>m;
    cout<<bDay(s,d,m)<<endl;
    return 0;
}
