#include "m2c.h"

M2C_UNK func_02022858(M2C_UNK **);                  /* extern */
M2C_UNK func_ov001_020af850();                            /* extern */
extern M2C_UNK data_ov001_020b2788;

M2C_UNK **func_ov001_020af808(M2C_UNK **arg0) {
    *arg0 = &data_ov001_020b2788;
    func_ov001_020af850();
    func_02022858(arg0);
    return arg0;
}
