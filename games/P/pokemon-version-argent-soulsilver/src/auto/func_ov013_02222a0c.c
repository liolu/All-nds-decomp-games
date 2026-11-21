/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

s32 func_020a3038(s32, s32, s32, s32, s8 *);

void func_ov013_02222a0c(s32 a0, s32 a1, s32 a2, s32 a3, s8 *p, s32 v) {
    *p = (s8) v;
    func_020a3038(a0, a1, a2, a3, p);
}
