/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209e654 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/dwc_bm.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
typedef struct DwcBmNvramState {
    volatile u16 error;
    u16 pad;
    volatile s32 ready;
    u32 backupAddress;
} DwcBmNvramState;
extern DwcBmNvramState data_021d43e8;
extern BOOL func_0209e654(void *data, const BOOL *dirty, void *verifyBuffer);
extern void func_0209edc8(u32 address, u32 size, void *src);
extern BOOL func_0209ee44(void *expected, u32 address, u32 size, void *scratch);
extern BOOL func_0209ee90(void);
#pragma force_active on
BOOL func_0209e654(void *data, const BOOL *dirty, void *verifyBuffer) {
    u8 *pages   = data;
    int address = data_021d43e8.backupAddress;
    int i;

    for (i = 0; i < 4; i++, pages += 0x100, address += 0x100) {
        if (dirty[i]) {
            do {
                func_0209edc8(address, 0x100, pages);
            } while (!func_0209ee44(pages, address, 0x100, verifyBuffer));
        }
    }
    return func_0209ee90() != 0;
}
