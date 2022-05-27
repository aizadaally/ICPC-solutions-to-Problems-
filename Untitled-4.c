#include <stdio.h>
int main()
{
    printf("Hello World");

    return = 0;
}


#include <stdio.h>
//  extern int a, b;
//  extern int c;
//  extern float f;
 
int main()
{
const int LENGTH =10;
const int WIDTH = 5;
const char NEWLINE = '\n';
// int a,b;
// int c;
// float f; 
// a=10;
// b=20;
// c= a+b;
// printf("value of c :%d \n", c);
// f = 70.0/3.0;
// printf("value of f :%f \n", f);
int area;
area = LENGTH * WIDTH;
printf("value of area: %p", &area);
printf("%c", NEWLINE);


    return 0;
}