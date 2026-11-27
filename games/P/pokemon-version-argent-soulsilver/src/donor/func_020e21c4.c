/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDG_WriteAgbFlashSector from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/ctrdg/ctrdg_flash_common.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
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
extern u32 func_020e21c4(u16 secNo, const void *src);
extern CTRDGiFlashWork data_021e4f4c;
u32 func_020e21c4(u16 secNo, const void *src) {
    return ((u32(*)(u16, const void *)) data_021e4f4c.writeAgbFlashSector)(secNo, src);
}
