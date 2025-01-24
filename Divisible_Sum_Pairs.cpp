#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>rem(k,0);
    int pair=0;
    for(int i=0;i<n;i++){
        int remain=arr[i]%k;
        int c=(k-remain)%k;  
        pair+=rem[c];
        rem[remain]++;
    }
    cout<<pair;
    return 0;
}
