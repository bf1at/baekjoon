#include <stdio.h>

int main() {

    char c;

    scanf("%c",&c);

    if(c>'I')

        printf("%d",c-'I'+84);

    else

        printf("%d",'I'-c+84);

    return 0;

}