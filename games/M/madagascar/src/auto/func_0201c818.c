/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000dcc(void *);                      /* extern */
M2C_UNK func_02000e50(void *, s32);                 /* extern */
M2C_UNK func_02000e58(void *, s32);                 /* extern */
M2C_UNK func_02000e90(void *, s32);                 /* extern */
M2C_UNK func_020242d4(s32, s32, M2C_UNK);           /* extern */
s32 func_02024654();                                /* extern */
M2C_UNK func_02027f78(s32);                         /* extern */
M2C_UNK func_02027f88(s32, M2C_UNK);                /* extern */
M2C_UNK func_02027fd0(s32, s32, s32, M2C_UNK);      /* extern */
extern M2C_UNK data_02082548;
extern M2C_UNK data_0208254c;
extern M2C_UNK data_02082550;
extern s32 data_020be974;
extern s32 data_020be990;
extern M2C_UNK data_020be9dc;

void func_0201c818(void *arg0) {
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_02000e58(arg0 + 0x48, *((M2C_UNK *) ((s8 *) &data_0208254c + (M2C_FIELD(arg0, s32 *, 0xA8) * 0x18))));
    func_02000e50(arg0 + 0x48, *((M2C_UNK *) ((s8 *) &data_02082550 + (M2C_FIELD(arg0, s32 *, 0xA8) * 0x18))));
    func_02000e90(arg0 + 0x60, (M2C_FIELD(arg0, s32 *, 0xA8) * 0x18) + (s32) &data_02082548 + 0xC);
    temp_r5 = *((M2C_UNK *) ((s8 *) &data_020be9dc + (M2C_FIELD(arg0, s32 *, 0xA8) * 4)));
    if (temp_r5 != 0) {
        func_020242d4(func_02024654(), temp_r5, 0);
    }
    func_02000dcc(arg0 + 0x78);
    func_02027f78(M2C_FIELD(arg0, s32 *, 0x1C));
    func_02027fd0(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x18), data_020be990, 3);
    func_02027f88(M2C_FIELD(arg0, s32 *, 0x20), 1);
    func_02027fd0(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x18), data_020be974, 3);
}
