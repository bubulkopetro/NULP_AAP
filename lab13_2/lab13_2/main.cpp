// lab13_2
// Юлія Моляща
// Лабораторна робота №13.2
// Директиви препроцесора
// Варіант 5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "var.hpp"

#define z 3
#define MAX(a,b) ((a)>(b))?(a):(b)
#define MIN(a,b) ((a)<(b))?(a):(b)
#define SQR(x) ((x)*(x))
#define ABS(x) ((x<0)?(-x):(x))
#define PRINTI(w) printf(#w"=%d\n", w)
#define PRINTR(w) printf(#w"=%d\n", w)

using namespace nsVar;

int main()
{
    int max = 0;
    int min = 0;
    do
    {
        puts("Defining maximum of two numbers");
        puts("Input 2 integers");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        PRINTI(z);
        
        #if z == 1
        
        x_minus_y_sqr = SQR(x - y);
        PRINTI(x_minus_y_sqr);
        y_minus_x_abs = ABS(y - x);
        PRINTI(y_minus_x_abs);
        max = MAX(x_minus_y_sqr, y_minus_x_abs);
        PRINTR(max);
        
        #else
        {
            
            xx = SQR(x);
            PRINTI(xx);
            yy = SQR(y);
            PRINTI(yy);
            x_plus_yy = x + yy;
            PRINTI(x_plus_yy);
            z_plus_xx = z + xx;
            PRINTI(z_plus_xx);
            min = MIN(x_plus_yy , z_plus_xx);
            PRINTR(min);
            
        }
        #endif
        puts("Repeat? y/n "); ch = getchar();
    } while (ch == 'y');
}
