/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    u32 pad0;
    u32 *p4;
    u8 arr[0x21];
    u8 n;
    u8 m;
} G;

extern u8 func_ov013_0222840c(void);
extern void func_ov013_0223abd8(s32);
extern void func_ov013_02228420(s8);
extern void func_ov013_02228434(s8);
extern void func_ov013_0222b908(void *);
extern s32 func_ov013_0223193c(void);
extern void func_ov013_022316d4(void);
extern void func_ov013_022317c8(void);
extern G *data_ov013_0224f560;
extern u8 func_ov013_022314ac;

void func_ov013_022312e8(void) {
    s32 c;

    c = func_ov013_0222840c();
    switch (c) {
        case 0:
            break;
        case 0x80:
            if (data_ov013_0224f560->n != 0) {
                func_ov013_0223abd8(3);
                data_ov013_0224f560->n--;
                data_ov013_0224f560->arr[data_ov013_0224f560->n] = 0;
                if (data_ov013_0224f560->n == 0) {
                    func_ov013_02228420(0);
                }
                func_ov013_02228434(1);
            }
            break;
        case 0x82:
            func_ov013_0223abd8(7);
            data_ov013_0224f560->m = 0;
            func_ov013_0222b908(&func_ov013_022314ac);
            return;
        case 0x83:
            if (func_ov013_0223193c() != 0) {
                func_ov013_0223abd8(6);
                data_ov013_0224f560->m = 1;
            } else {
                data_ov013_0224f560->m = 2;
                func_ov013_0223abd8(9);
            }
            *data_ov013_0224f560->p4 = (*data_ov013_0224f560->p4 & 0xC1FFFCFF) | 0x200;
            func_ov013_0222b908(&func_ov013_022314ac);
            return;
        case 0xE01D:
        default:
            if (data_ov013_0224f560->n != 0x20) {
                func_ov013_0223abd8(1);
                data_ov013_0224f560->arr[data_ov013_0224f560->n] = c;
                data_ov013_0224f560->n++;
                func_ov013_02228420(1);
                if (data_ov013_0224f560->n == 0x20) {
                    func_ov013_02228434(0);
                }
            }
            break;
    }
    func_ov013_022316d4();
    func_ov013_022317c8();
}
