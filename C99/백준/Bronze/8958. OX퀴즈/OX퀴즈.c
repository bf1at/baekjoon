#include <stdio.h>

#include <string.h>

int main() {

    int n, sum, score;

    char s[80];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        sum=0,score=1;

        scanf("%s",s);

        int l=strlen(s);

        for(int j=0;j<l;j++){

            if(s[j]=='O')

                sum+=score++;

            else

                score=1;

        }

        printf("%d\n",sum);

    }

    return 0;

}