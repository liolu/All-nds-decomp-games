/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, u32, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_020eb2f0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_020eb374(void *);                      /* extern */
s32 func_020eb494(void *);                          /* extern */
M2C_UNK func_020eb868(void *);                      /* extern */
M2C_UNK func_020eba84(void *);                      /* extern */
M2C_UNK func_020ebc6c(void *);                      /* extern */
M2C_UNK func_020ebd54(void *);                      /* extern */
M2C_UNK func_020ebee4(void *);                      /* extern */
M2C_UNK func_020ebf60(void *);                      /* extern */
M2C_UNK func_020ec0dc(void *);                      /* extern */
M2C_UNK func_020ec200(void *);                      /* extern */
M2C_UNK func_020ec314(void *);                      /* extern */
M2C_UNK func_020ec424(void *);                      /* extern */
M2C_UNK func_020ec5f8(void *);                      /* extern */
M2C_UNK func_020ec758(void *);                      /* extern */
M2C_UNK func_020ecac8(void *);                      /* extern */
extern M2C_UNK data_0210ef64;

void func_020ed080(void *arg0) {
    u32 temp_r0;

    func_0200e8c8(&data_0210ef64, M2C_FIELD(arg0, u32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x24),
                  M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x40),
                  M2C_FIELD(arg0, s32 *, 0x3C), (s32) M2C_FIELD(arg0, u8 *, 0x44));
    if (M2C_FIELD(arg0, u8 *, 0x7D) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x80) != 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0xB;
            goto block_10;
        }
        if (func_020eb494(arg0) == 0) {
            return;
        }
        func_020eb374(arg0);
        if (M2C_FIELD(arg0, u8 *, 0x7C) != 0) {
            if (func_020eb2f0(arg0, 0xC) != 0) {
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x7C) = 0U;
            goto block_10;
        }
        goto block_10;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
block_10:
    func_020eb868(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    temp_r0                      = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_020ecac8(arg0);
            break;
        case 1:
            func_020ec758(arg0);
            break;
        case 2:
            func_020ec5f8(arg0);
            break;
        case 3:
            func_020ec314(arg0);
            break;
        case 4:
            func_020ec200(arg0);
            break;
        case 5:
            func_020ec0dc(arg0);
            break;
        case 6:
            func_020ec424(arg0);
            break;
        case 7:
            func_020ebf60(arg0);
            break;
        case 8:
            func_020ebee4(arg0);
            break;
        case 9:
            func_020ebd54(arg0);
            break;
        case 12:
            func_020ebc6c(arg0);
            break;
        case 11:
            func_020eba84(arg0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) + 1);
}
