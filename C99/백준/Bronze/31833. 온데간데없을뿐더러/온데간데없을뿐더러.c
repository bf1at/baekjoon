#include <stdio.h>

#include <string.h>

int main() {

    int n, flag=0;

    char a[100]="",b[100]="", s[10];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%s",s);

        strcat(a,s);

    }

    for(int i=0;i<n;i++){

        scanf("%s",s);

        strcat(b,s);

    }

    if(strlen(a)<strlen(b))

        flag=0;

    else if(strlen(a)==strlen(b)){

        if(strcmp(a,b)<0)

            flag=0;

        else

            flag=1;

    }

    else

        flag=1;

    if(flag==0)

        printf("%s",a);

    else

        printf("%s",b);

    return 0;

}