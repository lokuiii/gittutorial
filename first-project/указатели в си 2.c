#include <stdio.h>

//указатели СИ вторая часть!!!
struct Abstruct {
    int width, height;};

void calc(struct Abstruct *object);

int main() {
    struct Abstruct sqare = {5, 7};
    calc(&sqare);
    return 0;
}
void calc(struct Abstruct *object) {
    int res = object->width * object->height;
    printf("Результат %d\n", res);
}