#ifndef UTILS_LOG_H
#define UTILS_LOG_H

#include <cstdio>
#include <cstring>

static const char* GetFileName(const char* pFilePath) {
    const char* pFileName = strrchr(pFilePath, '/');
    if (pFileName == nullptr)
        pFileName = pFilePath;
    else
        ++pFileName;
    return pFileName;
}

#define LOG(fmt, ...)               \
    printf("%s %d: %s() " fmt "\n", \
            GetFileName(__FILE__),  \
            __LINE__,               \
            __FUNCTION__,           \
            ##__VA_ARGS__);

#endif // UTILS_LOG_H
