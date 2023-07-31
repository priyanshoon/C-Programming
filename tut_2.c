#include<stdio.h>
#include<math.h>

int main() {
    int a = 25;
    char star = '*';
    float pi = 3.14;

    // Variables are case sensetive
    // 1st character is alphabet or '_'
    // no comma/blank space
    // no other symbols other than "_"

    /*
    ------------------------------------------------------------
    Data Types                                     Size in bytes

    Char or Signed Char                            1
    Unsigend Char                                  1
    int and signed int                             2
    unsigned int                                   2
    short int and unsigned short int               2
    signed short int                               2
    long int and signed long int                   4
    unsigned long int                              4
    float                                          4
    double                                         8
    long double                                    10
    ------------------------------------------------------------
    */

    // Reserve Keywords

    /*
    ---------------------------------------------
    auto        double      int         struct
    break       else        long        switch
    case        enum        register    typedef
    char        extern      return      union
    continue    for         signed      void
    do          if          static      while
    default     goto        sizeof      volatile
    const       float       short       unsigned
    ---------------------------------------------
    */

    printf("age is %d\n", a);
    printf("value of pi is %f\n", pi);
    printf("star looks like this %c\n", star);

    // Input in C Programming

    int age;
    scanf("%d", &age);
    printf("my age is %d\n", age);

    // Calculating area of a square

    int side;
    printf("Enter the side of Square: ");
    scanf("%d", &side);
    printf("Area of square is : %d\n", side*side);

    // Calculate the area of circle

    float radius;

    printf("Enter your radius of a circle: ");
    scanf("%f", &radius);
    printf("Area of a circle is : %f\n", pi*(radius*radius));

    return 0;
}
