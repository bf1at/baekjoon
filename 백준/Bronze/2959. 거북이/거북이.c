#include <stdio.h>

int main() {
    int a[4], temp;
    for (int i=0;i<4;i++)
        scanf("%d", &a[i]);
    for (int i=0;i<3;i++){
        for (int j=0;j<3-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d", a[0]*a[2]);
    return 0;
}