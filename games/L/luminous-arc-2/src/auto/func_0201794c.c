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
u8 *func_02017a68(void *a, s32 b);
u8 *func_0201794c(u8 *src, u8 *dst, s32 idx) {
    u8 *r;
    u32 t = *src;
    *dst  = t;
    switch (t) {
        case 7:
            if (func_02017af4(idx) != 0) {
                return data_021508c4.f4 + (idx - 1) * 32;
            }
            dst[2] = src[1];
            if (dst[2] > data_021508c4.fc) {
                return 0;
            }
            func_0200766c(src + 2, dst + 3, data_021508c4.f8);
            r = func_02017a68(dst, idx);
            break;
        case 8:
            r                  = src + 3;
            *(u16 *) (dst + 2) = src[1];
            *(u16 *) (dst + 2) = *(u16 *) (dst + 2) | ((src[2] << 8) & 0xff00);
            break;
        case 9:
            r                  = src + 3;
            *(u16 *) (dst + 2) = src[1];
            *(u16 *) (dst + 2) = *(u16 *) (dst + 2) | ((src[2] << 8) & 0xff00);
            func_0200766c(r, dst + 4, data_021508c4.f8);
            r += data_021508c4.f8;
            break;
        default:
            return 0;
    }
    return r;
}
