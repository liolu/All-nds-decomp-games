#include "m2c.h"

M2C_UNK func_020b4a48(u16);                         /* extern */
M2C_UNK func_020bdbec(u16);                         /* extern */
extern s32 data_027e05e8;

void func_02094a40(s32 *arg0) {
    func_020bdbec((u16) *arg0);
    func_020b4a48((u16) *arg0);
    data_027e05e8 &= ~4;
}
