/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f2bc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f2bc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0211b488;
extern u32 func_0205c948(void);
extern void func_0205c95c(u32 v);
extern void func_02060720(u32 v);
extern void func_0206076c(u32 v);
extern u8 *func_02060830(void);
extern void func_0206078c(u32 *p);
extern void func_0206087c(void);
extern void func_0206083c(u32 v);
extern void func_0206084c(u32 v);
void func_0205ff80(void) {
    u32 r4v;
    u8 *p;
    s32 i;
    s32 t;
    u32 local[40];

    r4v = func_0205c948();
    if (data_0211b488 == 0) {
        func_0205c95c(r4v);
        return;
    }
    data_0211b488 = 0;
    func_02060720(0xffffffff);
    func_0206076c(0);
    p                    = func_02060830();
    *(u32 *) p           = 0;
    *(u16 *) (p + 8)     = 0;
    *(u16 *) (p + 10)    = 0;
    *(u32 *) (p + 0x10)  = 0;
    *(u32 *) (p + 0x138) = 0;
    *(u16 *) (p + 320)   = 0;
    *(u16 *) (p + 322)   = 0;
    *(u32 *) (p + 0x148) = 0;
    i                    = 0;
    t                    = i;
    do {
        i                   = i + 1;
        *(u8 *) (p + 0x1d7) = t;
        p                   = p + 104;
    } while (i < 16);
    local[0] = t;
    func_0206078c(local);
    func_0206087c();
    func_0206083c(0xffffffff);
    func_0206084c(0xffffffff);
    func_0205c95c(r4v);
}
