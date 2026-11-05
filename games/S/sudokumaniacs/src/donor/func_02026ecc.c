/* compiler: 2.0/sp1p5  */
/* func_0203b6e4 from projets/battle-of-giants-dinosaurs/src/auto/func_0203b6e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 a, b, c, d, e, f;
} S;
extern u8 *func_02025b84(u8 *, s32 *);
extern u8 *func_02025c10(u8 *, s32 *);
extern void func_02025d00(s32, S *);
extern void func_020261ac(void *, S *, void *);
extern s32 func_02026a5c(void *, S *);
extern u8 *func_02026c94(void *, S *, s32 *);
extern void func_02026e70(void *, s32, s32);
extern void func_020271f4(void);
extern void func_02027418(void *, S *);
extern void func_02027508(void *, S *, s32);
void func_02026ecc(u8 *arg0) {
    s32 spC;
    s32 sp8;
    volatile s32 sp4;
    s32 sp0;
    S s;
    s32 temp_r0;
    u8 *temp_r4;

    func_02025d00(*(s32 *) (arg0 + 0x10), &s);
    if (s.b == 0) {
        func_020271f4();
    }
    func_02027418(arg0, &s);
    if (*(s32 *) arg0 != 0) {
        *(s32 *) (arg0 + 0xC) = 0;
    } else {
        temp_r0               = func_02026a5c(arg0, &s);
        *(s32 *) (arg0 + 0xC) = temp_r0;
        if (temp_r0 == 0) {
            func_020271f4();
        }
    }
    temp_r4 = func_02026c94(arg0, &s, &sp0);
    sp4     = temp_r4[1] | (temp_r4[2] << 8) | (temp_r4[3] << 0x10) | (temp_r4[4] << 0x18);
    func_02025b84(func_02025c10(temp_r4 + 5, &sp8), &spC);
    func_020261ac(arg0, &s, temp_r4);
    func_02026e70(arg0, spC, sp0);
    func_02027508(arg0, &s, s.a + sp8);
}
