/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02040d48(void *, void *, void *);      /* extern */
M2C_UNK func_02040d54(void *);                      /* extern */
M2C_UNK func_02040d60(void *);                      /* extern */
s32 func_02040e50(s32);                             /* extern */
M2C_UNK func_02067d50(void *, s32);                 /* extern */
M2C_UNK func_02067d60(void *);                      /* extern */

void func_02028d28(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_02067d60(arg0 + 0x2C);
            func_02067d50(arg0 + 0x2C, func_02040e50(arg1));
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            break;
        case 1:
            func_02067d60(arg0 + 0x2C);
            func_02067d50(arg0 + 0x2C, func_02040e50(arg1));
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            break;
        case 2:
            func_02067d60(arg0 + 0x2C);
            M2C_FIELD(arg0, s32 *, 0xAC) = -0x1000;
            func_02067d50(arg0 + 0x2C, func_02040e50(arg1));
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            break;
    }
    M2C_FIELD(arg0, s32 *, 0)    = 0x80000;
    M2C_FIELD(arg0, s32 *, 4)    = 0x60000;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_02040d60(arg0 + 0xC4);
    func_02040d54(arg0 + 0xE8);
    func_02040d48(arg0 + 0x2C, arg0 + 0xC4, arg0 + 0xE8);
}
