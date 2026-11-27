#include "m2c.h"

s32 func_020d2734(void *);    /* extern */
void func_020d2618(void *);      /* extern */
void func_020d269c(void *);    /* extern */
void func_020e47e4(s32);                /* extern */

extern M2C_UNK data_021e55b0;
extern M2C_UNK data_021e16c0;
extern M2C_UNK data_021e54c0;
typedef struct {
    u32 pad[7];
    s32 f1c;
} Cs;

extern Cs data_021e54e4;
extern void (*data_021e58e4[])(s32);

s32 func_020e9450(s32 sig) {
    void (*handler)(s32);
    s32 idx;

    if (sig < 1 || sig > 7) {
        return -1;
    }
    if (func_020d2734(&data_021e55b0) == 0) {
        M2C_FIELD(&data_021e54c0, s32 *, 0x1c) = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 0x4), s32 *, 0x6c);
        data_021e54e4.f1c                      = 1;
    } else {
        if (M2C_FIELD(&data_021e54c0, s32 *, 0x1c) == M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 0x4), s32 *, 0x6c)) {
            data_021e54e4.f1c = data_021e54e4.f1c + 1;
        } else {
            func_020d2618(&data_021e55b0);
            M2C_FIELD(&data_021e54c0, s32 *, 0x1c) = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 0x4), s32 *, 0x6c);
            data_021e54e4.f1c                      = 1;
        }
    }
    idx     = sig - 1;
    handler = data_021e58e4[idx];
    if (handler != (void (*)(s32)) 1) {
        data_021e58e4[idx] = 0;
    }
    if (--data_021e54e4.f1c == 0) {
        func_020d269c(&data_021e55b0);
    }
    if (handler == (void (*)(s32)) 1 || (handler == 0 && sig == 1)) {
        return 0;
    }
    if (handler == 0) {
        func_020e47e4(0);
    }
    handler(sig);
    return 0;
}
