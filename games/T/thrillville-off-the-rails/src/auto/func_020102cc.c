/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0202208c(void *);                      /* extern */
M2C_UNK func_02022324(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_020102b8(M2C_UNK *);                   /* extern */
extern void *data_020ebbe8;
extern M2C_UNK data_020ebbec;
extern M2C_UNK data_020ec010;
extern M2C_UNK func_020101cc;

void func_020102cc(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02024624();
    if (data_020ebbe8 == NULL) {
        data_020ebbe8 = arg0;
        func_020102b8(arg0 + 0xC4);
        func_020102b8(&data_020ebbec);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02022324(arg0, &func_020101cc, arg0, &data_020ec010, 0x400, 0x14);
        func_0202208c(arg0);
    }
    func_02024638(temp_r4);
}
