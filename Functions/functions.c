#include <stdio.h>

float minOfTwoFloats(float first_float, float second_float)
{
    if (first_float < second_float)
        return first_float;
    else
        return second_float;
}

float minOfFourFloats(float first_float, float second_float, float third_float, float forth_float)
{
    float first_min = minOfTwoFloats(first_float, second_float);
    float second_min = minOfTwoFloats(third_float, forth_float);
    if (first_min < second_min)
        return first_min;
    else
        return second_min;
}

float maxOfTwoFloats(float first_float, float second_float)
{
    if (first_float > second_float)
        return first_float;
    else
        return second_float;
}

float maxOfFourFloats(float first_float, float second_float, float third_float, float forth_float)
{
    float first_max = maxOfTwoFloats(first_float, second_float);
    float second_max = maxOfTwoFloats(third_float, forth_float);
    if (first_max > second_max)
        return first_max;
    else
        return second_max;
}

float sumOfFourFloats(float first_float, float second_float, float third_float, float forth_float)
{
    float sum = first_float + second_float + third_float + forth_float;
    return sum;
}

int main ()
{
    float a_float;
    float b_float;
    float c_float;
    float d_float;

    printf("Give four floats: ");
    scanf("%f %f %f %f", &a_float, &b_float, &c_float, &d_float);

    float min = minOfFourFloats(a_float, b_float, c_float, d_float);
    float max = maxOfFourFloats(a_float, b_float, c_float, d_float);
    float sum = sumOfFourFloats(a_float, b_float, c_float, d_float);
    float mean = (sum / 4);

    printf("min: %f\n", min);
    printf("max: %f\n", max);
    printf("sum: %f\n", sum);
    printf("mean: %f\n", mean);

    return 0;
}