#include<stdio.h>

float convertTemp(float Celsies);

int main(int argc, char const *argv[])
{
    float far=convertTemp(38);
    printf("Far :%.2f\n",far);
    return 0;
}

float convertTemp(float Celcies) {

    float far=Celcies*(9.0/5.0)+32;
    return far;

}