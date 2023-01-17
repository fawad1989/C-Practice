#include <stdio.h>
#include <stdlib.h>

/*
    Make a typedef struct of a 2D corrdinate
*/

typedef unsigned long long UINT64; // it creats a data type called UINT64, else one has to write 


typedef struct point  // a struct point is created and is represented as Point data type
{
    double x;
    double y;
} Point;        //Point is the name given to this data type


int main()
{
    Point p1;
    p1.x = 2;
    p1.y = 3;

    Point p2;
    p2.x = 2;
    p2.y = 3;


    printf("X = %lf\n", p1.x);
    printf("X = %lf\n", p1.y);
    printf("X = %lf\n", p2.x);
    printf("X = %lf\n", p2.y);
    return 0;
}