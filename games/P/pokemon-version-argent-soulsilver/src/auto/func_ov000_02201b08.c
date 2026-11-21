#include "m2c.h"
void func_ov000_0220213c(void **, void *, s32);
void func_ov000_0220210c(void **, void *, void *);
void func_ov000_0220a368(void *, s32, s32);
extern u8 data_ov000_0221825c;
extern u8 data_ov000_02218280;
extern u8 data_ov000_02218288;
extern u8 data_ov000_02218318;
extern u8 data_ov000_022182dc;
s32 func_ov000_02201b08(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[0xDAD];
    u8 *t = *arg0;
    func_ov000_0220a368(buf, arg3, 0xDAD);
    func_ov000_0220210c(arg0, t + 0x1F4, &data_ov000_02218288);
    func_ov000_0220213c(arg0, t + 0x1F4, arg2);
    func_ov000_0220210c(arg0, t + 0x1F4, &data_ov000_0221825c);
    func_ov000_0220213c(arg0, t + 0x1F4, *(s32 *) (t + 0x198));
    func_ov000_0220210c(arg0, t + 0x1F4, &data_ov000_02218318);
    func_ov000_0220213c(arg0, t + 0x1F4, arg1);
    func_ov000_0220210c(arg0, t + 0x1F4, &data_ov000_022182dc);
    func_ov000_0220210c(arg0, t + 0x1F4, buf);
    func_ov000_0220210c(arg0, t + 0x1F4, &data_ov000_02218280);
    return 0;
}
