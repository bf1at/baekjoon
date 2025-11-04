#include <stdio.h>

#include <string.h>

int main() {

    int n,b;

    char s[100000000],s2[100000000];

    scanf("%d %d",&n,&b);

    for(int i=0;i<100;i++){

        s[i]=n%b;

        if(n%b>9){

            s[i]=s[i]+'A'-10;

        }

        else

            s[i]+='0';

        n/=b;

        if(n==0)

            break;

    }

    int len=strlen(s);

    for(int i=0;i<len;i++)

        s2[i]=s[len-1-i];

    s2[len]='\0';

    printf("%s",s2);

    return 0;

}