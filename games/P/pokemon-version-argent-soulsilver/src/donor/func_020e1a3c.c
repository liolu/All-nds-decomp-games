/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDG_IdentifyAgbBackup from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/ctrdg/ARM9/ctrdg_backup.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
extern s32 func_020d14cc(u16 lockID);
extern s32 func_020d14ac(u16 lockID);
extern s32 func_020d15c4(void);
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
extern u16 func_020e1c18(void);
typedef enum {
    CTRDG_BACKUP_TYPE_FLASH_512K,
    CTRDG_BACKUP_TYPE_FLASH_1M,
    CTRDG_BACKUP_TYPE_SRAM
} CTRDGBackupType;
typedef struct CTRDGiFlashTypePlusTag {
    u16 (*data_021e4f50)(u16 secNo, u8 *src);
    u16 (*data_021e4f64)(void);
    u16 (*data_021e4f5c)(u16 secNo);
    void (*data_021e4f54)(u16 secNo, u8 *src, CTRDG_TASK_FUNC callback);
    void (*data_021e4f58)(CTRDG_TASK_FUNC callback);
    void (*data_021e4f60)(u16 secNo, CTRDG_TASK_FUNC callback);
    u16 (*data_021e4f7c)(u16 phase, u8 *adr, u16 lastData);
    const u16(*maxtime);
    CTRDGFlashType type;
} CTRDGiFlashTypePlus;
extern const u16(*data_02110fe8);
extern u16 (*data_021e4f7c)(u16 phase, u8 *adr, u16 lastData);
extern const CTRDGFlashType *data_02110fe4;
extern u16 (*data_021e4f50)(u16 secNo, u8 *src);
extern u16 (*data_021e4f64)(void);
extern u16 (*data_021e4f5c)(u16 secNo);
extern void (*data_021e4f54)(u16 secNo, u8 *src, CTRDG_TASK_FUNC callback);
extern void (*data_021e4f58)(CTRDG_TASK_FUNC callback);
extern void (*data_021e4f60)(u16 secNo, CTRDG_TASK_FUNC callback);
extern u16 func_020e1a3c(CTRDGBackupType type);
extern u16 data_021e4f4c;
extern u16 data_021e4f80;
extern const CTRDGiFlashTypePlus *const data_0210e204[];
extern const CTRDGiFlashTypePlus *const data_0210e210[];
extern const u16 data_0210e200[];
u16 func_020e1a3c(CTRDGBackupType type) {
    u16 result = 1;
    u16 flashID;
    const CTRDGiFlashTypePlus *const *flp;
    MICartridgeRamCycle ram_cycle;

    if (type == CTRDG_BACKUP_TYPE_FLASH_512K || type == CTRDG_BACKUP_TYPE_FLASH_1M) {
        data_021e4f4c = (u16) func_020d15c4();

        (void) func_020d14ac(data_021e4f4c);

        ram_cycle = MI_GetCartridgeRamCycle();
        MI_SetCartridgeRamCycle(MI_CTRDG_RAMCYCLE_18);

        data_02110fe8 = data_0210e200;
        flashID       = func_020e1c18();

        if (type == CTRDG_BACKUP_TYPE_FLASH_512K) {
            flp = data_0210e210;
        }
        if (type == CTRDG_BACKUP_TYPE_FLASH_1M) {
            flp = data_0210e204;
        }

        MI_SetCartridgeRamCycle(ram_cycle);

        (void) func_020d14cc(data_021e4f4c);

        result = 1;
        while ((*flp)->type.makerID != 0x00) {
            if ((flashID & 0xff) == *(u16 *) &((*flp)->type.makerID)) {
                result = 0;
                break;
            }
            flp++;
        }

        data_021e4f50 = (*flp)->data_021e4f50;
        data_021e4f64 = (*flp)->data_021e4f64;
        data_021e4f5c = (*flp)->data_021e4f5c;
        data_021e4f54 = (*flp)->data_021e4f54;
        data_021e4f58 = (*flp)->data_021e4f58;
        data_021e4f60 = (*flp)->data_021e4f60;
        data_021e4f7c = (*flp)->data_021e4f7c;
        data_02110fe8 = (*flp)->maxtime;
        data_02110fe4 = &(*flp)->type;
    } else if (type == CTRDG_BACKUP_TYPE_SRAM) {
        data_021e4f80 = (u16) func_020d15c4();
        result        = 0;
    }
    return result;
}
