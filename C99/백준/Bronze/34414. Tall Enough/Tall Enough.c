#include <stdio.h>

int main() {
    int n, a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a<48){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}