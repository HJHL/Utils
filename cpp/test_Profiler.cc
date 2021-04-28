#include "Profiler.h"

int main(int argc, char *argv[]) {
    {
        Profiler profiler;
        int sum = 0;
        for (int i = 0; i < 1e8; ++i) {
            sum += i;
        }
    }
    {
        Profiler profiler("After");
        int sum = 0;
        for (int i = 0; i < 1e8; i += 5) {
            sum += i;
            sum += i + 1;
            sum += i + 2;
            sum += i + 3;
            sum += i + 4;
        }
    }
    return 0;
}
