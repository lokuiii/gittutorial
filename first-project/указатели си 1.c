#include <stdio.h>

//указатели СИИ
    // это типа переменная, которая содержит адрес другого объекта
//     int num=0;
//     int * pNum = &num; 
//     printf("%p - %p\n", pNum, &num);
//     //printf("%d\n", num); так типа медленнее
//     printf("%d\n", *pNum); 
// // символ p если выводим адрес, то есть указатель
  
//     *pNum = 10;
//     printf("%d - %d\n", *pNum, num);

struct Abstruct {
    int width, height;};

void calc(struct Abstruct object);

int main() {
    struct Abstruct sqare = {5, 7};
    calc(sqare);
    return 0;
}

void calc(struct Abstruct object) {
    int res = object.width * object.height;
    printf("Результат %d", res);
}
