/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205ea64 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0205ea64.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 a;
    u32 b;
} P2;
extern s32 func_0200e400(void);
extern u32 func_0200c8d4(u32 a, u32 b);
extern void func_02003fc0(u32 a);
void func_020012fc(u32 p1, P2 p23, P2 p4, u32 p6) {
    u32 *iVar1;
    u32 uVar2;
    void (*pcVar6)(u32, P2, P2, u32);

    iVar1 = (u32 *) func_0200e400();
    if ((p6 & 0xc00000) == 0) {
        uVar2 = func_0200c8d4(0, 0);
        p6    = p6 | (uVar2 & 0xc00000);
    }
    uVar2 = p6 & 0x7c000000;
    switch (uVar2) {
        case 0x40000000:
            pcVar6 = (void (*)(u32, P2, P2, u32)) iVar1[5];
            break;
        case 0x4000000:
            pcVar6 = (void (*)(u32, P2, P2, u32)) iVar1[1];
            break;
        case 0x10000000:
            pcVar6 = (void (*)(u32, P2, P2, u32)) iVar1[3];
            break;
        case 0x20000000:
            pcVar6 = (void (*)(u32, P2, P2, u32)) iVar1[4];
            break;
        case 0x8000000:
            pcVar6 = (void (*)(u32, P2, P2, u32)) iVar1[2];
            break;
        default:
            pcVar6 = 0;
            break;
    }
    if (pcVar6 == 0) {
        func_02003fc0(2);
    }
    pcVar6(p1, p23, p4, p6);
}
