#ifndef VECTORCONTROL_H
#define VECTORCONTROL_H
#include <vector>
#include "Data.h"
#include "ContainerControl.h"
#include <random>
#include <algorithm>
#include <ctime>
#include <iostream>

class VectorControl : public ContainerControl
{
    public:
        VectorControl(int dataSize);
        VectorControl(int dataSize, unsigned long long seed);
        virtual ~VectorControl();
        void InsertElementsBack(int K);
        void InsertElementsFront(int K);
        void LinearSearch();
        void Sort();
        void Mix();
        void Clear();
    protected:

    private:
        std::vector <Data> v;
        std::mt19937 mt_rand;
        int dataSize;
};

#endif // VectorControl_H
