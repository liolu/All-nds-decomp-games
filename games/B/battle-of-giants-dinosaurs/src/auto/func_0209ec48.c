#include "m2c.h"

M2C_UNK func_02040850(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0209c668(s32, void *);                 /* extern */
M2C_UNK func_0209ceb4();                            /* extern */
M2C_UNK func_0209d074(void *);                      /* extern */
M2C_UNK func_0209ebcc(void *);                      /* extern */
M2C_UNK func_0209eeac(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020bf448;
extern M2C_UNK data_020d3cc4;

void *func_0209ec48(void *arg0) {
    func_0209ceb4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bf448;
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(&data_020d3cc4, s32 *, 8);
    func_0209ebcc(arg0 + 0x2C);
    func_0209eeac(arg0 + 0x1FC, 0x18, 4, M2C_FIELD(arg0, s32 *, 0xC));
    func_0209c668(M2C_FIELD(&data_020d3cc4, s32 *, 0x3C), arg0);
    func_02040850(arg0 + 0x10, 0, 0x1C);
    func_0209d074(arg0);
    return arg0;
}
