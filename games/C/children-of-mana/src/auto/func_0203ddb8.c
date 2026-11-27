/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207c868();                                /* extern */
extern u32 data_020fe178;
extern u32 data_0211734c;

void func_0203ddb8(void) {
    if ((u32) data_0211734c < (u32) data_020fe178) {
        return;
    }
    if (func_0207c868() == 5) {
        data_0211734c = data_020fe178;
        return;
    }
    data_0211734c = 0;
}
