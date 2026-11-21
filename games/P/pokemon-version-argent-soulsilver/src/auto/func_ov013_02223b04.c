/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void *func_020afae4(u16 idx);
void func_020afa68(s32 v);
s32 func_020afa10(void);
void func_020d4808(void *src, void *dst, s32 size);

s32 func_ov013_02223b04(u8 *dst, s32 lim) {
    s32 cnt;
    s32 i;

    func_020afa68(1);
    cnt = func_020afa10();
    if (cnt > 0) {
        i = 0;
        if (cnt > 0) {
            do {
                if (i >= lim) {
                    break;
                }
                func_020d4808(func_020afae4((u16) i), dst, 0xC0);
                i++;
                dst += 0xC0;
            } while (i < cnt);
        }
    }
    func_020afa68(0);
    return cnt;
}
