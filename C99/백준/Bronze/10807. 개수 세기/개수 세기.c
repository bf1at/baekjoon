#include <stdio.h>

int main() {

    int n, v, sum=0, nums[100];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&nums[i]);

    }

    scanf("%d",&v);

    for(int i=0;i<n;i++){

        if(nums[i]==v)

            sum++;

    }

    printf("%d",sum);

    return 0;

}