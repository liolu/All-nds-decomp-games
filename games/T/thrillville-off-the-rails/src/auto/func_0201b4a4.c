/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201af84(s32);                         /* extern */
M2C_UNK func_0201b1c0(s32);                         /* extern */
M2C_UNK func_0201b2a8(s32);                         /* extern */
M2C_UNK func_0201b368(s32);                         /* extern */
M2C_UNK func_0201b3b8(s32);                         /* extern */
M2C_UNK func_0201b434();                            /* extern */
M2C_UNK func_0201ba30(s32, s32);                    /* extern */
extern void *data_020ec108;
extern s32 data_020ec10c;

void func_0201b4a4(s32 arg0, s32 arg1, s16 arg2) {
    s32 temp_r1;

    func_0201b434();
    func_0201b3b8(arg1);
    func_0201b368(arg1);
    temp_r1 = (arg1 * 0x590) + (data_020ec10c + 0x10);
    if (M2C_FIELD(temp_r1, u8 *, 0x58E) == M2C_FIELD(data_020ec108, u8 *, 7)) {
        M2C_FIELD(temp_r1, u8 *, 0x58F) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x58F) + 1);
        if ((u32) M2C_FIELD(temp_r1, u8 *, 0x58F) > 3U) {
            M2C_FIELD(temp_r1, s16 *, 0x58A) = 0;
            func_0201b2a8(temp_r1 + 0x4C4);
            return;
        }
        goto block_4;
    }
    M2C_FIELD(temp_r1, u8 *, 0x58F) = 0U;
block_4:
    M2C_FIELD(temp_r1, u8 *, 0x58E)  = (u8) M2C_FIELD(data_020ec108, u8 *, 7);
    M2C_FIELD(temp_r1, s16 *, 0x58A) = 0x1771;
    M2C_FIELD(temp_r1, s32 *, 0x4B8) = (s32) M2C_FIELD(data_020ec108, s32 *, 0);
    M2C_FIELD(temp_r1, s8 *, 0x4B5)  = (s8) ((u32) (M2C_FIELD(data_020ec108, u8 *, 4) << 0x18) >> 0x1A);
    M2C_FIELD(temp_r1, s16 *, 0x58C) = arg2;
    func_0201ba30(temp_r1 + 0x4C0, M2C_FIELD(temp_r1, s32 *, 0x4B8));
    if (((u32) (M2C_FIELD(data_020ec108, u8 *, 4) << 0x1E) >> 0x1E) == 2) {
        func_0201af84(arg1);
        return;
    }
    func_0201b1c0(arg1);
}
