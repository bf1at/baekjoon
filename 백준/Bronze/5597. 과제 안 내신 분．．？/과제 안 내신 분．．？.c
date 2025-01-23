#include <stdio.h>

int main() {
    int n[31]={0};
    int k=28;
    while(k--){
        int a;
        scanf("%d",&a);
        n[a]++;
    }
    for(int i=1;i<=30;i++){
        if(n[i]==0)
            printf("%d\n",i);
    }
    return 0;
}