#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s",s);
    if(strcmp(s,"NLCS")==0)
        printf("North London Collegiate School");
    else if(strcmp(s,"BHA")==0)
        printf("Branksome Hall Asia");
    else if(strcmp(s,"KIS")==0)
        printf("Korea International School");
    else if(strcmp(s,"SJA")==0)
        printf("St. Johnsbury Academy");
    return 0;
}