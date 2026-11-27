/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f448 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f448.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_0211b488;
extern u32 func_0205c948(void);
extern void func_0205c95c(u32 s);
extern void func_02060720(s32 a);
extern void func_0206076c(s32 a);
extern u8 *func_02060830(void);
extern void func_0206078c(u32 *a);
extern void func_0206087c(void);
extern void func_0206083c(s32 a);
extern void func_0206084c(s32 a);
void func_0206010c(s16 param_1, s16 param_2, u32 param_3) {
    u32 local_b0[39];
    u8 *puVar1;
    s32 iVar2;
    u32 s;

    s = func_0205c948();
    if (data_0211b488 == 1) {
        func_0205c95c(s);
        return;
    }
    data_0211b488 = 1;
    func_02060720(0);
    func_0206076c(0);
    puVar1                       = func_02060830();
    iVar2                        = 0;
    *(u32 *) puVar1              = 0;
    *(u16 *) (puVar1 + 8)        = 0;
    *(u16 *) (puVar1 + 10)       = 0;
    *(u32 *) (puVar1 + 0x10)     = 0;
    *(u32 *) (puVar1 + 0x138)    = 0;
    *(u16 *) (puVar1 + 256 + 64) = 0;
    *(u16 *) (puVar1 + 256 + 66) = 0;
    *(u32 *) (puVar1 + 0x148)    = param_3;
    do {
        iVar2                    = iVar2 + 1;
        *(u8 *) (puVar1 + 0x1d7) = 0;
        puVar1                   = puVar1 + 104;
    } while (iVar2 < 16);
    local_b0[0] = 0;
    func_0206078c(local_b0);
    func_0206087c();
    func_0206083c(param_1 - 14);
    func_0206084c(param_2 - 14);
    func_0205c95c(s);
}
