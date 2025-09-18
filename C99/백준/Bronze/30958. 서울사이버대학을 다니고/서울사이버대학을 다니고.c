#include <stdio.h>

int main() {

    char s[100001];

    int n, a[200]={0},max=0;

    scanf("%d",&n);

    getchar();

    fgets(s,n+1,stdin);

    for(int i=0;i<n;i++){

        a[s[i]]++;

    }

    for(int i='A';i<='z';i++){

        if(a[i]>max)

            max=a[i];

    }

    printf("%d",max);

    return 0;

}