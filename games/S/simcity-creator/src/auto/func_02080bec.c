#include "m2c.h"

u16 func_02080bec(u32 arg0, u32 arg1) {
    if (arg0 <= arg1) {
        return 0U;
    }
    return (u16) (arg0 - arg1);
}
