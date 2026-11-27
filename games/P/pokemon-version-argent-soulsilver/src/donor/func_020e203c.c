/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_VerifyAgbFlashCore from https://github.com/RushRE/SonicRushAdventure-Decomp
 * lib/NitroSDK/src/ctrdg/ARM9/ctrdg_flash_common.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
extern s32 func_020d14cc(u16 lockID);
extern s32 func_020d14ac(u16 lockID);
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
static inline void MI_SetCartridgeRamCycle(MICartridgeRamCycle c) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~3) | (c << 0));
}
static inline MICartridgeRamCycle MI_GetCartridgeRamCycle(void) {
    return (MICartridgeRamCycle) (((*(REGType16v *) (0x04000000 + 0x204)) & 3) >> 0);
}
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
extern const CTRDGFlashType *data_02110fe4;
extern void func_020e1be4(u16 bank);
extern void func_020e1be4(u16 bank);
extern const u16(*ctrdgi_fl_maxtime);
extern const CTRDGFlashType *data_02110fe4;
extern u32 func_020e203c(CTRDGTaskInfo *arg);
extern const CTRDGFlashType *data_02110fe4;
extern const u16(*ctrdgi_fl_maxtime);
extern u16 data_021e4f4c;
void func_020e1be4(u16 bank);
u32 func_020e2008(u8 *src, u8 *tgt, u32 size);
u32 func_020e203c(CTRDGTaskInfo *arg) {
    u8 *tgt;
    u32 result;
    MICartridgeRamCycle ram_cycle;
    CTRDGTaskInfo p = *arg;
    u16 sec_num     = p.sec_num;
    u8 *src         = p.data;
    u32 size        = p.size;

    (void) func_020d14ac(data_021e4f4c);

    ram_cycle = MI_GetCartridgeRamCycle();
    MI_SetCartridgeRamCycle(MI_CTRDG_RAMCYCLE_18);

    if (data_02110fe4->romSize == 0x00020000) {
        func_020e1be4((u16) (sec_num >> 4));
        sec_num &= 0x0f;
    }

    tgt    = (u8 *) (0x0A000000 + (sec_num << data_02110fe4->sector.shift));
    result = func_020e2008(src, tgt, size);

    MI_SetCartridgeRamCycle(ram_cycle);
    (void) func_020d14cc(data_021e4f4c);

    return result;
}
