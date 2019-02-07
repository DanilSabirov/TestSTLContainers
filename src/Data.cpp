#include "Data.h"

Data::Data(int size_)
{
    v.resize(size_);
}

Data::Data(int size_, int Number)
{
    v.resize(size_);
    Data::Number = Number;
}

Data::~Data()
{
    v.clear();
}

bool operator == (const Data &d1, const Data &d2){
    if(d1.Number == d2.Number)
        return true;
    return false;
}

bool operator < (const Data &d1, const Data &d2){
    if(d1.Number < d2.Number)
        return true;
    return false;
}
