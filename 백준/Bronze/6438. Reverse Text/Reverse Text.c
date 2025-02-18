#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char s1[100], s2[100];
        fgets(s1,100,stdin);
        for(int i=0;i<strlen(s1);i++){
            s2[i]=s1[strlen(s1)-i-2];
        }
        s2[strlen(s1)]='\0';
        printf("%s\n",s2);
    }
    return 0;
}