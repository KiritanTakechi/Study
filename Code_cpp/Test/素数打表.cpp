#include<cstdio>
#include<cmath>
int prime[100000],tot;
int main(){
    for(long long i(1);i<100001;i++)
        for(int j=2;j<=sqrt(i);j++){
        if(i%j==0&&i!=j)break;
        if(i==j)prime[tot++];
    }
    return 0;
}