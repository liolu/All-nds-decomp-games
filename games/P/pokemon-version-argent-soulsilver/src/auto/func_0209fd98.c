#include "m2c.h"

s32 func_0209fd28(void);

s32 func_0209fd98(u64 a) {
    if (func_0209fd28() != 0) {
        return (s32) (a & 0xFFFFFFFFULL);
    }
    return 0;
}
