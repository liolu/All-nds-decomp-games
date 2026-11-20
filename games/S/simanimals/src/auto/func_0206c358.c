#include "m2c.h"

M2C_UNK func_02063090(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02063354(void *);                      /* extern */
s32 func_02064a3c();                                /* extern */
M2C_UNK func_02064a50(s32);                         /* extern */
M2C_UNK func_0206c3e4(M2C_UNK *);                   /* extern */
extern void *data_020911c8;
extern M2C_UNK data_020911cc;
extern M2C_UNK data_020915f0;
extern M2C_UNK func_0206c3f8;

void func_0206c358(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02064a3c();
    if (data_020911c8 == NULL) {
        data_020911c8 = arg0;
        func_0206c3e4(arg0 + 0xC4);
        func_0206c3e4(&data_020911cc);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02063090(arg0, &func_0206c3f8, arg0, &data_020915f0, 0x400, 0x14);
        func_02063354(arg0);
    }
    func_02064a50(temp_r4);
}
