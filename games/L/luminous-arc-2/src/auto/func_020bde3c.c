#include "m2c.h"

M2C_UNK func_02018eb8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020a9fc8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020aa020();                            /* extern */
M2C_UNK func_020aa5b8(s32, void **);                /* extern */
s32 func_020aadbc();                                /* extern */
M2C_UNK func_020ab30c(void *);                      /* extern */
s32 func_020bab94(void *, s32);                     /* extern */
s32 func_020bdb64(void *, s32, s16);                /* extern */
void *func_020bde2c();                              /* extern */

s32 func_020bde3c(void *arg0, s32 *arg1, s32 arg2, s16 arg3) {
    void *sp0;
    s32 temp_r0_2;
    void *temp_r0;

    sp0 = NULL;
    if (func_020bdb64(arg0, arg2, arg3) != 0) {
        return 5;
    }
    temp_r0 = func_020bde2c();
    sp0     = temp_r0;
    if (temp_r0 != NULL) {
        func_02018eb8(temp_r0, 0, 0xA0);
        M2C_FIELD(sp0, s32 *, 0)    = arg2;
        M2C_FIELD(sp0, s16 *, 4)    = arg3;
        M2C_FIELD(sp0, void **, 8)  = arg0;
        M2C_FIELD(sp0, s32 *, 0x1C) = func_020aadbc();
        M2C_FIELD(sp0, s32 *, 0x88) = (s32) M2C_FIELD(sp0, s32 *, 0x1C);
        M2C_FIELD(sp0, s16 *, 0x64) = 0;
        M2C_FIELD(sp0, s16 *, 0x66) = 0;
        if ((func_020bab94(sp0 + 0x44, M2C_FIELD(arg0, s32 *, 0x3C)) != 0) &&
            (func_020bab94(sp0 + 0x50, M2C_FIELD(arg0, s32 *, 0x38)) != 0)) {
            M2C_FIELD(sp0, s32 *, 0x5C) = func_020a9fc8(0x10, 0x40, 0);
            if (M2C_FIELD(sp0, s32 *, 0x5C) != 0) {
                M2C_FIELD(sp0, s32 *, 0x60) = func_020a9fc8(0x10, 0x40, 0);
                if (M2C_FIELD(sp0, s32 *, 0x60) != 0) {
                    M2C_FIELD(sp0, s32 *, 0x98) = func_020a9fc8(4, 2, 0);
                    if (M2C_FIELD(sp0, s32 *, 0x98) != 0) {
                        M2C_FIELD(sp0, s32 *, 0x9C) = func_020a9fc8(4, 2, 0);
                        if (M2C_FIELD(sp0, s32 *, 0x9C) != 0) {
                            func_020aa5b8(M2C_FIELD(arg0, s32 *, 0xC), &sp0);
                            temp_r0_2 = func_020bdb64(arg0, arg2, arg3);
                            *arg1     = temp_r0_2;
                            if (temp_r0_2 != 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (sp0 != NULL) {
        func_020ab30c(M2C_FIELD(sp0, void **, 0x44));
        func_020ab30c(M2C_FIELD(sp0, void **, 0x50));
        if (M2C_FIELD(sp0, s32 *, 0x5C) != 0) {
            func_020aa020();
        }
        if (M2C_FIELD(sp0, s32 *, 0x60) != 0) {
            func_020aa020();
        }
        if (M2C_FIELD(sp0, s32 *, 0x98) != 0) {
            func_020aa020();
        }
        if (M2C_FIELD(sp0, s32 *, 0x9C) != 0) {
            func_020aa020();
        }
        func_020ab30c(sp0);
    }
    return 1;
}
