#include<stdio.h>

void main()
{
float r;
double volume;

printf("\nENTER THE RADIUS TO CALCULATE THE VOLUME OF SPHERE\n");
scanf("%f",&r);
volume=(4/3)*(22.0/7.0)*(r*r*r);

printf("\nTHE VOLUME OF THE SPHERE: %f",volume);

float s;
double volume1;

printf("\nENTER THE EDGE TO CALCULATE THE VOLUME OF CUBE\n");
scanf("%f",&s);
volume1=s*s*s;

printf("\nTHE VOLUME OF THE CUBE: %f",volume1);

float r1,h;
double vol2;

printf("\nENTER THE RADIUS AND HEIGHT OF THE CYLINDER TO CALCULATE THE VOLUME\n");
scanf("%f%f",&r1,&h);
vol2=(22.0/7.0)*(r1*r1)*h;

printf("\nTHE VOLUME OF THE CYLINDER: %f",vol2);
}