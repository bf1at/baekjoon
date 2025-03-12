#include <stdio.h>

int main() {
    double f;
    while(1){
        scanf("%lf",&f);
        if(f<0)
            break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n",f,f*0.167);
    }
    return 0;
}