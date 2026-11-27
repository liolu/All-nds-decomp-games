/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_ReadFlashID from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/ctrdg/ctrdg_flash_common.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef vu16 REGType16v;
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
extern u16 func_020e1c18(void);
extern void func_020e1d24(u16 phase);
extern void func_020e1d6c(void);
extern u8 func_020e1dc8(const u8 *adr);
extern CTRDGiFlashWork data_021e4f4c;
static inline void SendFlashCommand(u8 command) {
    u16 ime                            = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208)        = 0;
    data_021e4f4c.savedIme             = ime;
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xAA;
    *(vu8 *) (0x0A000000 + 0x00002AAA) = 0x55;
    *(vu8 *) (0x0A000000 + 0x00005555) = command;
}
static inline void RestoreFlashIme(void) {
    u16 ime = (*(REGType16v *) 0x4000208);
    (void) ime;
    (*(REGType16v *) 0x4000208) = data_021e4f4c.savedIme;
}
u16 func_020e1c18(void) {
    u16 id;

    SendFlashCommand(0x90);
    RestoreFlashIme();
    func_020e1d24(0);
    while (!data_021e4f4c.timerExpired) {
        func_020e1d6c();
    }
    id = (u16) ((u32) func_020e1dc8((const u8 *) (0x0A000000 + 1)) << 8);
    id |= func_020e1dc8((const u8 *) 0x0A000000);
    SendFlashCommand(0xF0);
    *(vu8 *) (0x0A000000 + 0x00005555) = 0xF0;
    RestoreFlashIme();
    func_020e1d24(0);
    while (!data_021e4f4c.timerExpired) {
        func_020e1d6c();
    }
    return id;
}
void func_020e1d24(u16 phase);
void func_020e1d6c(void);
u8 func_020e1dc8(const u8 *adr);
