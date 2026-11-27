/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e890 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0205e890.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef struct {
    u32 w[2];
} Pair;
extern void func_020012fc(void *out, Pair a, Pair b, u32 e);
u32 func_02001078(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5) {
    Pair a;
    Pair b;
    u32 local[2];
    a.w[0] = param_1;
    a.w[1] = param_2;
    b.w[0] = param_3;
    b.w[1] = param_4;
    func_020012fc(local, a, b, param_5);
    return local[0];
}
