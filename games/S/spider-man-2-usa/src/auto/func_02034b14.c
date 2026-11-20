/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa2b8();                            /* extern */
M2C_UNK func_0200114c();                            /* extern */
s32 func_02005af8(s32);                             /* extern */
M2C_UNK func_0200d054(void *);                      /* extern */
M2C_UNK func_0201eddc();                            /* extern */
M2C_UNK func_0203906c();                            /* extern */
extern s32 data_02157e10;
extern void **data_0215d690;

void func_02034b14(void *arg0) {
    func_0200114c();
    func_0201eddc();
    func_0200d054(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x38) == 0) {
        func_01ffa2b8();
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0x24) != 0) {
        M2C_FIELD(*data_0215d690, M2C_UNK(**)(), 0x10)(data_0215d690);
    }
    if (func_02005af8(data_02157e10) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x58) == 0) {
            return;
        }
        func_0203906c();
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 0xC) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x58) == 0) {
        return;
    }
    func_0203906c();
}
