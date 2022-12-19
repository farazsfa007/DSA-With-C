#include<stdio.h>

float Areasquare(float side); // We tell the Compiler that we created a function in here
float Areacircle(float rad);
float Arearectangle(float a, float b);

int main()
{
    float a = 8.0;
    float b = 19.4;

    printf("\n Area of Rectange %.2f \n",Arearectangle(a,b));
    printf("\n Area of Circle %.2f \n",Areacircle(a));
    printf("\n Area of Rectange %.2f \n",Areasquare(b));

    return 0;
}

float Areasquare(float side) { //Function Definition
    return side * side;
}

float Areacircle(float rad) {  //Function Definition
    return 3.14 * rad * rad;
}

float Arearectangle(float x, float y) {  //Function Definition
    return x * y;
}