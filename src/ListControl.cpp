#include "ListControl.h"

ListControl::ListControl(int dataSize)
{
    ListControl::dataSize = dataSize;
    mt_rand.seed(time(0));
}

ListControl::ListControl(int dataSize, unsigned long long seed)
{
    ListControl::dataSize = dataSize;
    mt_rand.seed(seed);
}

ListControl::~ListControl()
{
    l.clear();
}


void ListControl::InsertElementsBack(int K){
    Data d(dataSize, 1);
    for(int i = 0; i < K; i++){
        l.push_back(d);
        d.Number++;
    }
}

void ListControl::InsertElementsFront(int K){
    Data d(dataSize);
    for(int i = 0; i < K; i++){
        l.push_front(d);
    }
}


void ListControl::LinearSearch(){

    Data f(dataSize, mt_rand() % l.size());
    auto it = std::find(l.begin(), l.end(), f);
}

void ListControl::Sort(){
    l.sort();
}

void ListControl::Mix(){
    std::vector <Data> temp;
    for(auto i: l){
        temp.push_back(i);
    }
    l.clear();
    std::shuffle(temp.begin(), temp.end(), mt_rand);
    for(auto i: temp){
        l.push_back(i);
    }
}

void ListControl::Clear(){
    l.clear();
}
