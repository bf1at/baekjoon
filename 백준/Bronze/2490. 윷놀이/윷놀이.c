#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int y[4] = {0};
    int sum = 0;
    for(int i = 0;i<3;i++){
        scanf("%d %d %d %d",&y[0],&y[1],&y[2],&y[3]);
        for (int j=0;j<4;j++)
            sum+=y[j];
        if(sum ==3)
            printf("A\n");
        else if(sum==2)
            printf("B\n");
        else if(sum==1)
            printf("C\n");
        else if(sum==0)
            printf("D\n");
        else if(sum==4)
            printf("E\n");
        sum=0;
    }
    return 0;
}