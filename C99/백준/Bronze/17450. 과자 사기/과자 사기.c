#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    double snu[3][3], max=0;
    int flag;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &snu[i][j]);
        }
        if (snu[i][0] >= 500)
            snu[i][2] = snu[i][1] / (snu[i][0] - 50);
        else
            snu[i][2] = snu[i][1] / snu[i][0];
        if (max < snu[i][2]) {
            max = snu[i][2];
            flag = i;
        }
    }
    if (flag == 0)
        printf("S");
    else if (flag == 1)
        printf("N");
    else
        printf("U");
    return 0;
}