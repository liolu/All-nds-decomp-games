/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern s16 func_ov013_02222a64(u16);
extern void func_ov013_02222988(s16 *, s32, s16);
extern void func_ov013_02222554(s32, s16 *, s16, s32, s16 *, void *, s32);
extern u8 data_ov013_0224dd18;

void func_ov013_02222440(s32 a0, s16 *a1, s32 a2, s16 *a3, s16 *a4, s32 a5) {
    if (a0 == 1) {
        *a4 = 1;
        func_ov013_02222554(a2, a1 + 2, *a3, a5, a1 + 1, &data_ov013_0224dd18, 8);
        *a1 = func_ov013_02222a64((u16) *a3);
        *a3 = *a3 + 4;
        return;
    }
    func_ov013_02222988(a1, a2, *a3);
}
