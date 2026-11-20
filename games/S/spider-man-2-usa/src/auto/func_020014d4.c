/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016218(M2C_UNK *);                   /* extern */
M2C_UNK func_02038b48(M2C_UNK *);                   /* extern */
M2C_UNK func_02038c24();                            /* extern */
M2C_UNK func_02059f64(s32);                         /* extern */
extern u8 data_020ffe80;
extern M2C_UNK data_020ffe8c;
extern M2C_UNK data_020ffeb4;
extern s32 data_02157ce0;
extern M2C_UNK func_020011fc;
extern M2C_UNK func_0200125c;

void *func_020014d4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffe8c;
    if (data_020ffe80 != 0) {
        func_02038b48(&func_0200125c);
        func_02016218(&func_020011fc);
        func_02038c24();
    }
    data_02157ce0 = 0;
    func_02059f64(M2C_FIELD(arg0, s32 *, 0x198));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    return arg0;
}
