#include <stdio.h>

int main() {
    char ad[5][100];
    char no[5][100];
    int a,n;
    scanf("%d %d",&a,&n);
    for(int i=0;i<a;i++){
        scanf("%s",ad[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%s",no[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<n;j++)
            printf("%s as %s\n",ad[i],no[j]);
    }
    return 0;
}