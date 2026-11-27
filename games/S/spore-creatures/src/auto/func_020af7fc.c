/* Reconstructed from USA ARM9 at 0x020c3490 (116 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

s32 func_020af5c4(M2C_UNK *, M2C_UNK *, u32, s32);  /* extern */
extern M2C_UNK data_020f1864;
extern M2C_UNK data_020f1868;
extern M2C_UNK data_020f1860;

s32 func_020af7fc(s32 arg0) {
    s32 ret;
    u32 off  = (u32) (arg0 << 0x10) >> 0xD;
    u32 size = ((u32) (arg0 & 0x7FFF0000) >> 0x10) * 0x10;
    u32 flag = ((u32) (arg0 & 0x80000000)) >> 31;
    if (size != 0) {
        if (flag != 0) {
            ret = func_020af5c4(&data_020f1864, &data_020f1868, off, size);
        } else {
            ret = func_020af5c4(&data_020f1860, &data_020f1868, off, size);
        }
        if (ret != 0) {
            return 0;
        }
        return 1;
    }
    return 2;
}
