#include <cstdio>
#include <cstdarg>
#include <unistd.h>

#define H_TPRINTF 1
#define H_D1PRINTF 1
#define H_D2PRINTF 1
#define H_D3PRINTF 1
#define H_D4PRINTF 1

#ifdef H_TPRINTF
#define h_tprintf(format, ...) printf(format, ##__VA_ARGS__)
#else
#define h_tprintf(format, ...) ((void)0)
#endif

#ifdef H_D1PRINTF
#define h_d1printf(format, ...) printf(format, ##__VA_ARGS__)
#else
#define h_d1printf(format, ...) ((void)0)
#endif

#ifdef H_D2PRINTF
#define h_d2printf(format, ...) printf(format, ##__VA_ARGS__)
#else
#define h_d2printf(format, ...) ((void)0)
#endif

#ifdef H_D3PRINTF
#define h_d3printf(format, ...) printf(format, ##__VA_ARGS__)
#else
#define h_d3printf(format, ...) ((void)0)
#endif

#ifdef H_D4PRINTF
#define h_d4printf(format, ...) printf(format, ##__VA_ARGS__)
#else
#define h_d4printf(format, ...) ((void)0)
#endif