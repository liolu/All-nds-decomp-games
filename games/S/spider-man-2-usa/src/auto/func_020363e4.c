/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020ffeb4;
extern M2C_UNK data_0210c314;
extern M2C_UNK data_02113174;
extern M2C_UNK data_021240c0;
extern M2C_UNK data_021241a4;
extern M2C_UNK data_02124240;

void func_020363e4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_021241a4;
    M2C_FIELD(arg0, M2C_UNK **, 0x138) = &data_0210c314;
    M2C_FIELD(arg0, M2C_UNK **, 0x138) = &data_021240c0;
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_02113174;
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_02124240;
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_020ffeb4;
}
