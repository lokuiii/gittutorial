#include <stdio.h>
#include <stdbool.h>

int main() {
    //for(int i=0; i<10; i++) {
    //    printf("%d\n", i);}

    //for(float i=110; i>10; i/=2) {
    //    printf("%.2f\n", i);}

    // bool isSonyaCool = true;
    // int x=5;
    // while(isSonyaCool) {
    //     printf("введи цифру брат");
    //     scanf("%d", &x);
    //     if(x==1)
    //         isSonyaCool = false;}

    // int i=0;
    // while(i<10) {
    //     printf("%d\n, i");
    //     i++; }
    
    // bool SonyaCool = false;
    // do {
    //     printf("соонечка крутая");
    // } while (SonyaCool);

    for(int x=0; x<10; x++) {
        // if(x==3)
        // break;
        if(x % 2 == 0)
        continue;
        printf("%d\n", x);
    }

    return 0;
}