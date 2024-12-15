#include <stdio.h>

double overcard(int n){
    double over=0;
    for(int i=2;i<=n+1;i++){
        over+=1.0/i;
    }
    return over;
}
int main() {
    while(1){
     double goal;
     int i=1;
     scanf("%lf",&goal);
     if(goal==0.00)
         break;
     while(1){
         if(overcard(i)>=goal)
             break;
         i++;
     }
     printf("%d card(s)\n",i);
    }
    return 0;
}