int factorial(int n){
    int fc=1;
    for(int i=1;i<=n;++i) fc *= i;
    return fc;
}
int C(int n,int m){
    int com=factorial(n)/(factorial(m)*factorial(n-m));
    return com;
}
int main(){
    return 0;
}