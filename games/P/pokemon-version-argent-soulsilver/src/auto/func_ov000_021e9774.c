#include "m2c.h"

extern void func_ov000_021ea2d8(void *, void *, s32);
extern void func_ov000_021e9bbc(void *, void *);
extern void func_020d4994(void *, u8, u32);
extern u8 data_ov000_02216718;
extern u8 data_ov000_02216730;

void func_ov000_021e9774(u8 *arg0) {
    void (*fn)(void *, s32, s32) = *(void (**)(void *, s32, s32))(arg0 + 0x1014);
    if (arg0 == 0) {
        return;
    }
    func_ov000_021ea2d8(arg0, arg0 + 0x1a38, 0x20);
    func_ov000_021e9bbc(arg0, arg0 + 0x1a08);
    func_ov000_021e9bbc(arg0, arg0 + 0x19f8);
    if (*(s32 *) (arg0 + 0x19cc) != 0) {
        fn(&data_ov000_02216718, *(s32 *) (arg0 + 0x19cc), 0);
        *(s32 *) (arg0 + 0x19cc) = 0;
    }
    if (*(s32 *) (arg0 + 0x19d0) != 0) {
        fn(&data_ov000_02216730, *(s32 *) (arg0 + 0x19d0), 0);
        *(s32 *) (arg0 + 0x19d0) = 0;
    }
    func_020d4994(arg0, 0, 0x1c14);
}
