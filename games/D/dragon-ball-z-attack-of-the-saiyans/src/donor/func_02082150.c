/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3X_InitTable from projets/blue-dragon-awakened-shadow/src/donor/G3X_InitTable.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 data_0209f734;
extern void func_02082c54(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_020831cc(u32 data, void *dest, u32 size);
extern void func_02082150(void);
extern void func_02082e30(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);
void func_02082150(void) {
    s32 i;

    if (data_0209f734 != -1) {
        func_02082e30(data_0209f734, (void *) 0x04000330, 0, 0x10, 0, 0);
        func_02082c54(data_0209f734, (void *) 0x04000360, 0, 0x60);
    } else {
        func_020831cc(0, (void *) 0x04000330, 0x10);
        func_020831cc(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}
