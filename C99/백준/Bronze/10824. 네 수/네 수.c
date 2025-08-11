#include <stdio.h>

#include <stdlib.h>

#include <string.h>
void add_big(char *x, char *y, char *result) {

    int len1 = strlen(x), len2 = strlen(y);

    int carry = 0, sum, i = 0;

    char temp[2000002];

    int p1 = len1 - 1, p2 = len2 - 1;

    while (p1 >= 0 || p2 >= 0 || carry) {

        int a = (p1 >= 0) ? x[p1--] - '0' : 0;

        int b = (p2 >= 0) ? y[p2--] - '0' : 0;

        sum = a + b + carry;

        temp[i++] = (sum % 10) + '0';

        carry = sum / 10;

    }

    // 뒤집기

    for (int j = 0; j < i; j++)

        result[j] = temp[i - j - 1];

    result[i] = '\0';

}
int main() {

    char s1[2000001],s2[2000001],a[1000001],b[1000001],sum[3000000];

    

    scanf("%s %s %s %s",s1,a,s2,b);

    strcat(s1,a);

    strcat(s2,b);
    
    add_big(s1,s2,sum);

    printf("%s",sum);

    

    return 0;

}