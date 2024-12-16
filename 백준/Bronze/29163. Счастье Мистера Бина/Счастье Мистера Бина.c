#include <stdio.h>

int main() {
    int n,result=0;
    long long a;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&a);
if(a%2==0)
result++;
else
result--;
}
if(result>0)
printf("Happy");
else
printf("Sad");
    return 0;
}