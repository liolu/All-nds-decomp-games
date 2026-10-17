/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02018950(M2C_UNK *);                       /* extern */
M2C_UNK func_020612e0();                            /* extern */
M2C_UNK func_0206132c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020613a0();                            /* extern */
M2C_UNK func_020614a8();                            /* extern */
M2C_UNK func_02061500(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02061574();                            /* extern */
M2C_UNK func_0206302c(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02064668(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_020d1ce4;
extern M2C_UNK data_020d1ec8;
extern M2C_UNK data_020d2060;
extern M2C_UNK data_020d2ec0;
extern M2C_UNK data_020d4ec0;

void func_0202e018(void) {
    func_02064668(data_020d1ce4, 0x05000000, 0x800);
    if (func_02018950(&data_020d1ec8) == 0) {
        func_0206302c(&data_020d2ec0, 0x2000);
        func_02061574();
        func_02061500(&data_020d2ec0, 0, 0x2000);
        func_020614a8();
    }
    if (func_02018950(&data_020d2060) != 0) {
        return;
    }
    func_0206302c(&data_020d4ec0, 0x2000);
    func_020613a0();
    func_0206132c(&data_020d4ec0, 0, 0x2000);
    func_020612e0();
}
