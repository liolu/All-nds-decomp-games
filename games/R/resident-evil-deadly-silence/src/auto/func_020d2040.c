/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x1c];
    u8 f1c;
    u8 pad1[2];
    u8 st;
} Glob;
extern Glob data_0213b890;
s64 _s32_div_f(u8, s32);

void func_020d2040(void) {
    s64 r;

    r = _s32_div_f(data_0213b890.st, 2);
    if ((s32) (r >> 32) == 0) {
        data_0213b890.f1c = 0;
        return;
    }
    data_0213b890.f1c = 4;
}
