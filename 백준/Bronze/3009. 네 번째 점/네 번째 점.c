#include <stdio.h>

int main() {
    int a[4][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(a[0][0]==a[1][0])
        a[3][0]=a[2][0];
    else if(a[0][0]==a[2][0])
        a[3][0]=a[1][0];
    else
        a[3][0]=a[0][0];
    if(a[0][1]==a[1][1])
        a[3][1]=a[2][1];
    else if(a[0][1]==a[2][1])
        a[3][1]=a[1][1];
    else
        a[3][1]=a[0][1];
    printf("%d %d",a[3][0],a[3][1]);
    return 0;
}