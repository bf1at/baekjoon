#include <stdio.h>

int main() {
    int t, a, b, max=0, cor;
    scanf("%d %d",&t,&cor);
    max=cor;
    while(t--){
        scanf("%d %d",&a,&b);
        cor+=a-b;
        if(cor<0){
            printf("0");
            return 0;
        }
        if(cor>max)
            max=cor;
    }
    printf("%d",max);
    return 0;
}