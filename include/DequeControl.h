#ifndef DEQUECONTROL_H
#define DEQUECONTROL_H
#include <deque>
#include "Data.h"
#include "ContainerControl.h"
#include <random>
#include <algorithm>

class DequeControl : public ContainerControl
{
    public:
        DequeControl(int dataSize);
        DequeControl(int dataSize, unsigned long long seed);
        virtual ~DequeControl();
        void InsertElementsBack(int K);
        void InsertElementsFront(int K);
        void LinearSearch();
        void Sort();
        void Mix();
        void Clear();
    protected:

    private:
        std::deque <Data> deq;
        std::mt19937 mt_rand;
        int dataSize;
};

#endif // DEQUECONTROL_H
