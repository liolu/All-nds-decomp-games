/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f6634 from projets/sims-2-the/src/donor/func_020f6634.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef volatile u16 vu16;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_020ff33c(void);
extern int data_02136b8c;
extern u16 data_021587d4;
extern void func_020ff4d4(void);
extern int func_02102a50(void);
extern void func_02105528(void);
extern void func_02105c90(u32 channel, void *destination, u32 value, u32 size);
extern void func_021060a4(u32 value, void *destination, u32 size);
void func_020ff33c(void) {
    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = ((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e;
    (*(vu16 *) 0x04000304) |= 1;
    func_020ff4d4();
    if (!data_021587d4) {
        do {
            int lock = func_02102a50();
            if (lock == -3) {
                func_02105528();
            }
            data_021587d4 = lock;
        } while (!data_021587d4);
    }
    (*(vu16 *) 0x04000004) = 0;
    (*(vu32 *) 0x04000000) = 0;
    if (data_02136b8c != -1) {
        func_02105c90(data_02136b8c, (void *) 0x04000008, 0, 96);
        *(vu16 *) 0x0400006c = 0;
        func_02105c90(data_02136b8c, (void *) 0x04001000, 0, 112);
    } else {
        volatile u32 main_zero = 0;
        func_021060a4(main_zero, (void *) 0x04000008, 96);
        *(vu16 *) 0x0400006c = 0;
        {
            volatile u32 sub_zero = 0;
            func_021060a4(sub_zero, (void *) 0x04001000, 112);
        }
    }
    *(vu16 *) 0x04000020 = 256;
    *(vu16 *) 0x04000026 = 256;
    *(vu16 *) 0x04000030 = 256;
    *(vu16 *) 0x04000036 = 256;
    *(vu16 *) 0x04001020 = 256;
    *(vu16 *) 0x04001026 = 256;
    *(vu16 *) 0x04001030 = 256;
    *(vu16 *) 0x04001036 = 256;
}
