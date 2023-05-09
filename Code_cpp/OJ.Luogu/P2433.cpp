#include <cstdio>
#include <cstring>
#include <cmath>
int n;
const double pi = 3.141593;
int main(){
    scanf("%d",&n);
    switch(n){
        case 1: printf("I love Luogu!");break;
        case 2: printf("6 4");break;
        case 3: printf("3\n12\n2");break;
        case 4: printf("166.667");break;
        case 5: printf("15");break;
        case 6: printf("%.4f",sqrt(117));break;
        case 7: printf("110\n90\n0");break;
        case 8: printf("%.4f\n%.4f\n%.3f",pi*10,pi*25,pi*500/3);break;
        case 9: printf("22");break;
        case 10: printf("9");break;
        case 11: printf("%.4f",100/3.0);break;
        case 12: printf("13\nR");break;
        case 13: printf("16");break;
        case 14: printf("50");break;
    }
    return 0;
}