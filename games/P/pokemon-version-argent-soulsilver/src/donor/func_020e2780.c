/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_WriteFlash4KBAsyncAT from https://github.com/ctrl-cheeb-del/pokeheartgold
 * lib/NitroSDK/src/ctrdg/CTRDG_flash_AT29LV512.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef volatile f32 vf32;
typedef u8 REGType8;
typedef u16 REGType16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu8 REGType8v;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef int BOOL;
struct CTRDGTaskInfo_tag;
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
extern u32 CTRDGi_EraseFlashChipCoreAT(CTRDGTaskInfo *arg);
extern u32 CTRDGi_EraseFlashSectorCoreAT(CTRDGTaskInfo *arg);
extern u32 CTRDGi_EraseFlash4KBCoreAT(CTRDGTaskInfo *arg);
extern u32 CTRDGi_WriteFlashSectorCoreAT(CTRDGTaskInfo *arg);
extern u32 func_020e2604(CTRDGTaskInfo *arg);
extern u16 CTRDGi_EraseFlashChipAT(void);
extern u16 CTRDGi_EraseFlash4KBAT(u16 l_secNo);
extern u16 CTRDGi_WriteFlash4KBAT(u16 l_secNo, u8 *src);
extern void CTRDGi_EraseFlashChipAsyncAT(CTRDG_TASK_FUNC callback);
extern void CTRDGi_EraseFlash4KBAsyncAT(u16 l_secNo, CTRDG_TASK_FUNC callback);
extern void func_020e2780(u16 l_secNo, u8 *src, CTRDG_TASK_FUNC callback);
extern u16 CTRDGi_EraseFlashSectorAT(u16 p_secNo);
extern u16 CTRDGi_WriteFlashSectorAT(u16 p_secNo, u8 *src);
extern void CTRDGi_EraseFlashSectorAsyncAT(u16 p_secNo, CTRDG_TASK_FUNC callback);
extern void CTRDGi_WriteFlashSectorAsyncAT(u16 p_secNo, u8 *src, CTRDG_TASK_FUNC callback);
typedef enum {
    MI_PROCESSOR_ARM9 = 0,
    MI_PROCESSOR_ARM7 = 1
} MIProcessor;
typedef enum {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8  = 1,
    MI_CTRDG_ROMCYCLE1_6  = 2,
    MI_CTRDG_ROMCYCLE1_18 = 3
} MICartridgeRomCycle1st;
typedef enum {
    MI_CTRDG_ROMCYCLE2_6 = 0,
    MI_CTRDG_ROMCYCLE2_4 = 1
} MICartridgeRomCycle2nd;
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
static inline void MIi_SetCardProcessor(MIProcessor proc) {
    (*(REGType16v *) 0x4000204) = (u16) (((*(REGType16v *) 0x4000204) & ~0x0800) | (proc << 11));
}
static inline void MIi_SetCartridgeProcessor(MIProcessor proc) {
    (*(REGType16v *) 0x4000204) = (u16) (((*(REGType16v *) 0x4000204) & ~0x0080) | (proc << 7));
}
static inline MICartridgeRomCycle1st MI_GetCartridgeRomCycle1st(void) {
    return (MICartridgeRomCycle1st) (((*(REGType16v *) 0x4000204) & 0xc) >> 2);
}
static inline MICartridgeRomCycle2nd MI_GetCartridgeRomCycle2nd(void) {
    return (MICartridgeRomCycle2nd) (((*(REGType16v *) 0x4000204) & 0x10) >> 4);
}
static inline void MI_SetCartridgeRomCycle1st(MICartridgeRomCycle1st c1) {
    (*(REGType16v *) 0x4000204) = (u16) (((*(REGType16v *) 0x4000204) & ~0xc) | (c1 << 2));
}
static inline void MI_SetCartridgeRomCycle2nd(MICartridgeRomCycle2nd c2) {
    (*(REGType16v *) 0x4000204) = (u16) (((*(REGType16v *) 0x4000204) & ~0x10) | (c2 << 4));
}
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
extern u16 ctrdg_flash_remainder;
typedef struct CTRDGiFlashTypePlusTag {
    u16 (*CTRDGi_WriteAgbFlashSector)(u16 secNo, u8 *src);
    u16 (*CTRDGi_EraseAgbFlashChip)(void);
    u16 (*CTRDGi_EraseAgbFlashSector)(u16 secNo);
    void (*CTRDGi_WriteAgbFlashSectorAsync)(u16 secNo, u8 *src, CTRDG_TASK_FUNC callback);
    void (*CTRDGi_EraseAgbFlashChipAsync)(CTRDG_TASK_FUNC callback);
    void (*CTRDGi_EraseAgbFlashSectorAsync)(u16 secNo, CTRDG_TASK_FUNC callback);
    u16 (*CTRDGi_PollingSR)(u16 phase, u8 *adr, u16 lastData);
    const u16(*maxtime);
    CTRDGFlashType type;
} CTRDGiFlashTypePlus;
typedef enum {
    CTRDG_BACKUP_TYPE_FLASH_512K,
    CTRDG_BACKUP_TYPE_FLASH_1M,
    CTRDG_BACKUP_TYPE_SRAM
} CTRDGBackupType;
extern const u16(*ctrdgi_fl_maxtime);
extern u16 (*CTRDGi_PollingSR)(u16 phase, u8 *adr, u16 lastData);
extern const CTRDGFlashType *AgbFlash;
extern u16 (*CTRDGi_WriteAgbFlashSector)(u16 secNo, u8 *src);
extern u16 (*CTRDGi_EraseAgbFlashChip)(void);
extern u16 (*CTRDGi_EraseAgbFlashSector)(u16 secNo);
extern void (*CTRDGi_WriteAgbFlashSectorAsync)(u16 secNo, u8 *src, CTRDG_TASK_FUNC callback);
extern void (*CTRDGi_EraseAgbFlashChipAsync)(CTRDG_TASK_FUNC callback);
extern void (*CTRDGi_EraseAgbFlashSectorAsync)(u16 secNo, CTRDG_TASK_FUNC callback);
extern u16 CTRDG_IdentifyAgbBackup(CTRDGBackupType type);
extern u32 SDK_AUTOLOAD_DTCM_START[];
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void);
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
extern OSIrqFunction OS_IRQTable[];
extern OSIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern void OS_InitIrqTable(void);
extern void OS_SetIrqFunction(OSIrqMask intrBit, OSIrqFunction function);
extern OSIrqFunction OS_GetIrqFunction(OSIrqMask intrBit);
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
extern OSIrqMask OS_SetIrqMask(OSIrqMask mask);
extern OSIrqMask OS_EnableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_ResetRequestIrqMask(OSIrqMask mask);
extern void OS_SetIrqStackChecker(void);
static inline BOOL OS_DisableIrq(void) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (0UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_EnableIrq(void) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (1UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (u16) enable;
    return (BOOL) prep;
}
static inline OSIrqMask OS_GetIrqMask(void) {
    return (*(REGType32v *) 0x4000210);
}
typedef volatile struct OSLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;
typedef enum {
    OS_PROCMODE_USER  = 16,
    OS_PROCMODE_FIQ   = 17,
    OS_PROCMODE_IRQ   = 18,
    OS_PROCMODE_SVC   = 19,
    OS_PROCMODE_ABORT = 23,
    OS_PROCMODE_UNDEF = 27,
    OS_PROCMODE_SYS   = 31
} OSProcMode;
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode OS_EnableInterrupts(void);
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern OSIntrMode OS_DisableInterrupts_IrqAndFiq(void);
extern OSIntrMode OS_RestoreInterrupts_IrqAndFiq(OSIntrMode state);
extern OSIntrMode OS_GetCpsrIrq(void);
extern OSProcMode OS_GetProcMode(void);
extern void OS_SpinWait(u32 cycles);
extern void OS_WaitVBlankIntr(void);
typedef void (*MIDmaCallback)(void *);
typedef union {
    u32 b32;
    u16 b16;
} MIiDmaClearSrc;
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, MIDmaCallback callback, void *arg);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MI_WaitDma(u32 dmaNo);
extern void MI_StopDma(u32 dmaNo);
extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_wait(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_wait_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
static inline void MIi_DmaSetParams_wait_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = OS_DisableInterrupts();

    MIiDmaClearSrc *scrp = (MIiDmaClearSrc *) ((u32) 0x40000e0 + dmaNo * 4);
    scrp->b32            = data;
    MIi_DmaSetParams_wait_noInt(dmaNo, (u32) scrp, dest, ctrl);

    (void) OS_RestoreInterrupts(lastIntrMode);
}
static inline void MIi_DmaSetParams_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = OS_DisableInterrupts();

    MIiDmaClearSrc *srcp = (MIiDmaClearSrc *) ((u32) 0x40000e0 + dmaNo * 4);
    srcp->b32            = data;
    MIi_DmaSetParams_noInt(dmaNo, (u32) srcp, dest, ctrl);

    (void) OS_RestoreInterrupts(lastIntrMode);
}
static inline void MIi_CallCallback(MIDmaCallback callback, void *arg) {
    if (callback) {
        (callback)(arg);
    }
}
extern void SVC_CpuSet(const void *srcp, void *destp, u32 dmaCntData);
extern void SVC_WaitByLoop(u32 ct);
static inline void OSi_WaitByLoop(void) {
    SVC_WaitByLoop(0x1000 / 4);
}
extern void OS_InitLock(void);
extern s32 OSi_DoLockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFiq);
extern s32 OS_TryLockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OSi_DoUnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFIQ);
extern s32 OS_UnlockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OSi_DoTryLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFiq);
extern s32 OS_LockCartridge(u16 lockID);
extern s32 OS_UnlockCartridge(u16 lockID);
extern s32 OS_TryLockCartridge(u16 lockID);
extern void OSi_AllocateCartridgeBus(void);
extern void OSi_FreeCartridgeBus(void);
extern s32 OS_TryLockCard(u16 lockID);
extern s32 OS_UnlockCard(u16 lockID);
extern void OSi_AllocateCardBus(void);
extern void OSi_FreeCardBus(void);
extern u16 OS_ReadOwnerOfLockWord(OSLockWord *lock);
extern s32 OS_UnLockCartridge(u16 lockID);
extern s32 OS_GetLockID(void);
extern void OS_ReleaseLockID(register u16 lockID);
extern u16 ctrdgi_flash_lock_id;
extern BOOL ctrdgi_backup_irq;
extern void func_020e366c(CTRDGTaskInfo *pt, CTRDG_TASK_FUNC task, CTRDG_TASK_FUNC callback);
extern u16 CTRDGi_PollingSR512kCOMMON(u16 phase, u8 *adr, u16 lastData);
extern const u16 atMaxTime[];
extern const CTRDGiFlashTypePlus AT29LV512_lib;
extern const CTRDGiFlashTypePlus AT29LV512_org;
u32 CTRDGi_EraseFlashChipCoreAT(CTRDGTaskInfo *arg);
u32 CTRDGi_EraseFlashSectorCoreAT(CTRDGTaskInfo *arg);
u32 CTRDGi_EraseFlash4KBCoreAT(CTRDGTaskInfo *arg);
u32 CTRDGi_WriteFlashSectorCoreAT(CTRDGTaskInfo *arg);
u32 func_020e2604(CTRDGTaskInfo *arg);
u16 CTRDGi_EraseFlashChipAT(void);
u16 CTRDGi_EraseFlash4KBAT(u16 l_secNo);
u16 CTRDGi_WriteFlash4KBAT(u16 l_secNo, u8 *src);
void CTRDGi_EraseFlashChipAsyncAT(CTRDG_TASK_FUNC callback);
void CTRDGi_EraseFlash4KBAsyncAT(u16 l_secNo, CTRDG_TASK_FUNC callback);
void func_020e2780(u16 l_secNo, u8 *src, CTRDG_TASK_FUNC callback) {
    CTRDGTaskInfo p;

    p.sec_num = l_secNo;
    p.data    = src;
    func_020e366c(&p, func_020e2604, callback);
}
u16 CTRDGi_EraseFlashSectorAT(u16 p_secNo);
u16 CTRDGi_WriteFlashSectorAT(u16 p_secNo, u8 *src);
void CTRDGi_EraseFlashSectorAsyncAT(u16 p_secNo, CTRDG_TASK_FUNC callback);
void CTRDGi_WriteFlashSectorAsyncAT(u16 p_secNo, u8 *src, CTRDG_TASK_FUNC callback);
