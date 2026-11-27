/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_WaitInterrupt from https://github.com/Project-Holon/aletheia src/game/arm9/os_system.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
typedef u32 uptr;
typedef u32 OSIntrMode;
// clang-format off
extern asm OSIntrMode OS_EnableInterrupts(void);
// clang-format on
// clang-format off
extern asm OSIntrMode OS_DisableInterrupts(void);
// clang-format on
// clang-format off
extern asm OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
// clang-format on
extern void OS_Halt(void);
extern char SDK_AUTOLOAD_DTCM_START[];
OSIntrMode OS_EnableInterrupts(void);
OSIntrMode OS_DisableInterrupts(void);
OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
static inline BOOL OS_EnableIrq(void) {
    u16 prep = (*(volatile u16 *) 0x04000208);

    (*(volatile u16 *) 0x04000208) = 1;
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep = (*(volatile u16 *) 0x04000208);

    (*(volatile u16 *) 0x04000208) = (u16) enable;
    return (BOOL) prep;
}
void OS_WaitInterrupt(BOOL clear, u32 irqFlags) {
    OSIntrMode cpsrIrq = OS_DisableInterrupts();
    BOOL prevIrq       = OS_EnableIrq();

    if (clear) {
        (*(volatile u32 *) ((uptr) SDK_AUTOLOAD_DTCM_START + 0x3FF8)) &= ~irqFlags;
    }

    while (!(irqFlags & (*(volatile u32 *) ((uptr) SDK_AUTOLOAD_DTCM_START + 0x3FF8)))) {
        OS_Halt();
        (void) OS_EnableInterrupts();
        (void) OS_DisableInterrupts();
    }

    (*(volatile u32 *) ((uptr) SDK_AUTOLOAD_DTCM_START + 0x3FF8)) &= ~irqFlags;

    (void) OS_RestoreIrq(prevIrq);
    (void) OS_RestoreInterrupts(cpsrIrq);
}
