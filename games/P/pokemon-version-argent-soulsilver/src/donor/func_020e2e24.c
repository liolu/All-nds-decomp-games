/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_EraseFlashChipCoreAT from https://github.com/ctrl-cheeb-del/pokeheartgold
 * lib/NitroSDK/src/ctrdg/CTRDG_flash_AT29LV512.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
typedef int BOOL;
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
extern u32 func_020e2e24(CTRDGTaskInfo *arg);
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
extern const u16(*ctrdgi_fl_maxtime);
extern u16 (*data_021e4f7c)(u16 phase, u8 *adr, u16 lastData);
extern const CTRDGFlashType *data_02110fe4;
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
extern u16 data_021e4f4c;
extern BOOL data_021e4f68;
u32 func_020e2e24(CTRDGTaskInfo *arg) {
    MICartridgeRamCycle ram_cycle;
    u32 result;
    (void) arg;

    (void) func_020d14ac(data_021e4f4c);

    ram_cycle = MI_GetCartridgeRamCycle();
    MI_SetCartridgeRamCycle(data_02110fe4->agbWait[0]);

    data_021e4f68 = OS_DisableIrq();

    *(vu8 *) (0x0A000000 + 0x00005555) = 0xaa;
    *(vu8 *) (0x0A000000 + 0x00002aaa) = 0x55;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0x80;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xaa;
    *(vu8 *) (0x0A000000 + 0x00002aaa) = 0x55;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0x10;

    (void) OS_RestoreIrq(data_021e4f68);

    result = data_021e4f7c(0x0003, (u8 *) 0x0A000000, 0xff);

    MI_SetCartridgeRamCycle(ram_cycle);

    (void) func_020d14cc(data_021e4f4c);

    return result;
}
