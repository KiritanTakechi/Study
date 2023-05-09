#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
int main(int avgc,char* argv[]){
    int *p1=new int[1024];
    int psize=2048;
    auto p2=new unsigned char[psize];
    memset(p2,0,psize);
    auto p3=new int[psize];
    memset(p3,0,psize*sizeof(int));
    return 0;
}