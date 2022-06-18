#include<stdio.h>

int main() {

    /*
    Arthemetic Operations: +, -, *, /
    */

    int a, b;
    a = b = 1;
    a = a + b;
    printf("%d\n", a);
    a = a * b;
    printf("%d\n", a);
    a = a / b;
    printf("%d\n", a);
    a = a - b;
    printf("%d\n", a);

    // Modular Operator
    printf("%d\n", 16%10);

    // Type Conversion
    /*
    int operation int -----> int
    int operation float -----> float
    float operation float -----> float
    */ 

    int z = 1.9999999;
    printf("value of z : %d\n", z);

    // Operation Precedence ----> कोन का ऑपरेशन फेले होगा
    /*
    *(multiply), /(divide), %(modular)
                    |
                    |
                    |
        +(addition), -(subtraction)
                    |
                    |
                    |
                =(equal to)
    */

    // =(equal to is also known as assignment operator)

    int x = 4 * 3 / 6 * 2;
    printf("value of x: %d\n", x);

    return 0;
}

