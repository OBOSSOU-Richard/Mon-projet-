#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

#include <string.h>

class Accumulator
{
    public:
    int n;
    double xSum;
    double xSquareSum;

    Accumulator(int ,double,double);
    void Add(double);
    void Initialize(int, double , double);

};

#endif
