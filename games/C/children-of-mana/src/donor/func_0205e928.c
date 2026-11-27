/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206dc64 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206dc64.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern int func_02060710(void);
extern u32 *func_0205f65c(u32 a, u32 b);
extern u32 func_0206085c(void);
extern int func_0205fa04(u16 *a, u32 b, u32 c, u32 d, u32 e, u32 *f, u32 g);
int func_0205e928(int param_1, int param_2, u16 *param_3) {
    int iVar5;
    u8 *puVar4;
    u32 uVar6;
    u32 *puVar2;
    u32 uVar3;
    int iVar1;

    iVar5  = 0;
    puVar4 = (u8 *) (param_1 + 0x1d4 + param_2 * 0x68);
    if (*puVar4 == 2) {
        iVar1 = func_02060710();
        if (iVar1 == 0) {
            uVar6 = 0xffff;
        } else {
            uVar6 = 1;
        }
        if (puVar4[1] == 6) {
            puVar2 = func_0205f65c(*(u32 *) (puVar4 + 0x10), *(u32 *) (puVar4 + 0x14));
            if (puVar2 != ((void *) 0)) {
                uVar3   = func_0206085c();
                iVar5   = func_0205fa04(param_3, uVar6, puVar4[2], *(u32 *) (puVar4 + 0x10), *(u32 *) (puVar4 + 0x14), puVar2,
                                        uVar3);
                *puVar4 = 1;
            }
        }
    }
    return iVar5;
}
