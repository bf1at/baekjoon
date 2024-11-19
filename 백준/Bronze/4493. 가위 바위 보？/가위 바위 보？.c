#include <stdio.h>

int main() {
    int t, n, w1,w2;
    char p1,p2;
    scanf("%d", &t);
    for (int i=0;i<t;i++){
        scanf("%d",&n);
        w1=0;
        w2=0;
        for(int i=0;i<n;i++){
            getchar();
            scanf("%c %c",&p1,&p2);
            if(p1=='R'){
                if(p2=='S')
                    w1++;
                else if(p2=='P')
                    w2++;
            }
            else if(p1=='S'){
                if(p2=='R')
                    w2++;
                else if(p2=='P')
                    w1++;
            }
            else if(p1=='P'){
                if(p2=='R')
                    w1++;
                else if(p2=='S')
                    w2++;
            }
        }
        if(w1>w2)
            printf("Player 1\n");
        else if(w1==w2)
            printf("TIE\n");
        else
            printf("Player 2\n");
    }
    return 0;
}