#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
double degree;
char unit[10];
}quan;

int main() {
    int n;
    quan a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i].degree);
        scanf("%s", a[i].unit);
    }
    for(int i=0;i<n;i++){
        if(strcmp(a[i].unit,"kg")==0)
            printf("%.4lf lb\n",a[i].degree*2.2046);
        else if(strcmp(a[i].unit,"lb")==0)
            printf("%.4lf kg\n",a[i].degree*0.4536);
        else if(strcmp(a[i].unit,"l")==0)
            printf("%.4lf g\n",a[i].degree*0.2642);
        else if(strcmp(a[i].unit,"g")==0)
            printf("%.4lf l\n",a[i].degree*3.7854);
    }
    return 0;
}