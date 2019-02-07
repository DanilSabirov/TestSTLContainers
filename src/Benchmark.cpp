#include "Benchmark.h"

Benchmark::Benchmark(ContainerControl *cont)
{
    container = cont;
}

Benchmark::~Benchmark()
{
    delete container;
}

unsigned long long Benchmark::BenchInsertElementsBack(unsigned int K){
    unsigned long long time1 = rdtsc();
    container->InsertElementsBack(K);
    return rdtsc() - time1;
}
unsigned long long Benchmark::BenchInsertElementsFront(unsigned int K){
    unsigned long long time1 = rdtsc();
    container->InsertElementsFront(K);
    return rdtsc() - time1;
}
unsigned long long Benchmark::BenchLinearSearch(unsigned int K){
    container->InsertElementsBack(K);
    container->Mix();
    unsigned long long time1 = rdtsc();
    for(int i = 0; i < 1000; i++)
        container->LinearSearch();
    return rdtsc() - time1;
}

unsigned long long Benchmark::BenchSort(unsigned int K){
    container->InsertElementsBack(K);
    container->Mix();
    unsigned long long time1 = rdtsc();
    container->Sort();
    return rdtsc() - time1;
}

unsigned long long Benchmark::BenchClear(unsigned int K){
    container->InsertElementsBack(K);
    unsigned long long time1 = rdtsc();
    container->Clear();
    return rdtsc() - time1;
}
