/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02021390(void *, void *, M2C_UNK);     /* extern */
void *func_0201ad70();                              /* extern */
M2C_UNK func_0201f670(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202025c(void *);                      /* extern */
M2C_UNK func_02020344(M2C_UNK *);                   /* extern */
M2C_UNK func_0202036c(void *);                      /* extern */
extern void *data_020ec2c8;
extern M2C_UNK func_0201ed6c;

s32 func_0201f074(void) {
    void *temp_r0;

    temp_r0 = func_0201ad70();
    if (temp_r0 == NULL) {
        return 0;
    }
    M2C_FIELD(data_020ec2c8, s32 *, 0x5F08) = (s32) M2C_FIELD(temp_r0, s32 *, 0x4B8);
    M2C_FIELD(data_020ec2c8, s16 *, 0x5F0C) = (s16) M2C_FIELD(temp_r0, u8 *, 0x4B5);
    func_0202036c(data_020ec2c8 + 0x5A0);
    func_02020344(&func_0201ed6c);
    func_0201f670(1, 0);
    func_02021390(temp_r0 + 0x4C0, data_020ec2c8 + 0x4C0, 0xC0);
    func_0202025c(data_020ec2c8 + 0x4C0);
    return 1;
}
