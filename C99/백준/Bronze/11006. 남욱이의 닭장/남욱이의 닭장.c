#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t, n, m, a, b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(int i=0; i<=m; i++){
            if(i*1+(m-i)*2==n){
                a=i;
                b=m-i;
                break;
            }
        }
        printf("%d %d\n",a,b);
    }
	return 0;
} 