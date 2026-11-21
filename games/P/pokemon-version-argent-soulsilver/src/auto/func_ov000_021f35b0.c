#include "m2c.h"
typedef struct {
    u8 pad[0xE];
    u8 b;
    u8 pad2[0x2E1];
    u32 bits;
} G;
G *func_ov000_021f957c(void);
void func_ov000_021f35b0(void) {
    s32 n = -1;
    s32 i = 0;
    do {
        if ((1 << i) & func_ov000_021f957c()->bits) {
            n++;
        }
        i++;
    } while (i < 0x20);
    if (n == -1) {
        func_ov000_021f957c()->b = 0;
        return;
    }
    func_ov000_021f957c()->b = n;
}