#include<stdio.h>

int main(void) {

    int x, y;
    scanf("%d %d", & x, & y);

    if (x == 0 && y == 0) {
        printf("Origin\n");
    }
    else if (x != 0 && y == 0) {
        printf("X axis\n");
    }
    else if (x == 0 && y != 0) {
        printf("Y axis\n");
    }
    else if (x > 0 && y > 0) {
        printf("1st Quadrant\n");
    }
    else if(x < 0 && y> 0){
        printf("2nd Quadrant\n");
    }
    else if(x<0 && y<0){
        printf("3rd Quadrant\n");
    }
    else{
        printf("4th Quadrant\n");
    }


    return 0;
}