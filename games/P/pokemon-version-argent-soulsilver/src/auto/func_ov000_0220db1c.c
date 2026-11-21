/* MATCH 1.2/sp3 */
/* near start: 9 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    u16 d;
} Rec;

extern s32 func_ov000_021fe704(s32);
extern u8 *func_ov000_021fe70c(s32, s32);
extern void func_ov000_021fe878(s32, void *, void *);
extern s16 func_ov000_0220d36c(s32, s32);
extern s32 func_ov000_0220bf90(void *);
extern void func_ov000_0220c05c(void *, s32, s32);
extern s32 func_ov000_0220ed18(void *, u16, u16);
extern u8 func_ov000_0220db08[];

s32 func_ov000_0220db1c(u8 *obj, s32 arg1, s32 id, s32 arg3, s32 arg4, s32 *out) {
    Rec rec;
    s32 n;
    s32 i;
    u16 cur;
    u8 *p;

    n = func_ov000_021fe704(*(s32 *) (obj + 0x5C));
    i = 0;
    if (n > 0) {
    loop1:
        cur = *(u16 *) (func_ov000_021fe70c(*(s32 *) (obj + 0x5C), i) + 0xC);
        if (cur == id) {
            *out = 0;
            return 1;
        }
        if (func_ov000_0220d36c(cur, id) > 0 || (i += 1, i >= n)) {
            goto block5;
        }
        goto loop1;
    }
block5:
    if (func_ov000_0220bf90(obj + 0x44) < arg4) {
        *out = 1;
        return 1;
    }
    rec.a = *(s32 *) (obj + 0x4C);
    rec.b = arg4;
    rec.c = arg1;
    rec.d = id;
    func_ov000_021fe878(*(s32 *) (obj + 0x5C), &rec, func_ov000_0220db08);
    if (n + 1 != func_ov000_021fe704(*(s32 *) (obj + 0x5C))) {
        *out = 1;
        return 1;
    }
    func_ov000_0220c05c(obj + 0x44, arg3, arg4);
    if (n == 0) {
        if (func_ov000_0220ed18(obj, *(u16 *) (obj + 0x66), id - 1) == 0) {
            return 0;
        }
    } else {
        cur = *(u16 *) (func_ov000_021fe70c(*(s32 *) (obj + 0x5C), n) + 0xC);
        if (cur == id) {
            p = func_ov000_021fe70c(*(s32 *) (obj + 0x5C), n - 1);
            if ((u16) func_ov000_0220d36c(id, *(u16 *) (p + 0xC)) > 1 &&
                func_ov000_0220ed18(obj, *(u16 *) (p + 0xC) + 1, id - 1) == 0) {
                return 0;
            }
        }
    }
    *out = 0;
    return 1;
}
