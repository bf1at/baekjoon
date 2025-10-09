#include <stdio.h>

#include <string.h>

int main() {

    char s[101];

    int n, sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        int asc[256] = {0};

        scanf("%s",s);

        for(int j=0;j<strlen(s);j++){

            if(j==0){

                asc[s[j]]++;

                continue;

            }

            if(s[j]==s[j-1])

                continue;

            asc[s[j]]++;

        }

        for(int j='a';j<='z';j++){

            if(asc[j]>=2){

                sum++;

                break;

            }

        }

    }

    printf("%d",n-sum);

    return 0;

}