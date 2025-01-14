#include <stdio.h>

int main() {
    int t,k,a;
    scanf("%d",&t);
    while(t--){
        int even=0,odd=0;
        scanf("%d",&k);
        while(k--){
            scanf("%d",&a);
            if(a%2==0)
                even+=a;
            else
                odd+=a;
        }
        if(even>odd)
            printf("EVEN\n");
        else if(even==odd)
            printf("TIE\n");
        else
            printf("ODD\n");
    }
    return 0;
}