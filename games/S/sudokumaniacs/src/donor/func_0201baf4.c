/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020050d4 from projets/code-lyoko/src/auto/func_020050d4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u16 vu16;
extern void func_0201e640(void);
extern u32 func_0201c3b0(void);
extern u32 data_0202a4d0;
extern u16 data_0203dcc8;
extern void func_0201bc78(void);
extern void func_0201e884(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_0201e930(u32 data, void *dest, u32 size);
extern u32 data_0202a4d0;
extern u16 data_0203dcc8;
void func_0201baf4(void) {
    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = ((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e;
    (*(vu16 *) 0x04000304) |= 1;
    func_0201bc78();

    while (data_0203dcc8 == 0) {
        s32 lockId = func_0201c3b0();
        if (lockId == -3) {
            func_0201e640();
        }
        data_0203dcc8 = lockId;
    }

    (*(vu16 *) 0x04000004)          = 0;
    (*(u32 *) ((0x04000000) | 0x0)) = 0;

    if (data_0202a4d0 != -1) {
        func_0201e884(data_0202a4d0, (void *) &(*(vu16 *) ((0x04000000) | 0x8)), 0, 0x60);
        (*(u16 *) ((0x04000000) | 0x6c)) = 0;
        func_0201e884(data_0202a4d0, (void *) &(*(u32 *) ((0x04001000) | 0x0)), 0, 0x70);
    } else {
        func_0201e930(0, (void *) &(*(vu16 *) ((0x04000000) | 0x8)), 0x60);
        (*(u16 *) ((0x04000000) | 0x6c)) = 0;
        func_0201e930(0, (void *) &(*(u32 *) ((0x04001000) | 0x0)), 0x70);
    }

    (*(u16 *) ((0x04000000) | 0x20)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x26)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x30)) = 0x100;
    (*(u16 *) ((0x04000000) | 0x36)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x20)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x26)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x30)) = 0x100;
    (*(u16 *) ((0x04001000) | 0x36)) = 0x100;
}
