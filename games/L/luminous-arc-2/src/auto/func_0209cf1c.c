#include "m2c.h"

M2C_UNK func_0209a638(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021725b4;
extern M2C_UNK data_021725f4;
extern M2C_UNK func_0209cec4;
extern M2C_UNK func_0209cef0;

void func_0209cf1c(void *arg0) {
    s32 var_r2;
    u32 temp_lr;
    u32 temp_lr_2;
    u32 temp_lr_3;
    u32 temp_r6;
    u32 temp_r6_2;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    M2C_FIELD(&data_021725b4, s32 *, 0x40) = var_r2;
    temp_r6                                = M2C_FIELD(arg0, u32 *, 0x10);
    M2C_FIELD(&data_021725b4, s32 *, 0x44) =
        (s32) (((temp_r6 << 0x18) & 0xFF000000) |
               (((temp_r6 << 8) & 0xFF0000) | ((u8) (temp_r6 >> 0x18) | ((temp_r6 >> 8) & 0xFF00))));
    temp_lr = M2C_FIELD(arg0, u32 *, 0x14);
    M2C_FIELD(&data_021725b4, s32 *, 0x48) =
        (s32) (((temp_lr << 0x18) & 0xFF000000) |
               (((temp_lr << 8) & 0xFF0000) | ((u8) (temp_lr >> 0x18) | ((temp_lr >> 8) & 0xFF00))));
    temp_lr_2 = M2C_FIELD(arg0, u32 *, 0x18);
    M2C_FIELD(&data_021725b4, s32 *, 0x4C) =
        (s32) (((temp_lr_2 << 0x18) & 0xFF000000) |
               (((temp_lr_2 << 8) & 0xFF0000) | ((u8) (temp_lr_2 >> 0x18) | ((temp_lr_2 >> 8) & 0xFF00))));
    temp_lr_3 = M2C_FIELD(arg0, u32 *, 0x1C);
    M2C_FIELD(&data_021725b4, s32 *, 0x50) =
        (s32) (((temp_lr_3 << 0x18) & 0xFF000000) |
               (((temp_lr_3 << 8) & 0xFF0000) | ((u8) (temp_lr_3 >> 0x18) | ((temp_lr_3 >> 8) & 0xFF00))));
    temp_r6_2 = M2C_FIELD(arg0, u32 *, 0x20);
    M2C_FIELD(&data_021725b4, s32 *, 0x54) =
        (s32) (((temp_r6_2 << 0x18) & 0xFF000000) |
               (((temp_r6_2 << 8) & 0xFF0000) | ((u8) (temp_r6_2 >> 0x18) | ((temp_r6_2 >> 8) & 0xFF00))));
    M2C_FIELD(&data_021725b4, M2C_UNK **, 0x58) = &func_0209cec4;
    M2C_FIELD(&data_021725b4, M2C_UNK **, 0x5C) = &func_0209cef0;
    M2C_FIELD(&data_021725b4, s32 *, 0xC)       = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&data_021725b4, s32 *, 4)         = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&data_021725b4, s32 *, 0x60)      = 0x40;
    M2C_FIELD(&data_021725b4, s32 *, 0x70)      = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(&data_021725b4, s32 *, 0x74)      = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    func_0209a638(&data_021725f4);
}
