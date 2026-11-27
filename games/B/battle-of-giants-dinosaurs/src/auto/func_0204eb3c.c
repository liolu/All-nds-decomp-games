/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

void func_0204e1cc(s32);
void func_020514c0(void *, void *);
extern u8 data_020cf188;

void func_0204eb3c(u8 *arg0) {
    func_0204e1cc(*(s32 *) (arg0 + 0x40));
    func_020514c0(&data_020cf188, arg0);
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x24) & ~1;
}
