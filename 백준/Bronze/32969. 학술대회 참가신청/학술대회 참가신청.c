#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s",s);
    if(strstr(s,"social")!=NULL||
        strstr(s,"history")!=NULL||
        strstr(s,"language")!=NULL||
        strstr(s,"literacy")!=NULL)
printf("digital humanities");
else
printf("public bigdata");
        
    return 0;
}