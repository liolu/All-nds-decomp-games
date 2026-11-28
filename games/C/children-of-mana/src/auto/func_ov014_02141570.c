/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_ov014_0213c234();       /* extern */
M2C_UNK func_ov014_0213c354();                            /* extern */
M2C_UNK func_ov014_02141168();                         /* extern */
M2C_UNK func_ov014_0214137c();                         /* extern */
M2C_UNK func_ov014_02141874();                         /* extern */
M2C_UNK func_ov014_02141884();                         /* extern */
M2C_UNK func_ov014_021418c8();             /* extern */
M2C_UNK func_ov014_02141e10();                         /* extern */
M2C_UNK func_ov014_02141e20();    /* extern */
M2C_UNK func_ov014_0214686c();                 /* extern */
M2C_UNK func_ov014_0214688c();                         /* extern */
extern M2C_UNK data_ov014_021472f4;
extern M2C_UNK *data_ov014_0214e668;

void func_ov014_02141570(void *arg0) {
    data_ov014_0214e668 = &data_ov014_021472f4;
    func_ov014_02141874(arg0 + 0xC);
    func_ov014_0214137c(arg0 + 8);
    func_ov014_0214688c(arg0 + 0x14);
    func_ov014_02141884(arg0 + 0x10);
    func_ov014_02141168(arg0 + 0x4E254);
    func_ov014_02141e10(arg0 + 0x4202C);
    func_ov014_021418c8(arg0, 0x1E);
    func_ov014_02141e20(arg0 + 0x4202C, 0x100, 0xC0);
    func_ov014_0213c354();
    M2C_FIELD(arg0, s32 *, 0x42028) = func_ov014_0213c234(0, 0, 0);
    func_ov014_0214686c(arg0 + 0x42024, M2C_FIELD(arg0, s32 *, 0x42028));
}
