#include "m2c.h"

s32 func_020d2734(void *);
void func_020d2618(void *);
void func_020d269c(void *);
void func_020e539c(s32);
void func_020f4f78(void);
extern u8 data_021e16c0[];
extern u8 data_021e53b0[];
extern void (*data_021e53c0[])(void);
extern s32 data_021e54c0;
extern s32 data_021e54e4;
extern u8 data_021e5508[];

void func_020e4830(void) {
    s32 t;
    if (func_020d2734(data_021e5508) == 0) {
        data_021e54c0 = *(s32 *) (*(u8 **) (data_021e16c0 + 4) + 0x6C);
        data_021e54e4 = 1;
    } else if (data_021e54c0 == *(s32 *) (*(u8 **) (data_021e16c0 + 4) + 0x6C)) {
        data_021e54e4 += 1;
    } else {
        func_020d2618(data_021e5508);
        data_021e54c0 = *(s32 *) (*(u8 **) (data_021e16c0 + 4) + 0x6C);
        data_021e54e4 = 1;
    }
    if (*(volatile s32 *) (data_021e53b0 + 8) > 0) {
        do {
            t                                     = *(volatile s32 *) (data_021e53b0 + 8) - 1;
            *(volatile s32 *) (data_021e53b0 + 8) = t;
            data_021e53c0[t]();
        } while (*(volatile s32 *) (data_021e53b0 + 8) > 0);
    }
    t             = data_021e54e4 - 1;
    data_021e54e4 = t;
    if (t == 0) {
        func_020d269c(data_021e5508);
    }
    if (*(void (**)(void)) data_021e53b0 != 0) {
        (*(void (**)(void)) data_021e53b0)();
        *(void (**)(void)) data_021e53b0 = 0;
    }
    func_020e539c(0);
    func_020f4f78();
}
