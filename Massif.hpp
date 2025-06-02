#pragma once

#include "Includes.hpp"

namespace WorkOfMassif
{
    class Massif
    {
    private:
        vector<int> massif;
        short size;
    public:
        Massif();

        vector<int> getMassif() {return massif;}
        short getSize() {return size;}

        void setMassif(vector<int>& massif);
        void setSize(short& size);
    };
}