#include <bits/stdc++.h>
using namespace std;
vector <int> compare(vector<int>a , vector<int>b){
    vector<int> result(2,0);
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            result[0]++;
        }
        else if(a[i]<b[i]){
           result[1]++;
       }
    }
    return result;
}
int main(){
    vector<int> a(3);
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    vector<int> b(3);
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    vector<int> result = compare(a,b);
    cout<<result[0]<<" "<<result[1];
    return 0;
}

