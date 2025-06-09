#include <stdio.h>

void bubbleSort(int arr[], int n) {

    int i, j, temp;

    for (i = 0; i < n - 1; i++) {

        // 마지막 i개의 원소는 이미 정렬되어 있으므로 비교 횟수는 점점 줄어듦

        for (j = 0; j < n - 1 - i; j++) {

            if (arr[j] > arr[j + 1]) {

                // swap

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

}

int main() {

    int a[3];

    for(int i=0;i<3;i++)

        scanf("%d",&a[i]);

    bubbleSort(a,3);

    if(a[0]==a[1]&&a[0]==a[2])

        printf("2");

    else if(a[2]*a[2]==a[0]*a[0]+a[1]*a[1])

        printf("1");

    else

        printf("0");

    return 0;

}