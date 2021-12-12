#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int sincal()
{
    double x;
    double result;

    printf("\n\n");

    x = 2.3;
    result = sin(x);
    
    printf("Sin of(%.2lf) = %.2lf\n", x, result);

}

int coscal() {
   double x, ret, val;

   x = 60.0;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("\n");
   printf("The cosine of %lf is %lf degrees\n", x, ret);
   
   x = 90.0;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("\n");
   printf("The cosine of %lf is %lf degrees\n", x, ret);
}

void main(){
    sincal();
    coscal();
}