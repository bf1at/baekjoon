#include <stdio.h>

int main() {

    char s[16];

    int n,a=0,b=0;

    scanf("%d",&n);

    getchar();

    scanf("%s",s);

    for(int i=0;i<n;i++){

        if(s[i]=='A')

            a++;

        else

            b++;

    }

    if(a>b)

        printf("A");

    else if(a==b)

        printf("Tie");

    else

        printf("B");

    return 0;

}