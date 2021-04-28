#include "Profiler.h"
#include <iostream>

Profiler::Profiler(const char *pName): mName(pName) {
    mStart = clock::now();
}

Profiler::~Profiler() {
    clock::time_point end = clock::now();
    std::cout << "[" << mName << "] Duration: "
        << std::chrono::duration_cast<res>(end - mStart).count() / 1e3
        << "ms\n";
}
