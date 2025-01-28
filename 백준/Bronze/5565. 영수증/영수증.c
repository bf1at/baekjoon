#include <stdio.h>

int main() {
    int p,n[9];
    scanf("%d",&p);
    for(int i=0;i<9;i++){
        scanf("%d",&n[i]);
        p-=n[i];
    }
    printf("%d",p);
    return 0;
}