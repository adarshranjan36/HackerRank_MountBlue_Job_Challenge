#include <bits/stdc++.h>

using namespace std;
vector<int>brRecords(const vector<int>& scores){
    int minCount=0, maxCount=0;
    int minScore=scores[0], maxScore=scores[0];
    for (int i=0; i<scores.size(); i++){
        if (scores[i]>maxScore){
            maxScore=scores[i];
            maxCount++;
        } else if (scores[i]<minScore){
            minScore=scores[i];
            minCount++;
        }
    }
    return{maxCount,minCount};
}

int main(){
    int n;
    cin>>n;
    vector<int>scores(n);
    for (int i=0; i<n; i++) {
        cin>>scores[i];
    }
    vector<int>result=brRecords(scores);
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}
