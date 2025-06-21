#include <stdio.h>

#include <string.h>

int main() {

    char s[101];

    int sum=0;

    scanf("%s",s);

    for(int i=0;i<strlen(s);i++){

        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||

            s[i]=='o'||s[i]=='u')

            sum++;

    }

    printf("%d",sum);

    return 0;

}