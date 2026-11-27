/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063980 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02063980.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct Sub {
    u8 pad[0x68];
} Sub;
typedef struct S {
    int f0;
    int pad04;
    u16 f8;
    u16 padA;
    u8 fC;
    u8 padD[7];
    u32 f14;
    u8 pad18[5];
    u8 f1d;
    u8 pad1e[0x1f8 - 0x1e];
    Sub elems[16];
} S;
extern int func_0206085c(void);
extern int func_0206086c(void);
extern int func_0205fd64(u8 *dst, u16 a1, u8 a2, int a3, int a4);
extern int func_0205f4e4(Sub *e);
extern int func_0205f984(u8 *dst, u16 a1, u8 a2, u32 a3);
extern int func_0205fc28(u8 *dst, u16 a1, u8 a2, u32 a3, int a4);
extern int func_0205facc(u8 *dst, u16 a1, u8 a2, u32 a3, int a4);
extern int func_0205f86c(u8 *dst, u16 a1, u8 a2, u32 *a3, u8 a4);
int func_0205e724(S *s, u8 *dst) {
    int ret = 0;
    int i;

    switch (s->f0) {
        case 2:
            ret = func_0205fd64(dst, s->f8, s->fC, func_0206085c(), func_0206086c());
            break;
        case 4:
        case 6: {
            Sub *e = s->elems;
            for (i = 0; i < 16; i++, e++) {
                int bit = 1 << i;
                if (s->f8 & (u16) bit) {
                    int v = func_0205f4e4(e);
                    if (v == -1) {
                        ret = func_0205f984(dst, (u16) bit, s->fC, s->f14);
                    } else {
                        u16 mask = s->f8;
                        if (s->f0 == 4) {
                            ret = func_0205fc28(dst, mask, s->fC, s->f14, v);
                        } else {
                            ret = func_0205facc(dst, mask, s->fC, s->f14, v);
                        }
                    }
                    if (ret != 0) {
                        return ret;
                    }
                }
            }
        } break;
        case 10:
            ret = func_0205f86c(dst, s->f8, s->fC, &s->f14, s->f1d);
            break;
    }
    return ret;
}
