#include <stdio.h>
#include <string.h>

int main() {
    int n, usedcd=0;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        char s[1001];
        int cd=0;
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++){
            if(cd==1){
                if(s[i]=='D'){
                    usedcd++;
                    break;
                }
                else if(s[i]=='C');
                else
                    cd=0;
            }
            else {
                if(s[i]=='C')
                    cd++;
            }
        }
    }
    printf("%d",n-usedcd);
    return 0;
}