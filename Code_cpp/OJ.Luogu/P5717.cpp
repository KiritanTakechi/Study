#include <cstdio>
#include <algorithm>
int s[3];
int main(){
    scanf("%d%d%d",&s[0],&s[1],&s[2]);
    std::sort(s,s+3);
    if(s[0]+s[1]<=s[2]){printf("Not triangle\n");return 0;}
    if(s[0]*s[0]+s[1]*s[1]==s[2]*s[2])printf("Right triangle\n");
    else if(s[0]*s[0]+s[1]*s[1]>s[2]*s[2])printf("Acute triangle\n");
    else if(s[0]*s[0]+s[1]*s[1]<s[2]*s[2])printf("Obtuse triangle\n");
    if(s[0]==s[1]||s[1]==s[2]||s[0]==s[2])printf("Isosceles triangle\n");
    if(s[0]==s[1]&&s[1]==s[2])printf("Equilateral triangle\n");
    return 0;
}