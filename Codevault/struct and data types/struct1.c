#include <stdio.h>
#include <stdlib.h>

/*
    Make a struct of a 2D corrdinate
*/

struct point  // a struct point is created using struct
{
    double x;
    double y;
};

// double midpoint(double p1x,double p1y,double p2x,double p2y);

int main()
{
    struct point p1; // to use the struct, we need to instantiate the strcu every time
    p1.x = 2;
    p1.y = 3;

    struct point p2;
    p2.x = 2;
    p2.y = 3;

    printf("X = %lf\n", p1.x);
    printf("X = %lf\n", p1.y);
    printf("X = %lf\n", p2.x);
    printf("X = %lf\n", p2.y);
    return 0;
}

// double midpoint(double p1x,double p1y,double p2x,double p2y)
// {   
//     struct point mp;
//     mp.x = ((p1x+p2x)/2)/2;
//     mp.y = ((p1y+p2y)/2)/2;

//     return double mp;
// }