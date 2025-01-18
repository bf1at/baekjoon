#include <stdio.h>
#include <string.h>

int main() {
    double cost=0;
    while(1){
        char s[20];
        scanf("%s",s);
        if(strcmp(s,"EOI")==0)
            break;
        else if(strcmp(s,"Paper")==0)
            cost+=57.99;
        else if(strcmp(s,"Printer")==0)
            cost+=120.5;
        else if(strcmp(s,"Planners")==0)
            cost+=31.25;
        else if(strcmp(s,"Binders")==0)
            cost+=22.5;
        else if(strcmp(s,"Calendar")==0)
            cost+=10.95;
        else if(strcmp(s,"Notebooks")==0)
            cost+=11.2;
        else if(strcmp(s,"Ink")==0)
            cost+=66.95;
    }
    printf("$%.2lf",cost);
    return 0;
}