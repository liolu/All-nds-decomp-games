/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02038b48(M2C_UNK *);                   /* extern */
M2C_UNK func_020532ec(void *);                      /* extern */
M2C_UNK func_02059f64(s32);                         /* extern */
extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_021271dc;
extern s32 data_02160678;
extern M2C_UNK func_0204e7ac;

void *func_0204e884(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021271dc;
    data_02160678                  = 0;
    func_02059f64(M2C_FIELD(arg0, s32 *, 0x18));
    func_020532ec(arg0 + 0x1C);
    func_02038b48(&func_0204e7ac);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffeb4;
    return arg0;
}
