/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e90(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02002720(M2C_UNK *);                   /* extern */
M2C_UNK func_02024034();                            /* extern */
M2C_UNK func_02024654();                            /* extern */
M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02047074(void *);                      /* extern */
extern M2C_UNK data_0207f714;
extern M2C_UNK data_0207f770;
extern M2C_UNK data_020bd4fc;

void func_02009b04(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1E8) = 2;
    func_020246e8(M2C_FIELD(arg0, s32 *, 0x1C4), *((M2C_UNK *) ((s8 *) &data_020bd4fc + (M2C_FIELD(arg0, s32 *, 0x1E8) * 4))),
                  0);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    func_02047074(arg0);
    func_02000e90(M2C_FIELD(arg0, s32 *, 0x1BC) + 4, &data_0207f770);
    func_02002720(&data_0207f714);
    func_02024654();
    func_02024034();
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
}
