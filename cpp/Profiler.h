#ifndef UTILS_PROFILER_H
#define UTILS_PROFILER_H

#include <chrono>

class Profiler {
public:
    explicit Profiler(const char* pName = "Unknow");
    ~Profiler();
private:
    Profiler(const Profiler& rhs) = delete;
    Profiler& operator=(const Profiler&& rhs) = delete;
    typedef std::chrono::high_resolution_clock clock;
    typedef std::chrono::microseconds res;

    clock::time_point   mStart;
    const char*         mName;
};

#endif // UTILS_PROFILER_H
