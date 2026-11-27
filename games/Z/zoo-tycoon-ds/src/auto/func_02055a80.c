/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002ba4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02002e88();                            /* extern */
M2C_UNK func_02002ec8();                            /* extern */
M2C_UNK func_02002f00();                            /* extern */
M2C_UNK func_020055d4(void *);                      /* extern */
M2C_UNK func_02055b68(void *);                      /* extern */
M2C_UNK func_02055bc0(void *);                      /* extern */

void func_02055a80(s32 arg0, void *arg1) {
    func_02002ec8();
    func_02002e88();
    func_02002f00();
    if (M2C_FIELD(arg1, s32 *, 0xE0) != 0) {
        M2C_FIELD(arg1, s32 *, 0xC0) = 0x10E;
    } else {
        M2C_FIELD(arg1, u16 *, 0xB4) = (u16) (M2C_FIELD(arg1, u16 *, 0xB4) + 1);
        if ((u32) M2C_FIELD(arg1, u16 *, 0xB4) > 4U) {
            M2C_FIELD(arg1, u16 *, 0xB4) = 0U;
            M2C_FIELD(arg1, u8 *, 0xB6)  = (u8) (M2C_FIELD(arg1, u8 *, 0xB6) + 1);
            if ((u32) M2C_FIELD(arg1, u8 *, 0xB6) > 3U) {
                M2C_FIELD(arg1, u8 *, 0xB6) = 0U;
            }
        }
        M2C_FIELD(arg1, u16 *, 0xBC) =
            (u16) ((M2C_FIELD(arg1, u16 *, 0xBC) & ~0x3FF) |
                   (0x3FF & (u16) (M2C_FIELD(arg1, u16 *, 0xC8) + (M2C_FIELD(arg1, u8 *, 0xB6) << 6))));
        M2C_FIELD(arg1, s32 *, 0xC0) = (s32) (M2C_FIELD(arg1, s32 *, 0xC0) - 2);
    }
    if ((M2C_FIELD(arg1, u8 *, 0xB2) == 0) && ((s32) M2C_FIELD(arg1, s16 *, 0xB0) >= 3)) {
        func_02055b68(arg1);
    }
    func_020055d4(arg1);
    func_02002ba4(arg1 + 0xB8, 1);
    func_02055bc0(arg1);
}
