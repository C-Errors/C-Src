#include <stdio.h>

#define circleArea(r) (3.1415*(r)*(r))

void main()
{
    const int num = 45;
    printf("Area is %f", circleArea(10.0));
<<<<<<< HEAD

    #ifdef circleArea
        printf("\nCircle area is defined");
    #endif

    #undef circleArea

    #ifndef circleArea
        printf("\nCircle area defination is removed");
    #endif

}
=======
}
>>>>>>> d8d1dee780c631831a75c4f97e98f7313c8234fc
