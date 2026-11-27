/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_VerifyFlashErase from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/ctrdg/ctrdg_flash_le39fw512.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
typedef struct CTRDGiFlashSectorTag {
    u32 size;
    u16 shift;
    u16 count;
    u16 top;
    u8 reserved[2];
} CTRDGiFlashSector;
typedef struct CTRDGFlashTypeTag {
    u32 romSize;
    CTRDGiFlashSector sector;
    MICartridgeRamCycle agbWait[2];
    u16 makerID;
    u16 deviceID;
} CTRDGFlashType;
extern const u16(*ctrdgi_fl_maxtime);
extern const CTRDGFlashType *data_02110fe4;
extern u16 data_021e4f4c;
extern u32 func_020e2cb8(u8 *adr, u32 (*verify)(u8 *adr));
extern s32 func_020d14ac(u16 lockID);
extern s32 func_020d14cc(u16 lockID);
#pragma push
#pragma opt_propagation off
u32 func_020e2cb8(u8 *adr, u32 (*verify)(u8 *adr)) {
    u32 result;
    const CTRDGFlashType *flash;
    u32 ramCycle;

    func_020d14ac(data_021e4f4c);
    ramCycle = (*(REGType16v *) 0x4000204) & 3;
    flash    = data_02110fe4;
    {
        u32 exmemcnt = (*(REGType16v *) 0x4000204), wait = flash->agbWait[0];
        (*(REGType16v *) 0x4000204) = (exmemcnt & ~3u) | wait;
    }
    result = 0;
    if (verify(adr)) {
        result = 0x8000 | 4;
    }
    (*(REGType16v *) 0x4000204) = ((*(REGType16v *) 0x4000204) & ~3) | ramCycle;
    func_020d14cc(data_021e4f4c);
    return result;
}
