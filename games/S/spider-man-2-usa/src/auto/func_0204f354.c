/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204f234();                            /* extern */
extern s32 data_02160694;
extern s32 data_02160698;
extern s32 data_0216069c;
extern s32 data_021606a0;
extern s32 data_021606a4;
extern s32 data_021606a8;
extern s32 data_021606ac;

void func_0204f354(s32 arg0, s32 arg1, void *arg2) {
    data_0216069c = arg0;
    data_021606a0 = arg1;
    data_021606ac = M2C_FIELD(arg2, s32 *, 0);
    data_02160694 = M2C_FIELD(arg2, s32 *, 4);
    data_02160698 = M2C_FIELD(arg2, s32 *, 8);
    data_021606a8 = M2C_FIELD(arg2, s32 *, 0xC);
    data_021606a4 = M2C_FIELD(arg2, s32 *, 0xC) + 0x200;
    func_0204f234();
    M2C_FIELD(arg2, s32 *, 0) = (s32) data_021606ac;
    M2C_FIELD(arg2, s32 *, 4) = (s32) data_02160694;
    M2C_FIELD(arg2, s32 *, 8) = (s32) data_02160698;
}
