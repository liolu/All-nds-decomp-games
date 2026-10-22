#include "m2c.h"

extern s32 data_027e0010;
extern s32 data_027e0208;
extern s32 data_027e0220;

s32 func_020320e0(void) {
    if ((data_027e0010 != -1) && ((s32) data_027e0220 >= (s32) data_027e0208)) {
        return 1;
    }
    return 0;
}
