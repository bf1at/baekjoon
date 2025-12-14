#include <stdio.h>

#include <string.h>

int main() {

    char s[100], c[7][100]={

    "Algorithm",

    "DataAnalysis",

    "ArtificialIntelligence",

    "CyberSecurity",

    "Network",

    "Startup",

    "TestStrategy"

    };

    int n, max=0, m;

    for(int i=0;i<7;i++){

        scanf("%s %d",s,&n);

        if(n>max){

            max=n;

            for(int j=0;j<7;j++){

                if(!strcmp(s,c[j]))

                    m=j;

            }

        }

    }

    printf("%s",c[m]);

    return 0;

}