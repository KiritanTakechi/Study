#include<iostream>
#include<algorithm>
using namespace std;
int shvn[3],shv[3][600],shvtmp[260000],t,money,cnt;
int main(int argc,char* argv[]){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(scanf("%d%d%d",&shvn[0],&shvn[1],&shvn[2])!=EOF){
        int tot=0;
        cnt++;
        for(int i=0;i<3;i++)
            for(int j=0;j<shvn[i];j++)
                cin>>shv[i][j];
        for(int i=0;i<shvn[0];i++)
            for(int j=0;j<shvn[1];j++)
                shvtmp[tot++]=shv[0][i]+shv[1][j];
        sort(shvtmp,shvtmp+tot-1);
        cin>>t;
        printf("Case %d:\n",cnt);
        while(t--){
            int j=0;
            cin>>money;
            for(int i=0;i<shvn[2];i++){
                if(*lower_bound(shvtmp,shvtmp+tot-1,money-shv[2][i])==money-shv[2][i]){
                    cout<<"YES"<<endl;
                    j=1;
                    break;
                }
            }
            if(!j)cout<<"NO"<<endl;
        }
    }
    return 0;
}