/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200302c from projets/blue-dragon-awakened-shadow/src/donor/func_0200302c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern void func_02080a60(void);
extern s32 func_02083d58(void);
extern void func_02085398(void);
extern void func_02082c54(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_020831cc(u32 data, void *dest, u32 size);
extern vu16 data_020d8540[];
extern u32 data_0209f730[];
void func_02080738(void) {
    s32 lockId;

    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = (u16) (((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e);
    (*(vu16 *) 0x04000304) = (u16) ((*(vu16 *) 0x04000304) | 0x0001);

    func_02080a60();

    while (data_020d8540[1] == 0) {
        lockId = func_02083d58();
        if (lockId == (-3)) {
            func_02085398();
        }
        data_020d8540[1] = (u16) lockId;
    }

    (*(vu16 *) 0x04000004) = 0;
    (*(vu32 *) 0x04000000) = 0;

    if (data_0209f730[1] != (u32) -1) {
        func_02082c54(data_0209f730[1], ((void *) 0x04000008), 0, 0x60);
        (*(vu16 *) 0x0400006c) = 0;
        func_02082c54(data_0209f730[1], ((void *) 0x04001000), 0, 0x70);
    } else {
        func_020831cc(0, ((void *) 0x04000008), 0x60);
        (*(vu16 *) 0x0400006c) = 0;
        func_020831cc(0, ((void *) 0x04001000), 0x70);
    }

    *(vu16 *) 0x04000020 = 0x100;
    *(vu16 *) 0x04000026 = 0x100;
    *(vu16 *) 0x04000030 = 0x100;
    *(vu16 *) 0x04000036 = 0x100;
    *(vu16 *) 0x04001020 = 0x100;
    *(vu16 *) 0x04001026 = 0x100;
    *(vu16 *) 0x04001030 = 0x100;
    *(vu16 *) 0x04001036 = 0x100;
}
