/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f930(M2C_UNK **);                  /* extern */
M2C_UNK func_02020200(M2C_UNK *);                   /* extern */
M2C_UNK func_02045760(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204a560(M2C_UNK);                     /* extern */
extern M2C_UNK data_02126314;
extern M2C_UNK data_0215c108;
extern s32 data_0216064c;

M2C_UNK **func_0204b7b0(M2C_UNK **arg0) {
    *arg0 = &data_02126314;
    func_02045760(1, 0, 1);
    func_0204a560(0);
    func_02020200(&data_0215c108);
    data_0216064c = 0;
    func_0201f930(arg0);
    return arg0;
}
