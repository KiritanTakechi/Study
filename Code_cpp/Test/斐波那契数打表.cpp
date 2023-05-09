#include<iostream>    
using namespace std;      
void printFibonacci(long long n){    
    static long long n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<",";    
         printFibonacci(n-1);    
    }    
}    
int main(){  
    freopen("out.txt","w",stdout);  
    long long n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Fibonacci Series: ";    
    cout<<"0,"<<"1,";  
    printFibonacci(n-2);
     return 0;  
}