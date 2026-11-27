#include "m2c.h"

extern M2C_UNK data_02129c7c;
extern M2C_UNK data_02129c90;

void func_020cd984(s32 arg0, void *arg1) {
    switch (arg0) {                                 /* irregular */
        case 0:
            M2C_FIELD(&data_02129c7c, s32 *, 0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
            M2C_FIELD(&data_02129c7c, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
            M2C_FIELD(&data_02129c7c, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
            M2C_FIELD(&data_02129c7c, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
            M2C_FIELD(&data_02129c7c, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
            M2C_FIELD(&data_02129c7c, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
            return;
        case 1:
            M2C_FIELD(&data_02129c90, s32 *, 0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
            M2C_FIELD(&data_02129c90, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
            M2C_FIELD(&data_02129c90, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
            M2C_FIELD(&data_02129c90, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
            M2C_FIELD(&data_02129c90, u8 *, 0x10) = (u8) M2C_FIELD(arg1, u8 *, 0x10);
            M2C_FIELD(&data_02129c90, u8 *, 0x11) = (u8) M2C_FIELD(arg1, u8 *, 0x11);
            return;
    }
}
