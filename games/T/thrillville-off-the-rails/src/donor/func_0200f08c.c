/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e214 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/card/card_rom.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef volatile u32 vu32;
extern void func_0200f4a0(u32 hi, u32 lo);
extern u32 func_0200f08c(void);
extern u8 *data_020dff2c;
static inline u32 CARDi_GetRomControl(void) {
    return *(u32 *) (data_020dff2c + 0x60);
}
void func_0200f4a0(u32 hi, u32 lo);
u32 func_0200f08c(void) {
    func_0200f4a0(0xB8000000, 0);
    *(vu32 *) 0x040001A4 = ((CARDi_GetRomControl() & ~0x07000000) | 0xA7000000) & ~0x1FFF;
    while (!(*(vu32 *) 0x040001A4 & 0x800000)) {
    }
    return *(vu32 *) 0x04100010;
}
