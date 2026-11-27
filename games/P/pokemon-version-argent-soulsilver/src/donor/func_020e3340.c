/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_WriteFlashSectorCoreMX5 from https://github.com/ctrl-cheeb-del/pokeheartgold
 * lib/NitroSDK/src/ctrdg/ctrdg_flash_mn63f805mnp.c (license: none), reused by tools/donor_match.py */
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
extern const u16(*ctrdgi_fl_maxtime);
extern const CTRDGFlashType *data_02110fe4;
extern u16 data_021e4f4c;
extern u16 func_020e2a60(u8 *src, u8 *dst);
extern u16 func_020e2d64(u16 secNo);
extern u32 func_020e3340(CTRDGTaskInfo *arg);
extern s32 func_020d14ac(u16 lockID);
extern s32 func_020d14cc(u16 lockID);
extern volatile u16 data_021e4f48;
#pragma force_active on
#pragma push
#pragma opt_propagation off
u32 func_020e3340(CTRDGTaskInfo *arg) {
    CTRDGTaskInfo task = *arg;
    u16 secNo          = task.sec_num;
    u32 ramCycle;
    u16 result;
    const u8 *src = task.data;
    u8 *dst;

    if (secNo >= data_02110fe4->sector.count) {
        return 0x8000 | 0x00ff;
    }
    result = func_020e2d64(secNo);
    if (result) {
        return result;
    }
    func_020d14ac(data_021e4f4c);
    ramCycle = (*(REGType16v *) 0x4000204);
    {
        u32 wait                    = data_02110fe4->agbWait[0];
        (*(REGType16v *) 0x4000204) = ((*(REGType16v *) 0x4000204) & ~3) | wait;
    }
    ramCycle &= 3;
    data_021e4f48 = data_02110fe4->sector.size;
    dst           = (u8 *) (0x0A000000 + (secNo << data_02110fe4->sector.shift));
    while (data_021e4f48) {
        result = func_020e2a60((u8 *) src, dst);
        if (result) {
            break;
        }
        data_021e4f48--;
        src++;
        dst++;
    }
    (*(REGType16v *) 0x4000204) = ((*(REGType16v *) 0x4000204) & ~3) | ramCycle;
    func_020d14cc(data_021e4f4c);
    return result;
}
