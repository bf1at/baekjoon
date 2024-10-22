#include <stdio.h>

int main() {
    int n, s=1;
    int a[100];
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        else{
            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
        }
        printf("Case %d: Sorting... done!\n",s);
        s++;
    }
    return 0;
}