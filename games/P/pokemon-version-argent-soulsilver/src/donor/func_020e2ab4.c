/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_WriteFlashSectorCoreLE from https://github.com/ctrl-cheeb-del/pokeheartgold
 * lib/NitroSDK/src/ctrdg/ctrdg_flash_le39fw512.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
typedef int BOOL;
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
static inline void MI_SetCartridgeRamCycle(MICartridgeRamCycle c) {
    (*(REGType16v *) 0x4000204) = (u16) (((*(REGType16v *) 0x4000204) & ~3) | (c << 0));
}
static inline MICartridgeRamCycle MI_GetCartridgeRamCycle(void) {
    return (MICartridgeRamCycle) (((*(REGType16v *) 0x4000204) & 3) >> 0);
}
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
typedef u32 (*CTRDG_TASK_FUNC)(struct CTRDGTaskInfo_tag *);
typedef struct CTRDGTaskInfo_tag {
    CTRDG_TASK_FUNC task;
    CTRDG_TASK_FUNC callback;
    u32 result;
    u8 *data;
    u8 *adr;
    u32 offset;
    u32 size;
    u8 *dst;
    u16 sec_num;
    u8 busy;
    u8 param[1];
} CTRDGTaskInfo;
extern u16 data_021e4f48;
extern const u16(*ctrdgi_fl_maxtime);
extern const CTRDGFlashType *data_02110fe4;
extern u16 data_021e4f4c;
extern BOOL data_021e4f68;
extern u16 func_020e2a60(u8 *src, u8 *dst);
extern u32 func_020e2ab4(CTRDGTaskInfo *arg);
extern u32 func_020e2c84(u8 *adr);
extern u32 func_020e2cb8(u8 *adr, u32 (*verify)(u8 *adr));
extern u16 func_020e2d64(u16 secNo);
static inline BOOL OS_DisableIrq(void) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (0UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (u16) enable;
    return (BOOL) prep;
}
extern s32 func_020d14ac(u16 lockID);
extern s32 func_020d14cc(u16 lockID);
u16 func_020e2a60(u8 *src, u8 *dst);
u32 func_020e2ab4(CTRDGTaskInfo *arg) {
    CTRDGTaskInfo task;
    u8 *dst;
    u16 secNo;
    MICartridgeRamCycle ramCycle;
    u16 result;
    u8 *src;
    u16 retry;
    u16 extraErases;

    task  = *arg;
    secNo = task.sec_num;
    src   = task.data;
    if (secNo >= 16) {
        return 0x8000 | 0x00ff;
    }
    dst   = (u8 *) (0x0A000000 + (secNo << data_02110fe4->sector.shift));
    retry = 0;
    for (;;) {
        result = func_020e2d64(secNo);
        if (result == 0) {
            result = (u16) func_020e2cb8(dst, func_020e2c84);
            if (result == 0) {
                break;
            }
        }
        if (retry++ == 80) {
            return result;
        }
    }
    extraErases = 1;
    if (retry != 0) {
        extraErases = 6;
    }
    for (retry = 1; retry <= extraErases; retry++) {
        func_020e2d64(secNo);
    }
    func_020d14ac(data_021e4f4c);
    ramCycle = MI_GetCartridgeRamCycle();
    MI_SetCartridgeRamCycle(data_02110fe4->agbWait[0]);
    data_021e4f48 = (u16) data_02110fe4->sector.size;
    data_021e4f68 = OS_DisableIrq();
    while (data_021e4f48) {
        result = func_020e2a60(src, dst);
        if (result) {
            break;
        }
        src++;
        dst++;
        data_021e4f48--;
    }
    (void) OS_RestoreIrq(data_021e4f68);
    MI_SetCartridgeRamCycle(ramCycle);
    func_020d14cc(data_021e4f4c);
    return result;
}
u32 func_020e2c84(u8 *adr);
u32 func_020e2cb8(u8 *adr, u32 (*verify)(u8 *adr));
u16 func_020e2d64(u16 secNo);
