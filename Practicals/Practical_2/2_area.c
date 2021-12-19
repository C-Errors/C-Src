#include <stdio.h>

void main()
{
    float r,area;
    printf("\nENTER THE RADIUS OF THE CIRCLE TO CALCULATE THE AREA\n");
    scanf("%f",&r);

    area = (22.0/7.0)*r*r;
    printf("\nTHE AREA OF THE CIRCLE: %.2f",area);

    float s,area1;
    printf("\nENTER THE LENGTH OF THE SQUARE TO CALCULATE THE AREA\n");
    scanf("%f",&s);

    area1=s*s;
    printf("\nTHE AREA OF THE SQUARE: %.2f",area1);

    float l,b,area2;
    printf("\nENTER THE LENGTH AND BREADTH OF THE RECTANGLE TO CALCULATE THE AREA\n");
    scanf("%f%f",&l,&b);

    area2 = l * b;
    printf("\nTHE AREA OF THE RECTANGLE: %.2f",area2);
}