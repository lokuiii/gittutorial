#include "5fun.h"

//работа с функциями 
// 1 void info();
//int main() {
    // info();
    // return 0;}
//ничего не возвращает void

//2
void sum(int a, int b) ;
float mult(float a, float b) ;
void string(char massive[]) ;

int main() {
    sum(20,50);
    int x=5, y=7;
    sum(x,y);

    string("Привет");
    //char word[] = {'s', 'o', 'm', 'e'}
    //string (word);

    float result = mult(4.5f, 7.8f);
    printf("Результат: %.2f\n", result);
    
    return 0;
}

void sum(int a, int b) {
    int res = a+b;
    printf("Результат: %d\n", res);
}

float mult(float a, float b) {
    float res=a * b;
    // printf("Результат: %.2f\n", res);
    return res;

}

void string(char massive[]) {
    printf("%s\n", massive);
}
