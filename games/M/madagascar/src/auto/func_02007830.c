/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02007a74(void *);                      /* extern */
M2C_UNK func_02007ab0(void *);                      /* extern */
s32 func_02026808();                                /* extern */
M2C_UNK func_02026e30(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0202cd90(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0202cdb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0207f5f4;

void func_02007830(void *arg0) {
    func_0202cdb8(2, 0, 1);
    func_02007a74(arg0);
    func_02007ab0(arg0);
    func_02026e30(1, &data_0207f5f4);
    M2C_FIELD(arg0, s32 *, 0x14) = func_02026808();
    M2C_FIELD(arg0, s32 *, 4)    = 0x13;
    func_0202cd90(2, 1, 1);
}
