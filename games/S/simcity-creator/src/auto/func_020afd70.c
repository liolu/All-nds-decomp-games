#include "m2c.h"

M2C_UNK func_0202c1dc(s32);                         /* extern */
M2C_UNK func_0202c30c();                            /* extern */
M2C_UNK func_0202c378(void *);                      /* extern */
M2C_UNK func_0202c3e0();                            /* extern */
M2C_UNK func_0202c604();                            /* extern */
M2C_UNK func_0202c654(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0202c7b4(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0202c908(s16, s16);                    /* extern */
extern M2C_UNK data_020b983c;

void func_020afd70(void *arg0) {
    s32 temp_r0;

    func_0202c1dc(arg0 + 0xC);
    func_0202c3e0();
    func_0202c654(M2C_FIELD(arg0, s32 *, 0x154), M2C_FIELD(arg0, s32 *, 0x158), 0);
    temp_r0 = ((s32) M2C_FIELD(arg0, u16 *, 0x164) >> 4) * 2;
    func_0202c908(*((u16 *) ((s8 *) &data_020b983c + (temp_r0 * 2))),
                  *((u16 *) ((s8 *) &data_020b983c + ((temp_r0 + 1) * 2))));
    func_0202c7b4(M2C_FIELD(arg0, s32 *, 0x15C), M2C_FIELD(arg0, s32 *, 0x160), 0x1000);
    func_0202c378(arg0 + 0xE8);
    func_0202c604();
    func_0202c30c();
}
