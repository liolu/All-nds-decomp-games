/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern u8 data_ov013_02245a34[];
extern u8 data_ov013_02245a40[];

s32 func_ov013_02222abc(void *p);
void func_ov013_02222988(void *dst, void *src, s32 n);

s32 func_ov013_0222177c(s32 *arg0) {
    arg0[0] = func_ov013_02222abc(data_ov013_02245a34);
    func_ov013_02222988((u8 *) arg0 + 4, data_ov013_02245a34, arg0[0]);
    arg0[9]  = 1;
    arg0[10] = func_ov013_02222abc(data_ov013_02245a40);
    if ((u32) arg0[10] > 0xD) {
        return -1;
    }
    func_ov013_02222988((u8 *) arg0 + 0x2C, data_ov013_02245a40, arg0[10]);
    return 0;
}
