#include<iostream>
#include<queue>
using namespace std;
int n,fru,ans;
priority_queue<int,vector<int>,greater<int>> heap;
int main(int argc,char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i(0);i<n;i++){
        cin>>fru;
        heap.push(fru);
    }
    while(heap.size()>1){
        int sum=heap.top();
        heap.pop();
        sum+=heap.top();
        heap.pop();
        ans+=sum;
        heap.push(sum);
    }
    cout<<ans;
    return 0;
}