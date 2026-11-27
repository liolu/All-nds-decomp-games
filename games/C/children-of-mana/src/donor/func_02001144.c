/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e95c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0205e95c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef struct {
    u32 a;
    u32 b;
} S8;
extern void func_020012fc(u32 *out, S8 s1, S8 s2, u32 c);
u32 func_02001144(u32 p0, u32 p1, u32 p2) {
    S8 s1;
    S8 s2;
    u32 out[2];
    s1.a = p0;
    s2.a = p1;
    func_020012fc(out, s1, s2, p2);
    return out[0];
}
