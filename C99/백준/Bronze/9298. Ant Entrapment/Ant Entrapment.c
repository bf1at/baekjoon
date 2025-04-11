#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>

void print_trimmed(double value) {
    char buf[100];
    sprintf(buf, "%.10f", value);  // 넉넉히 보장
    int len = strlen(buf);
    while (len > 0 && buf[len - 1] == '0') {
        buf[len - 1] = '\0';
        len--;
    }
    if (len > 0 && buf[len - 1] == '.') {
        buf[len - 1] = '\0';
    }
    printf("%s", buf);
}

int main() {
    int t, n;
    double x, y, area, peri;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        double xmax = -DBL_MAX, xmin = DBL_MAX;
        double ymax = -DBL_MAX, ymin = DBL_MAX;
        scanf("%d", &n);
        while (n--) {
            scanf("%lf %lf", &x, &y);
            if (x < xmin) xmin = x;
            if (x > xmax) xmax = x;
            if (y < ymin) ymin = y;
            if (y > ymax) ymax = y;
        }
        area = (xmax - xmin) * (ymax - ymin);
        peri = 2 * ((xmax - xmin) + (ymax - ymin));
        printf("Case %d: Area ", i);
        print_trimmed(area);
        printf(", Perimeter ");
        print_trimmed(peri);
        printf("\n");
    }
    return 0;
}
