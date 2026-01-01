#include <stdio.h>

int main() {

    int n, same=1, sum1=0,sum2=0;

    char s1[151], s2[151];

    scanf("%d %s %s",&n,s1,s2);

    for(int i=0;i<n;i++){

        if(s1[i]!=s2[i])

            same=0;

        if(s1[i]=='w')

            sum1++;

        if(s2[i]=='w')

            sum2++;

    }

    if(sum1>sum2)

        printf("Oryang");

    else if(sum1<sum2)

        printf("Manners maketh man");

    else{

        if(same==0){

            printf("Its fine");

        }

        else

            printf("Good");

    }

    return 0;

}