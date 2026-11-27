/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020591b8 from projets/powerpuff-girls-z/src/donor/func_020591b8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef volatile u32 vu32;
extern void CARDi_SetRomOp(u32 hi, u32 lo);
extern u32 CARDi_ReadRomIDCore(void);
extern u8 *cardi_rom_header_addr;
static inline u32 CARDi_GetRomControl(void) {
    return *(u32 *) (cardi_rom_header_addr + 0x60);
}
extern void CARDi_SetRomOp(u32 hi, u32 lo);
u32 CARDi_ReadRomIDCore(void) {
    CARDi_SetRomOp(0xB8000000, 0);
    *(vu32 *) 0x040001A4 = ((CARDi_GetRomControl() & ~0x07000000) | 0xA7000000) & ~0x1FFF;
    while (!(*(vu32 *) 0x040001A4 & 0x800000)) {
    }
    return *(vu32 *) 0x04100010;
}
