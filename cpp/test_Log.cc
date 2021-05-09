#include "Log.h"

void func1() {
    LOG("test func1 %s", __FUNCTION__);
}

int func2(int i, float f, double d, char c) {
    LOG("int %d, float %f, double %f, char %c",
            i, f, d, c);
    return i;
}

int main() {
    LOG("Hello, I'm main");
    func1();
    func2(1, 1.333, 1.4444, 'A');
    return 0;
}
