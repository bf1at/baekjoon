#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        char b;
        scanf("%d %c",&a,&b);
        for(int i=0;i<a;i++){
            if(b>'Z')
                b='A';
            for(int j=0;j<=i;j++)
                printf("%c",b);
            printf("\n");
            b++;
        }
        printf("\n");
    }
    return 0;
}