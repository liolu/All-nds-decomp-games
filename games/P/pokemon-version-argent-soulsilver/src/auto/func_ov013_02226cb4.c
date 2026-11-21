/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

typedef struct {
    u8 b[0x58];
} Buf58;

void func_ov013_022262f0(Buf58 *buf);
void func_ov013_02226318(Buf58 *buf, s32 a, s32 b);
void func_ov013_02226390(s32 dst, Buf58 *buf);

void func_ov013_02226cb4(s32 arg0, s32 arg1, s32 arg2) {
    Buf58 L;

    func_ov013_022262f0(&L);
    func_ov013_02226318(&L, arg1, arg2);
    func_ov013_02226390(arg0, &L);
}
