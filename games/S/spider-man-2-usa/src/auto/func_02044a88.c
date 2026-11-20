/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02044a00(void *);                      /* extern */
M2C_UNK func_02044b04();                            /* extern */
extern M2C_UNK data_02124730;
extern M2C_UNK data_02124744;
extern M2C_UNK data_02124758;

void func_02044a88(void *arg0) {
    func_02044b04();
    M2C_FIELD(arg0, s32 *, 0xB10)      = (s32) (arg0 + 0x8C);
    M2C_FIELD(arg0, M2C_UNK **, 0xB18) = &data_02124730;
    M2C_FIELD(arg0, void **, 0xB1C)    = (void *) (arg0 + 0x980);
    M2C_FIELD(arg0, M2C_UNK **, 0xB24) = &data_02124744;
    M2C_FIELD(arg0, void **, 0xB28)    = (void *) (arg0 + 0xA74);
    M2C_FIELD(arg0, M2C_UNK **, 0xB30) = &data_02124758;
    M2C_FIELD(arg0, s16 *, 0x16B0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x16B4)     = 0;
    M2C_FIELD(arg0, s32 *, 0x16AC)     = 8;
    func_02044a00(arg0);
}
