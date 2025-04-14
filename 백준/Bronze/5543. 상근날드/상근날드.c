#include <stdio.h>

int main() {

    int burger[3];

    int cola, cider;

    for(int i=0;i<3;i++)

        scanf("%d",&burger[i]);

    scanf("%d %d",&cola,&cider);

    int min=2000;

    for(int i=0;i<3;i++){

        if(burger[i]<min)

            min=burger[i];

    }

    int drink;

    if(cola<cider)

        drink=cola;

    else

        drink=cider;

    printf("%d",min+drink-50);

    return 0;

}