#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int n;
    int sum=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",s);
        for(int j=65;j<=90;j++){
            if(strchr(s,j)==NULL)
                sum+=j;
        }
        printf("%d\n",sum);
        sum=0;
        memset(s,'\0',sizeof(s));
    }
    return 0;
}