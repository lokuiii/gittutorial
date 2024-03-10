#include <stdio.h>

// работа с файлами
 
int main() {
    // FILE *file = fopen("test txt", "w");
    //fprintf(file, "соняшка простаквашка\nэто я");
    // fclose(file);
//первое это место файла, второе способ открытия (r что читать, w чтоб написать туда, a это чтоб добавить)
 
    char line[255];
    FILE *file = fopen("test.txt", "r");
    
    fgets(line, 255, file);
    printf("%s", line); 
   
    fgets(line, 255, file);
    printf("%s", line); 
    
    fgets(line, 255, file);
    printf("%s", line); 
    

    fclose(file);

    return 0;
}