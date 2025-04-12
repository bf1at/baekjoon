#include <stdio.h>

int main() {

    char s1[30], s2[30];

    int t;

    scanf("%d",&t);

    for(int i=1;i<=t;i++){

        scanf("%s %s",s1, s2);

        printf("Case %d: %s, %s\n",i,s2,s1);

    }

    return 0;

}