#include "m2c.h"
typedef struct {
    u32 f0;
    u8 *f4;
    s32 f8;
    s32 fc;
} ReqPiece;
extern ReqPiece data_021508c4;
s32 func_02017af4(s32 idx);
void func_0200766c(void *src, void *dst, u32 n);
u8 *func_02017a68(u8 *src, s32 idx) {
    u8 *base;
    u32 *bits;
    s32 i;
    s32 n;
    base = data_021508c4.f4;
    if (base == 0) {
        return 0;
    }
    n = src[2];
    if (n > data_021508c4.fc) {
        return 0;
    }
    i = idx - 1;
    func_0200766c(src + 3, base + i * 32 + n * data_021508c4.f8, data_021508c4.f8);
    bits = (u32 *) (data_021508c4.f4 + 0x1e0);
    bits[i] |= 1 << n;
    if (func_02017af4(idx) != 0) {
        return data_021508c4.f4 + i * 32;
    }
    return 0;
}
