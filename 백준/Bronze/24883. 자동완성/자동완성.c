#include <stdio.h>

int main() {
    char a;
    a=getchar();
    if(a=='n'||a=='N')
        printf("Naver D2");
    else
        printf("Naver Whale");
    return 0;
}