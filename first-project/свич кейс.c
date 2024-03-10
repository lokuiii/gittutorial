#include <stdio.h>

//case - точное значение, замена =
int main(void) {
    int x=25;

    switch(x) {
        case  10:
            printf("10");
            break;
        case  11:
            printf("11");
            break;
        case  15:
            printf("15");
            break;
        default:
            printf("ниче не подходит подруга");
    }

    return 0;
}
