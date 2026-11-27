/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0203e9e8(M2C_UNK);                         /* extern */
M2C_UNK func_020773ac(void *);                      /* extern */
M2C_UNK func_020773f0(void *);                      /* extern */
M2C_UNK func_0207ab04(s32);                         /* extern */
M2C_UNK func_0207abf4(s32);                         /* extern */
s32 func_020ca9b8(u16);                             /* extern */

void func_020e2ec0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0207abf4(M2C_FIELD(arg0, s32 *, 0x188));
            func_0207ab04(M2C_FIELD(arg0, s32 *, 0x188));
            break;
        case 1:
            func_020773f0(arg0 + 0x18C);
            func_020773ac(arg0 + 0x18C);
            func_02001cc8(arg0 + 0x1CC, 0, 0x5C);
            M2C_FIELD(arg0, s32 *, 0x1CC) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x1D0) = func_020ca9b8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), u16 *, 2));
            M2C_FIELD(arg0, s32 *, 0x1D4) = func_020ca9b8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x190), u16 *, 0));
            M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
            M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
            M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
            M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) M2C_FIELD(arg0, s32 *, 0x1AC);
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) M2C_FIELD(arg0, s32 *, 0x1B0);
            M2C_FIELD(arg0, s16 *, 0x210) = 0;
            M2C_FIELD(arg0, s32 *, 0x214) = 0;
            M2C_FIELD(arg0, s32 *, 0x218) = 0;
            M2C_FIELD(arg0, s16 *, 0x21C) = 0x7FFF;
            M2C_FIELD(arg0, s32 *, 0x220) = 0x1F;
            M2C_FIELD(arg0, s32 *, 0x224) = func_0203e9e8(0x3C);
            break;
    }
    M2C_FIELD(arg0, s8 *, 0x251) = 1;
}
