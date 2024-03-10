#include <stdio.h>
#include <stdbool.h>


// условные операторы

int main() {
    int x=10, y=5;
// !=(не равно) < >=
    if(x == 5) {
        printf("Yes\n");
    }
    
    else if(x>100)
        printf("X is >100");
    else if(x<5) {
        printf("X is <5 ");
        }
    else {
    printf("No\n");}

//типа объединили все понял понял, или то, или то ||
    if(x==10 || x>=20 || x<=1 || x>1000)
        printf("YeAAAAAs\n");
    
// если сразу два условия нада &&
    if((x==10 && y>=5)||(x=30))
        printf("YeAAAAAАААААААААААААААААААААААААААААs\n");
    

    bool isSonyaCool = true;
    if(isSonyaCool)
    //if(isSonyaCool == true)
    //if(!isSonyaCool == false)
        printf("Yes\n");
    else
        printf("No\n");


    
    return 0;
}