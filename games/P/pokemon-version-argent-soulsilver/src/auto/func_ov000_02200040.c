#include "m2c.h"
typedef struct {
    s32 w[129];
} Buf;
typedef s32 (*Cb)(void **, Buf *, s32);
extern s32 func_ov000_0220a8b0(void **, void *);
extern s32 func_ov000_02205f08(void **, s32, s32, s32, Cb, s32);
extern s32 data_ov000_02217f04;
extern s32 data_ov000_02217ef0;
s32 func_ov000_02200040(void **arg0, s32 arg1, s32 arg2, s32 arg3, Cb arg4, s32 arg5) {
    void *r4;
    if (arg0 == NULL || (r4 = *arg0) == NULL || arg1 == 0) {
        return 2;
    }
    if (arg4 == NULL) {
        func_ov000_0220a8b0(arg0, &data_ov000_02217ef0);
        return 2;
    }
    if (M2C_FIELD(r4, s32 *, 0x108) != 0) {
        Buf buf = {0};
        arg4(arg0, &buf, arg5);
        return 0;
    }
    if (M2C_FIELD(r4, s32 *, 0x1D8) == 4) {
        func_ov000_0220a8b0(arg0, &data_ov000_02217f04);
        return 2;
    }
    return func_ov000_02205f08(arg0, arg1, arg2, arg3, arg4, arg5);
}
