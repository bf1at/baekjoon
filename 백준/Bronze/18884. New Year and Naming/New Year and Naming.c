#include <stdio.h>

int main() {
    char n[20][11], m[20][11];
    int nn,mn,q,year,n1,m1;
    scanf("%d %d",&nn,&mn);
    for(int i=0;i<nn;i++){
        scanf("%s",n[i]);
    }
    for(int i=0;i<mn;i++){
        scanf("%s",m[i]);
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&year);
        if(year%nn==0)
            n1=nn-1;
        else
            n1=year%nn-1;
        if(year%mn==0)
            m1=mn-1;
        else
            m1=year%mn-1;
        printf("%s%s\n",n[n1],m[m1]);
    }
    return 0;
}