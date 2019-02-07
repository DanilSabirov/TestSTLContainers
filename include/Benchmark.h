#ifndef BENCHMARK_H
#define BENCHMARK_H
#include <ctime>
#include "ContainerControl.h"
#include "Data.h"
#include <iostream>
#include <vector>

 extern __inline__ uint64_t rdtsc() {
   uint64_t x;
  __asm__ volatile ("rdtsc\n\tshl $32, %%rdx\n\tor %%rdx, %%rax" : "=a" (x) : : "rdx");
   return x;
 }

class Benchmark
{
    public:
        Benchmark(ContainerControl *cont);
        virtual ~Benchmark();
        unsigned long long BenchInsertElementsBack(unsigned int K);
        unsigned long long BenchInsertElementsFront(unsigned int K);
        unsigned long long BenchLinearSearch(unsigned int K);
        unsigned long long BenchSort(unsigned int K);
        unsigned long long BenchClear(unsigned int K);
    protected:

    private:
        ContainerControl *container;
};

#endif // BENCHMARK_H
