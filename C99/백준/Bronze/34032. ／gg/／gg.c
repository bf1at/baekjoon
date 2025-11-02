#include <stdio.h>

int main() {

    int n, sum=0;

    char s[500001];

    scanf("%d %s",&n,s);

    for(int i=0;i<n;i++){

        if(s[i]=='O')

            sum++;

    }

    if(sum>=(n+1)/2)

        printf("Yes");

    else

        printf("No");

    return 0;

}