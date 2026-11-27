/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200438c();          /* extern */
M2C_UNK func_02004430();          /* extern */
M2C_UNK func_02004508();                     /* extern */
extern M2C_UNK data_02111204;

M2C_UNK *func_0200f160(M2C_UNK arg0, M2C_UNK arg1) {
    func_02004508();
    func_02004508(arg1);
    func_02004430(&data_02111204, arg0);
    func_0200438c(&data_02111204, arg1);
    return &data_02111204;
}
