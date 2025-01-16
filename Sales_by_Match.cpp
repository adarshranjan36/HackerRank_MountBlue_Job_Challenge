#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>V(n);
    for(int i=0;i<n;i++){
        cin>>V[i];
    }
    unordered_map<int,int>M;
    for(int i=0;i<n;i++){
        M[V[i]]++;
    }
    int sum=0;
    for(int i=1;i<=100;i++){
        sum+=(M[i]/2);
    }
    cout<<sum;
    return 0;
}
