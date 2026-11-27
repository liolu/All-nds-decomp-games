/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e9b4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0205e9b4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct {
    u32 w[2];
} Pair;
extern void func_020012fc(u64 *r, Pair a, Pair b, u32 e);
u64 func_0200119c(u32 param_1, u32 param_2, u32 param_3) {
    Pair p;
    u64 local;
    p.w[0] = param_1;
    p.w[1] = param_2;
    func_020012fc(&local, p, p, param_3);
    return local;
}
