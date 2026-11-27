/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_PollingSR512kCOMMON from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/ctrdg/ctrdg_flash_common.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u8 vu8;
typedef int BOOL;
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
extern u8 func_020e1dc8(const u8 *adr);
extern u16 func_020e1dd0(u16 phase, const u8 *adr, u8 lastData);
extern BOOL func_020e1134(void);
extern CTRDGiFlashWork data_021e4f4c;
extern CTRDGiFlashChip data_02110fe4[];
void func_020e1d24(u16 phase);
u8 func_020e1dc8(const u8 *adr);
u16 func_020e1dd0(u16 phase, const u8 *adr, u8 lastData) {
    u16 result = 0;

    func_020e1d24(phase);
    for (;;) {
        u8 status = func_020e1dc8(adr);
        if (status == lastData) {
            break;
        }
        if (!data_021e4f4c.timerExpired) {
            continue;
        }
        if (lastData == func_020e1dc8(adr)) {
            break;
        }
        if (data_02110fe4->type->makerID == 0xC2) {
            *(vu8 *) (0x0A000000 + 0x00005555) = 0xF0;
        }
        result = phase | 0xC000;
        break;
    }
    if (!func_020e1134()) {
        result = 0x1000;
    }
    return result;
}
