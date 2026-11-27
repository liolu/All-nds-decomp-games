/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017dbc(void *);                      /* extern */
M2C_UNK func_02017e7c();                            /* extern */
M2C_UNK func_020187e4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02058624(void *);                      /* extern */
extern s32 data_0217ff64;

void func_0200ef50(void *arg0) {
    func_02017e7c();
    func_02017dbc(arg0);
    func_02058624(arg0);
    M2C_FIELD(arg0, s32 *, 0x12C40) = (s32) data_0217ff64;
    func_020187e4(arg0, 0);
}
