#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02061c38(s32, M2C_UNK *);                  /* extern */
s32 func_02061cf4(s32, void *, M2C_UNK *);          /* extern */
s32 func_020622e4(s32, s32);                        /* extern */
extern M2C_UNK data_020cc578;
extern M2C_UNK data_020cc580;

void func_02052944(void *arg0, M2C_UNK arg1) {
    u8 sp0[256];

    func_02014050(sp0, &data_020cc578, arg1);
    M2C_FIELD(arg0, s32 *, 0x37EC0) = func_02061c38(M2C_FIELD(arg0, s32 *, 0xB3C), sp0);
    M2C_FIELD(arg0, s32 *, 0x37EBC) = func_020622e4(M2C_FIELD(arg0, s32 *, 0xB3C), M2C_FIELD(arg0, s32 *, 0x37EC0));
    func_02014050(sp0, &data_020cc580, arg1);
    M2C_FIELD(arg0, s32 *, 0x37EC8) = func_02061cf4(M2C_FIELD(arg0, s32 *, 0xB3C), arg0 + 0x37EC4, sp0);
}
