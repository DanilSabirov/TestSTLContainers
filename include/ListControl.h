#ifndef LISTCONTROL_H
#define LISTCONTROL_H
#include "ContainerControl.h"
#include "Data.h"
#include <list>
#include <random>
#include <algorithm>

class ListControl : public ContainerControl
{
    public:
        ListControl(int dataSize);
        ListControl(int dataSize, unsigned long long seed);
        virtual ~ListControl();
        void InsertElementsBack(int K);
        void InsertElementsFront(int K);
        void LinearSearch();
        void Sort();
        void Mix();
        void Clear();
    protected:

    private:
        std::list <Data> l;
        std::mt19937 mt_rand;
        int dataSize;
};

#endif // LISTCONTROL_H
