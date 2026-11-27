/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *);                   /* extern */
M2C_UNK func_02012178(void *, s32);                 /* extern */
s32 func_020ae36c(s32);                             /* extern */
extern M2C_UNK data_02101b0c;

void func_020877f0(void *arg0) {
    func_0200e8c8(&data_02101b0c);
    func_02012178(arg0, func_020ae36c(M2C_FIELD(arg0, s32 *, 0x300)));
}
