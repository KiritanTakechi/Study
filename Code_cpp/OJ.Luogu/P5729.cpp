#include<cstdio>
int s[30][30][30],w,x,h,q,x1,x2,y1,y2,z1,z2,ans;
int main(){
    scanf("%d%d%d",&w,&x,&h);
    for(int i(0);i<w;i++){
        for(int j(0);j<x;j++){
            for(int k(0);k<h;k++){
                s[i][j][k]=1;
            }
        }
    }
    scanf("%d",&q);
    for(int t(0);t<q;t++){
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(int i(x1-1);i<x2;i++){
            for(int j(y1-1);j<y2;j++){
                for(int k(z1-1);k<z2;k++){
                    s[i][j][k]=0;
                }
            }
        }
    }
    for(int i(0);i<w;i++){
        for(int j(0);j<x;j++){
            for(int k(0);k<h;k++){
                ans+=s[i][j][k];
            }
        }
    }
    printf("%d",ans);
    return 0;
}