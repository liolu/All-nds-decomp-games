/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_020fa5d0;
extern M2C_UNK data_020fa61c;
extern M2C_UNK data_02110cc0;
extern M2C_UNK data_0211b028;
extern M2C_UNK data_02110c78;
extern M2C_UNK data_02110c9c;
s32 func_0205b964(u8 *);
void func_0205ba98(u8 *);
void func_0205ba28(u8 *);
s32 func_020015ec(u8 *, s32, s32, s32);

s32 func_020018c4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 idx;
    s32 res;
    u8 *ent;
    s32 cur;

    if (arg3 == (s32) &data_020fa5d0) {
        idx = 3;
    } else {
        idx = (arg3 == (s32) &data_020fa61c) ? 4 : 5;
    }
    ent = (u8 *) &data_02110cc0 + idx * 0x14;
    if (func_0205b964(ent) == 0) {
        ((s32 *) &data_02110c78)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_0211b028 + 0x8) + 0x6C);
        ((s32 *) &data_02110c9c)[idx] = 1;
    } else {
        cur = ((s32 *) &data_02110c78)[idx];
        if (cur == *(s32 *) (*(u8 **) ((u8 *) &data_0211b028 + 0x8) + 0x6C)) {
            ((s32 *) &data_02110c9c)[idx] = ((s32 *) &data_02110c9c)[idx] + 1;
        } else {
            func_0205ba98(ent);
            ((s32 *) &data_02110c78)[idx] = *(s32 *) (*(u8 **) ((u8 *) &data_0211b028 + 0x8) + 0x6C);
            ((s32 *) &data_02110c9c)[idx] = 1;
        }
    }
    res                           = func_020015ec(arg0, arg1, arg2, arg3);
    ((s32 *) &data_02110c9c)[idx] = ((s32 *) &data_02110c9c)[idx] - 1;
    if (((s32 *) &data_02110c9c)[idx] == 0) {
        func_0205ba28(ent);
    }
    return res;
}
