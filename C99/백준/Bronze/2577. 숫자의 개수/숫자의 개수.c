#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {

    int num[10]={0};

    long long a,b,c;

    char s[30];

    scanf("%lld %lld %lld",&a,&b,&c);

    a*=b*c;

    sprintf(s,"%lld",a);

    for(int i=0;i<strlen(s);i++){

        num[s[i]-'0']++;

    }

    for(int i=0;i<10;i++)

        printf("%d\n",num[i]);

    return 0;

}