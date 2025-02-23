#include <stdio.h>

int main() {
    int n, sum=0;
    char n2[10000], answer[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf(" %c",&n2[i]);
    for(int i=0;i<n;i++){
        scanf(" %c",&answer[i]);
        if(n2[i]==answer[i])
            sum++;
    }
    printf("%d",sum);
    return 0;
}