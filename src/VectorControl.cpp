#include "VectorControl.h"

VectorControl::VectorControl(int dataSize)
{
    VectorControl::dataSize = dataSize;
    mt_rand.seed(time(0));
}

VectorControl::VectorControl(int dataSize, unsigned long long seed)
{
    VectorControl::dataSize = dataSize;
    mt_rand.seed(seed);
}

VectorControl::~VectorControl()
{
    v.clear();
}

void VectorControl::InsertElementsBack(int K){
    Data d(dataSize, 1);
   // v.insert(v.end(), K, d);
    for(int i = 0; i < K; i++){
        v.push_back(d);
        d.Number++;
    }
}

void VectorControl::InsertElementsFront(int K){
    Data d(dataSize);
    for(int i = 0; i < K; i++){
        v.insert(v.begin(), d);
    }
}


void VectorControl::LinearSearch(){

    Data f(dataSize, mt_rand() % v.size());
    auto it = std::find(v.begin(), v.end(), f);
}

void VectorControl::Sort(){
    std::sort(v.begin(), v.end());
}

void VectorControl::Mix(){
    std::shuffle(v.begin(), v.end(), mt_rand);
}

void VectorControl::Clear(){
    v.clear();
}
