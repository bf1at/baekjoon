#include <stdio.h>

int main(void) {

	int n;    scanf("%d",&n);

    int ar[6][4]={{200,210,220,0},{210,220,225,0},{220,225,230,0},{225,230,235,0},{230,235,245,0},{235,245,250,0}};

    int gr[7][4]={0};

    int grs=260;

    for(int i=0;i<7;i++){

       gr[i][0]=grs;

       gr[i][1]=grs+5;

       gr[i][2]=grs+10;

       grs+=5;

    }

    for(int i=0;i<6;i++){

        if(n<ar[i][0])

            gr[i][3]=0;

       else if(n>=ar[i][0]&&n<ar[i][1])

          ar[i][3]=500;

       else if(n<ar[i][2])

          ar[i][3]=300;

       else if(n>=ar[i][2])

          ar[i][3]=100;

    }

    for(int i=0;i<7;i++){

        if(n<gr[i][0])

            gr[i][3]=0;

       else if(n>=gr[i][0]&&n<gr[i][1])

          gr[i][3]=500;

       else if(n<gr[i][2])

          gr[i][3]=300;

       else if(n>=gr[i][2])

          gr[i][3]=100;

    }

    for(int i=0;i<6;i++)

       printf("%d ",ar[i][3]);

    for(int i=0;i<7;i++)

       printf("%d ",gr[i][3]);

	return 0;

}