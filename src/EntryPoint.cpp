#include <iostream>
#include <omp.h>

int main() {
#ifdef _OPENMP
    std::cout << "OpenMP enabled! _OPENMP = " << _OPENMP << "\n";
    std::cout << "Max threads available: " << omp_get_max_threads() << "\n";

#pragma omp parallel
    {
#pragma omp critical
        std::cout << "Hello from thread " << omp_get_thread_num() << "\n";
    }
#else
    std::cout << "OpenMP is NOT enabled (_OPENMP is not defined).\n";
#endif
    return 0;
}