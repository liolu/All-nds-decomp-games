#include "m2c.h"

extern M2C_UNK WM_DMA_NO;

s32 func_020108c0(M2C_UNK *);

s32 func_02012bac(M2C_UNK *, u16, u16, u16, s32);

M2C_UNK func_0201735c(M2C_UNK, s32);

extern M2C_UNK data_020ee754;

extern M2C_UNK func_020157b4;

void func_02015720(void) {
    func_0201735c(0x80, func_020108c0(&func_020157b4));
    func_0201735c(0x1D, func_02012bac(&func_020157b4, M2C_FIELD(&data_020ee754, u16 *, 6), M2C_FIELD(&data_020ee754, u16 *, 2),
                                      M2C_FIELD(&data_020ee754, u16 *, 0), (s32) M2C_FIELD(&data_020ee754, u16 *, 4)));
}
