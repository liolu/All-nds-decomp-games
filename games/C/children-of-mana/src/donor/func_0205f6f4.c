/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206ea30 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206ea30.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_020ff0b0;
extern u32 data_020ff0b4;
extern u32 data_020ff0ac;
extern u32 *func_0206077c(void);
extern u32 func_0206085c(void);
extern u32 _s32_div_f(u32 a, u32 b);
s32 func_0205f6f4(u32 param_1, s32 param_2) {
    s32 iVar6;
    u32 *puVar3;
    s32 iVar4;
    u32 uVar5;
    s32 r;

    puVar3 = func_0206077c();
    if (param_1 < 1000) {
        return param_2;
    }
    if (puVar3 == 0) {
        goto notfound;
    }
loop:
    if (puVar3[0] != param_1) {
        goto next;
    }
    if (param_1 != data_020ff0b0) {
        goto fin;
    }
    iVar6 = 0;
    goto check;
body:
    param_2 = param_2 + 1;
    iVar4   = func_0206085c();
    uVar5   = func_0206085c();
    r       = _s32_div_f((puVar3[1] + iVar4) - 1, uVar5);
    iVar6   = iVar6 + 1;
    if (param_2 > r - 1) {
        param_2 = 0;
    }
    if (iVar6 > 2) {
        goto fin;
    }
check:
    if (param_2 == (s32) data_020ff0ac) {
        goto body;
    }
    if (param_2 == (s32) data_020ff0b4) {
        goto body;
    }
fin:
    iVar6         = data_020ff0ac;
    data_020ff0b0 = param_1;
    data_020ff0b4 = iVar6;
    data_020ff0ac = param_2;
    return param_2;
next:
    puVar3 = (u32 *) puVar3[10];
    if (puVar3 != 0) {
        goto loop;
    }
notfound:
    return -1;
}
