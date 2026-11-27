/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e8f4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0205e8f4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
typedef struct {
    u32 a;
    u32 b;
} Pair;
typedef struct {
    Pair x;
    Pair y;
    u64 r;
} Frame;
extern void func_020012fc(u64 *p, Pair a, Pair c, u32 e);
u64 func_020010dc(u32 p1, u32 p2, u32 p3, u32 p4, u32 param_5) {
    Frame F;
    F.x.a = p1;
    F.x.b = p2;
    F.y.a = p3;
    F.y.b = p4;
    func_020012fc(&F.r, F.x, F.y, param_5);
    return F.r;
}
