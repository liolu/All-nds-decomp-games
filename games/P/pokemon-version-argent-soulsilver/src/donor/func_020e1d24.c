/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StartFlashTimer from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/ctrdg/ctrdg_flash_common.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
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
typedef struct CTRDGiFlashWork {
    u16 lockID;
    u16 timerExpired;
    u16 (*writeAgbFlashSector)(u16 secNo, u8 *src);
    void (*writeAgbFlashSectorAsync)(u16 secNo, u8 *src, CTRDG_TASK_FUNC callback);
    void (*eraseAgbFlashChipAsync)(CTRDG_TASK_FUNC callback);
    u16 (*eraseAgbFlashSector)(u16 secNo);
    void (*eraseAgbFlashSectorAsync)(u16 secNo, CTRDG_TASK_FUNC callback);
    u16 (*eraseAgbFlashChip)(void);
    u32 savedIme;
    u64 timerLimit;
    u64 timerStart;
} CTRDGiFlashWork;
typedef struct CTRDGiFlashChip {
    const CTRDGFlashType *type;
    const u16 *maxtime;
} CTRDGiFlashChip;
extern void func_020e1d24(u16 phase);
typedef u64 OSTick;
extern OSTick func_020d34b0(void);
extern CTRDGiFlashWork data_021e4f4c;
extern CTRDGiFlashChip data_02110fe4[];
void func_020e1d24(u16 phase) {
    data_021e4f4c.timerExpired = 0;
    data_021e4f4c.timerLimit   = data_02110fe4->maxtime[phase];
    data_021e4f4c.timerStart   = func_020d34b0();
}
