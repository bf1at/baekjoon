#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int l;
        scanf("%d",&l);
        for(int j=0;j<l;j++)
            printf("#");
        printf("\n");
        for(int j=1;j<l-1;j++){
            printf("#");
            for(int k=1;k<l-1;k++)
                printf("J");
            printf("#");
            printf("\n");
        }
        if(l>=2){
            for(int j=0;j<l;j++)
                printf("#");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}