#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        char s[30];
        scanf("%s",s);
        if(strcmp(s,"Algorithm")==0)
            printf("204\n");
        else if(strcmp(s,"DataAnalysis")==0)
            printf("207\n");
        else if(strcmp(s,"ArtificialIntelligence")==0)
            printf("302\n");
        else if(strcmp(s,"CyberSecurity")==0)
            printf("B101\n");
        else if(strcmp(s,"Network")==0)
            printf("303\n");
        else if(strcmp(s,"Startup")==0)
            printf("501\n");
        else if(strcmp(s,"TestStrategy")==0)
            printf("105\n");
    }
    return 0;
}