#include <stdio.h>

// структуры данных

struct Car {
    int speed; 
    char name[50];
    float weight;
};


int main() {
    //int speed = 200 так типа можно но не нада
    struct Car msbs;
    msbs.speed = 250;
    //msbs.name = "lancer" так тоже не надо братишка
    strcpy(msbs.name, "MSBS LANCER");
    msbs.weight = 2500.00f;

    struct Car daevoo = {300, "Matiz",40.50f};
    
    printf("%s его скорость %d\n", daevoo.name, daevoo.speed);
    printf("%s его скорость %d\n", msbs.name, msbs.speed);

    return 0;
}