/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_ov014_0213ccdc(M2C_UNK *);                   /* extern */
M2C_UNK func_02004330(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020043bc(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK (*data_ov014_02149710)(s32, M2C_UNK *);
extern s32 data_ov014_02149714;
extern M2C_UNK data_ov014_02149738;

void func_ov014_02136f30(M2C_UNK arg0, M2C_UNK arg1) {
    func_020043bc(&data_ov014_02149738, arg0, 0xFF);
    func_02004330(&data_ov014_02149738, arg1, 0xFF);
    if (data_ov014_02149710 != NULL) {
        data_ov014_02149710(data_ov014_02149714, &data_ov014_02149738);
    }
    func_ov014_0213ccdc(&data_ov014_02149738);
}
