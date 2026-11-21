#include "m2c.h"

typedef struct {
    void *v;
} W;
typedef struct {
    u8 d[0x800];
    s32 len;
} SB;

extern s32 data_ov000_0221b898;
extern W data_ov000_0221b89c[];
extern u8 data_ov000_02219f44[], data_ov000_02219f50[], data_ov000_02219f5c[], data_ov000_02219f64[];
extern u8 data_ov000_02219f68[], data_ov000_02219f6c[], data_ov000_02219f7c[], data_ov000_02219f88[], data_ov000_02219f94[];

void func_ov000_022111f8(u8 *, s32, u8 *);
void func_020e7f30(u8 *, u8 *, s32);
void func_ov000_02210e1c(u8 *, u8 *);
u8 *func_020a357c(W);
void func_ov000_02210de8(u8 *, s32);
void func_ov000_022115d0(u8 *, u8 *, s32, s32, s32, s32, s32, s32);
void func_ov000_021ff9a4(s32, u8 *, s32, s32, u8 *, s32);
s32 func_ov000_021ff388(void);

void func_ov000_02211e1c(u8 *o, s32 mode) {
    u8 tmp[0x14];
    SB sb;
    s32 i;

    sb.len = 0;
    func_ov000_022111f8(sb.d, 3, o + 0x84);
    for (i = 0; i < data_ov000_0221b898; i++) {
        func_020e7f30(tmp, data_ov000_02219f44, i);
        func_ov000_02210e1c(sb.d, tmp);
        func_ov000_02210e1c(sb.d, func_020a357c(data_ov000_0221b89c[i]));
    }
    func_ov000_02210e1c(sb.d, data_ov000_02219f50);
    func_ov000_02210de8(sb.d, *(s32 *) (o + 0xc0));
    func_ov000_02210e1c(sb.d, data_ov000_02219f5c);
    func_ov000_02210e1c(sb.d, *(s32 *) (o + 0xc8) != 0 ? data_ov000_02219f64 : data_ov000_02219f68);
    if (mode != 0) {
        func_ov000_02210e1c(sb.d, data_ov000_02219f6c);
        func_ov000_02210de8(sb.d, mode);
    }
    func_ov000_02210e1c(sb.d, data_ov000_02219f7c);
    func_ov000_02210e1c(sb.d, o + 4);
    if (*(s32 *) (o + 0xa8) != 0) {
        func_ov000_02210e1c(sb.d, data_ov000_02219f88);
        func_ov000_02210de8(sb.d, *(s32 *) (o + 0x104));
        func_ov000_02210e1c(sb.d, data_ov000_02219f94);
        func_ov000_02210de8(sb.d, *(u16 *) (o + 0x108));
    }
    if (mode != 2) {
        func_ov000_022115d0(o, sb.d, 0xff, 0, 0xff, 0, 0xff, 0);
    } else {
        if (0x800 - sb.len >= 1) {
            sb.d[sb.len++] = 0;
        }
    }
    func_ov000_021ff9a4(*(s32 *) o, sb.d, sb.len, 0, o + 0xcc, 8);
    *(s32 *) (o + 0xac) = func_ov000_021ff388();
    *(s32 *) (o + 0xb0) = *(s32 *) (o + 0xac);
    if (mode != 0) {
        *(s32 *) (o + 0xb4) = 0;
    }
}
