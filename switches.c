#include <stdio.h>

int main(){
    //int x= 5;
    //( x== 5)? printf("x is 5\n") : printf("x is not 5\n");
    //int time = 20;
    //(time < 18) ? printf("Good Day.\n") : (time < 20) ? printf("Good evening.\n") : printf("Goodnight.\n");
    //return 0;
    //int x = 20;
    //(x % 2==0) ? printf(" Number is even.\n") : printf("Number is not even.\n");
    int day = 4;
    switch (day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day");
            break;
    }
    int age = 21
    return 0;
    }