#include "m2c.h"

s32 func_020b5a98(void *);    /* extern */
void func_020b597c(void *);      /* extern */
void func_020b5a00(void *);    /* extern */
void func_020c116c(s32);                /* extern */

extern M2C_UNK data_020f4b50;
extern M2C_UNK data_020f1974;
extern M2C_UNK data_020f4a60;
typedef struct {
    u32 pad[7];
    s32 f1c;
} Cs;

extern Cs data_020f4a84;
extern void (*data_020f4e84[])(s32);

s32 func_020c52ec(s32 sig) {
    void (*handler)(s32);
    s32 idx;

    if (sig < 1 || sig > 7) {
        return -1;
    }
    if (func_020b5a98(&data_020f4b50) == 0) {
        M2C_FIELD(&data_020f4a60, s32 *, 0x1c) = M2C_FIELD(M2C_FIELD(&data_020f1974, void **, 0x4), s32 *, 0x6c);
        data_020f4a84.f1c                      = 1;
    } else {
        if (M2C_FIELD(&data_020f4a60, s32 *, 0x1c) == M2C_FIELD(M2C_FIELD(&data_020f1974, void **, 0x4), s32 *, 0x6c)) {
            data_020f4a84.f1c = data_020f4a84.f1c + 1;
        } else {
            func_020b597c(&data_020f4b50);
            M2C_FIELD(&data_020f4a60, s32 *, 0x1c) = M2C_FIELD(M2C_FIELD(&data_020f1974, void **, 0x4), s32 *, 0x6c);
            data_020f4a84.f1c                      = 1;
        }
    }
    idx     = sig - 1;
    handler = data_020f4e84[idx];
    if (handler != (void (*)(s32)) 1) {
        data_020f4e84[idx] = 0;
    }
    if (--data_020f4a84.f1c == 0) {
        func_020b5a00(&data_020f4b50);
    }
    if (handler == (void (*)(s32)) 1 || (handler == 0 && sig == 1)) {
        return 0;
    }
    if (handler == 0) {
        func_020c116c(0);
    }
    handler(sig);
    return 0;
}
