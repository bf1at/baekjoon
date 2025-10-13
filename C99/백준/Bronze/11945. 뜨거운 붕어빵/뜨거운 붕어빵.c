#include <stdio.h>

int main() {

    char s[10][10];

    int a,b;

    scanf("%d %d",&a,&b);

    for(int i=0;i<a;i++){

        getchar();

        scanf("%s",s[i]);

    }

    for(int i=0;i<a;i++){

        for(int j=b-1;j>=0;j--)

            printf("%c",s[i][j]);

        printf("\n");

    }

    return 0;

}