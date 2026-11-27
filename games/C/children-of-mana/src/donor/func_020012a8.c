/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205ea10 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0205ea10.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef struct {
    u32 w[2];
} Pair;
extern u32 func_020012fc(u32 *out, Pair a, Pair b, u32 c);
u32 func_020012a8(u32 param_1, u32 param_2) {
    Pair s;
    Pair t;
    u32 out[2];
    s.w[0] = param_1;
    t      = s;
    func_020012fc(out, s, t, param_2);
    return out[0];
}
