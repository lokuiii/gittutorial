#include <stdio.h>
#include <stdbool.h>

//массивы блин

int main(void) {
   
   int arr[] = {5, 7, 2, 73, 65};
   arr[0] = 44;
   //printf("%d\n", arr[0]);

   float numbers[3];
   numbers[0] = 5.4f;
   numbers[1] = 4.12f;
   numbers[2] = 3.21f;

   char dima[] = {'s', 'o', 'n', 'y', 'a'};
   char dimka[] = "sonya cool";
   dimka[1]='a';
  
 //куча символов если
   printf("%s\n", dimka);

 //один символ даже даже
   printf("%c\n", dimka[4]);

//двумерные массивы данных ахуеть
   int array[3][4] = {
        {4, 5, 6, 14},
        {5, 6, 7, 13},
        {8, 9, 10, 11},
    };

    array[1][1] = 12;
    printf("%d\n", array[0][0]);

    
    return 0;
}