/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02012178(void *, u8);                  /* extern */
extern M2C_UNK data_021008cc;
extern M2C_UNK data_02101930;

void func_02086f50(void *arg0) {
    func_0200e8c8(&data_02101930, &data_021008cc);
    func_02012178(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x300), u8 *, 0xFC));
}
