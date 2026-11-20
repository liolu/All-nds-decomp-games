#include "m2c.h"
u8 *func_020a420c(u32 *);
void func_020a6558(u8 *, s32);
void func_020a4f80(u8 *, s32);
void func_020a42cc(void);
void func_020a671c(void) {
    u32 len;
    u8 *p;
    while (1) {
        p = func_020a420c(&len);
        if (len > 0x22) {
            s32 h = *(u16 *) (p + 0xc);
            u16 t = (h >> 8) | (h << 8);
            switch (t) {
                case 0x800:
                    func_020a6558(p + 0xe, len - 0xe);
                    break;
                case 0x806:
                    func_020a4f80(p + 0xe, len - 0xe);
                    break;
            }
        }
        func_020a42cc();
    }
}
