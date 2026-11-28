/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_ov014_0213864c(s32, s32, s32);               /* extern */
M2C_UNK func_ov014_02138dcc(s32, s32);                    /* extern */
M2C_UNK func_ov014_02138e08(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_ov014_02138edc(s32);                         /* extern */
M2C_UNK func_ov014_02138f2c(s32);                         /* extern */
M2C_UNK func_ov014_02138fec(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov014_021390dc(s32);                         /* extern */
M2C_UNK func_ov014_0213914c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov014_02139c54(void *, s32);                 /* extern */
extern s32 data_ov014_021477a8;

void func_ov014_02139ba8(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_ov014_0213864c(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s16 *, 0x3E) << 0xB, M2C_FIELD(arg0, s16 *, 0x3C) << 0xB);
    func_ov014_02138dcc(M2C_FIELD(arg0, s32 *, 8), data_ov014_021477a8);
    func_ov014_02138e08(M2C_FIELD(arg0, s32 *, 8), 0, 0);
    func_ov014_02138fec(M2C_FIELD(arg0, s32 *, 8), 0);
    func_ov014_02138edc(M2C_FIELD(arg0, s32 *, 8));
    func_ov014_021390dc(M2C_FIELD(arg0, s32 *, 8));
    func_ov014_0213914c(M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    func_ov014_02138f2c(M2C_FIELD(arg0, s32 *, 8));
    func_ov014_02139c54(arg0, M2C_FIELD(arg0, s32 *, 0x10));
}
