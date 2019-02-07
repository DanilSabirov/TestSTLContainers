#include "DequeControl.h"

DequeControl::DequeControl(int dataSize)
{
   DequeControl::dataSize = dataSize;
   mt_rand.seed(time(0));
}

DequeControl::DequeControl(int dataSize, unsigned long long seed)
{
   DequeControl::dataSize = dataSize;
    mt_rand.seed(seed);
}

DequeControl::~DequeControl()
{
    deq.clear();
}

void DequeControl::InsertElementsBack(int K){
    Data d(dataSize, 1);
    for(int i = 0; i < K; i++){
        deq.push_back(d);
        d.Number++;
    }
}

void DequeControl::InsertElementsFront(int K){
    Data d(dataSize);
    for(int i = 0; i < K; i++){
        deq.push_front(d);
    }
}

void DequeControl::LinearSearch(){

    Data f(dataSize, mt_rand() % deq.size());
    auto it = std::find(deq.begin(), deq.end(), f);
}

void DequeControl::Sort(){
    std::sort(deq.begin(), deq.end());
}

void DequeControl::Mix(){
    std::shuffle(deq.begin(), deq.end(), mt_rand);
}

void DequeControl::Clear(){
    deq.clear();
}

