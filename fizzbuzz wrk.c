#include<stdio.h>


int main(){


//program to determine the;
//multiple of 3, print fizz
//multiple of 5, prinnt buzz
//multiple of 7, printfizzbuzz
//if none of the above then print the number itself


int x=18;
if(x%3==0){
    printf("fizz\n");
}
else{
    printf("%d\n",x);
}

int y=25;
if(y%5==0){
    printf("buzz\n");

}
else{
    printf("%d\n",y);
}
int z=21;
if(z%7==0){
    printf("fizzbuzz\n");
}
else{
   printf("%d\n",z);
}
    return 0;
}