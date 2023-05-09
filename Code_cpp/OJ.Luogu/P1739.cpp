#include<cstdio>
int stack;
char c;
int main(){
    while(c!='@'){
        scanf("%c",&c);
        if(!stack&&c==')'){printf("NO");return 0;}
        switch (c){
        case '(':
            stack++;
            break;
        case ')':
            stack--;
            break;
        }
    }
    !stack?printf("YES"):printf("NO");
    return 0;
}