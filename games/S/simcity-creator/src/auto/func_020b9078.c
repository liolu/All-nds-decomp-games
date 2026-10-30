#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, s32, M2C_UNK); /* extern */
extern M2C_UNK data_020d0948;
extern M2C_UNK data_020d09dc;
extern M2C_UNK data_02163908;
extern M2C_UNK data_02163910;

M2C_UNK *func_020b9078(M2C_UNK arg0) {
    func_02014050(&data_02163910, &data_020d09dc,
                  *((M2C_UNK *) ((s8 *) &data_020d0948 + (M2C_FIELD(&data_02163908, s8 *, 2) * 4))), arg0);
    return &data_02163910;
}
