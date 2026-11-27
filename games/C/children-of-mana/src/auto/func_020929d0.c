/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a880(s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0202a8b0(s32, M2C_UNK, s32, s32, s32); /* extern */
s32 func_0202a910(s32, M2C_UNK, u16, s16, s32);     /* extern */
M2C_UNK func_0202a98c(s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0202a9bc(s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_02092ae0(void *);                      /* extern */
extern M2C_UNK data_02102b78;
extern M2C_UNK data_02102b8c;

void func_020929d0(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x12);
    if ((s32) temp_r0 > 0) {
        M2C_FIELD(arg0, s16 *, 0x12) = (s16) (temp_r0 - 1);
        return;
    }
    temp_r0_2 =
        func_0202a910(M2C_FIELD(arg0, s32 *, 0x18), 2, *((u16 *) ((s8 *) &data_02102b78 + (M2C_FIELD(arg0, s32 *, 4) * 2))),
                      M2C_FIELD(arg0, s16 *, 0x10), 0);
    if (temp_r0_2 != 0) {
        func_0202a880(M2C_FIELD(arg0, s32 *, 0x18), 2, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), temp_r0_2);
        M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + 1);
        return;
    }
    func_0202a98c(M2C_FIELD(arg0, s32 *, 0x18), 0, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), 1);
    func_0202a8b0(M2C_FIELD(arg0, s32 *, 0x18), 2, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC),
                  (s32) * ((u16 *) ((s8 *) &data_02102b8c + (M2C_FIELD(arg0, s32 *, 4) * 2))));
    func_0202a9bc(M2C_FIELD(arg0, s32 *, 0x18), 2, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC),
                  (s32) * ((u16 *) ((s8 *) &data_02102b8c + (M2C_FIELD(arg0, s32 *, 4) * 2))));
    func_02092ae0(arg0);
}
