#pragma once

#include "Massif.hpp"

namespace WorkOfMassif {
    class Function {
    private:
        short minValue;
        short maxValue;
        short sum;
        short average;
    public:
        Function(Massif& massif);

        short getMinValue() {return minValue;};
        short getMaxValue() {return maxValue;};
        short getSum() {return sum;};
        short getAverage() {return average;};

        void setMinValue(const short& value);
        void setMaxValue(const short& value);
        void setSum(const short& sum);
        void setAverage(const short& average);
    };
}