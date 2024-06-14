// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a =5, b=6, c=10, d=11, e, rem1, rem2;
    e = a+c+d;
    
    printf("a+c+d =%d \n", e);
    int rem = e%a;
    printf("remainder = %d\n", rem);
    rem1 =++ rem;
    printf("+ rem = %d\n", rem1);
    rem2 =-- rem;
    printf("rem2 = %d", rem2);

    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a =5, b=6, c=10, d=11, e, rem1, rem2;
    e = a+c+d;
    
    printf("a+c+d =%d \n", e);
    int rem = e%a;
    printf("remainder = %d\n", rem);
    rem1 =++ rem;
    printf("+ rem = %d\n", rem1);
    rem2 =-- rem;
    printf("rem2 = %d", rem2);
    
    //relational operators
    printf("Relational operators");
    int j = 5, w = 5;
    int jwb = j == w;
    printf("%d == %d is: %d\n", j, w, jwb);
    

    return 0;
}