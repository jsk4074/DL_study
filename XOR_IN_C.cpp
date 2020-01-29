#include <stdio.h>


int AND(int x1, int x2)
{
    double w1 = 0.5, w2 = 0.5, thata = 0.7;
    double temp = x1 * w1 + x2 * w2;
    if (temp <= thata)
        return 0;
    else if (temp > thata)
        return 1;
}

int NAND(int x1, int x2)
{
    double w1 = -0.5, w2 = -0.5, thata = -0.7;
    double temp = x1 * w1 + x2 * w2;
    if (temp <= thata)
        return 0;
    else if (temp > thata)
        return 1;
}

int OR(int x1, int x2)
{
    double w1=0.5 , w2=0.5, thata = 0.3;
    double temp = x1 * w1 + x2 * w2;
    if (temp <= thata)
        return 0;
    else if (temp > thata)
        return 1;
}

int XOR(int x1, int x2)
{
    int nand_result = NAND(x1, x2);
    int or_result = OR(x1, x2);
    int and_result = AND(nand_result, or_result);

    return and_result;
}


int main()
{
    printf("XOR(0, 0) result = %d\n", XOR(0, 0));
    printf("XOR(1, 0) result = %d\n", XOR(1, 0));
    printf("XOR(0, 1) result = %d\n", XOR(0, 1));
    printf("XOR(1, 1) result = %d\n", XOR(1, 1));
}

