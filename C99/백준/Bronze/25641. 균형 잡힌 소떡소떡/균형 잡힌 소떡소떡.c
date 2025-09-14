#include <stdio.h>

int main() {

    char st[101];

    int n, s=0, t=0, start;

    scanf("%d %s",&n,st);

    for(int i=0;i<n;i++){

        if(st[i]=='s')

            s++;

        else

            t++;

    }

    for(int i=0;i<n;i++){

        if(s==t){

            start=i;

            break;

        }

        if(st[i]=='s')

            s--;

        else

            t--;

    }

    for(int i=start;i<n;i++)

        printf("%c",st[i]);

    return 0;

}