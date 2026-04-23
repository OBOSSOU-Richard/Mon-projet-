#include "Accumulator.h"

int main()
{
    Accumulator acc;

    acc.n=0;
    acc.xSum =0;
    acc.xSquareSum =0;
    for (int i=0; i<10;i++){
        acc.Add((double)i);
    }
    double mean = acc.xSum /acc.n;
    return 0;
}