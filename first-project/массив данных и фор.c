#include <stdio.h>

int main() {
    int arr[] = {5,67,0,-2,6};
    for(int i=0; i<5; i++)
        printf("%d", arr [i]);

    printf("\n");
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<5; i++) {
        if(arr[i]<min)
          min=arr[i]; 
        if(arr[i]>max)
            max=arr[i]; }
    printf("самое маленькое: %d\n", min);
    printf("самое большое: %d\n", max);

    return 0;
}