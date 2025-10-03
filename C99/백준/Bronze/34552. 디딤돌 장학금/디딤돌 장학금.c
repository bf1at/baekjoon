#include <stdio.h>

int main() {

    int m[11];

    int n, b, s, sum=0;

    double l;

    for(int i=0;i<11;i++)

        scanf("%d",&m[i]);

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d %lf %d",&b,&l,&s);

        if(l>=2&&s>=17)

            sum+=m[b];

    }

    printf("%d",sum);

    return 0;

}