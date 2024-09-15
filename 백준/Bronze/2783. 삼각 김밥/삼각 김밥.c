#include <stdio.h>

typedef struct {
int price;
int gram;
}tri;
int main() {
    tri a[101];
    int n;
    double ppth;
    scanf("%d %d", &a[0].price, &a[0].gram);
    scanf("%d", &n);
    ppth=a[0].price*1000./a[0].gram;
    for(int i=1;i<=n;i++){
        scanf("%d %d", &a[i].price, &a[i].gram);
        if(ppth>a[i].price*1000./a[i].gram)
            ppth=a[i].price*1000./a[i].gram;
    }
    printf("%.2lf",ppth);
    return 0;
}