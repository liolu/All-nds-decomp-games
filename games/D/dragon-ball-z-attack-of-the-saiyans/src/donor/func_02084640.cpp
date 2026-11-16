/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _Z26InitializeContextRegistersP16ProcessorContextjj from projets/battle-of-giants-dinosaurs/src/donor/func_0203f298.cpp
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef unsigned long long uint64_t;
struct ProcessorContext;
struct Alarm {

    typedef void (*PFNCompletion)(ProcessorContext **);

    PFNCompletion completionProc;
    ProcessorContext **ppContext;
    unsigned int unknown_8;
    uint64_t alarmTime;
    Alarm *pPrev;
    Alarm *pNext;
    uint64_t alarmIntervalLength;
    uint64_t alarmIntervalResidue;
};
struct ProcessorContext;
struct Mutex;
struct MutexList {
    Mutex *pFirst;
    Mutex *pLast;
};
struct BlockedContextList {
    ProcessorContext *first;
    ProcessorContext *last;

    void Insert(ProcessorContext *context);
    ProcessorContext *PopFront();

    ProcessorContext *Remove(ProcessorContext *context);
};
struct ProcessorContext {
    typedef void (*ExitRoutine)(int maybeExitCode);

    unsigned int programStatusRegister;
    unsigned int userModeRegisters[15];
    unsigned int resumeAddress;
    unsigned int supervisorStackPointer;

    struct MathRegisters {
        unsigned long long div_numer;
        unsigned long long div_denom;
        unsigned long long sqrt_param;
        unsigned short div_control;
        unsigned short sqrt_control;
    } mathRegisters;

    int blockState;

    ProcessorContext *pNext;
    unsigned int uniqueID;
    unsigned int priority;
    unsigned int unknown_74;
    BlockedContextList *containerBlockedQueue;
    ProcessorContext *pPrevBlocked;
    ProcessorContext *pNextBlocked;
    Mutex *blockingMutex;
    MutexList lockedMutexes;
    unsigned int stackTop;
    unsigned int stackBottom;
    unsigned int stackUnknownTopSubspaceSize;
    BlockedContextList contextsAwaitingThisCompletion;
    unsigned int unknown_A4;
    unsigned int unknown_A8;
    unsigned int unknown_AC;
    Alarm *sleepAlarm;
    ExitRoutine exitProc;
    unsigned int unknown_B8;
    unsigned int unknown_BC;
};
extern void InitializeContextRegisters(ProcessorContext *context, unsigned int startAddress, unsigned int stackBottom);
struct Mutex {
    BlockedContextList waitingContexts_;
    ProcessorContext *ownedContext_;

    unsigned int ownerRefcount_;
    Mutex *pNext_;
    Mutex *pPrev_;
};
void InitializeContextRegisters(ProcessorContext *context, unsigned int startAddress, unsigned int stackBottom) {
    unsigned int resumeAddress      = startAddress + 4;
    context->resumeAddress          = resumeAddress;
    context->supervisorStackPointer = stackBottom;
    stackBottom -= 0x40;

    __asm("tst stackBottom, 4");
    __asm("bne adjustStackPtr");
    __asm("b skipAdjustStackPtr");

    __asm("adjustStackPtr:");
    stackBottom -= 4;
    __asm("skipAdjustStackPtr:");
    context->userModeRegisters[13] = stackBottom;

    unsigned int status;
    __asm("ands status, resumeAddress, 1");
    __asm("bne thumb_mode");
    __asm("b skip_thumb_mode_assignment");
    __asm("thumb_mode:");
    status = 0x1f | (1 << 5);
    __asm("skip_thumb_mode_assignment:");
    __asm("beq arm_mode");
    __asm("b skip_arm_mode_assignment");
    __asm("arm_mode:");
    status = 0x1f;
    __asm("skip_arm_mode_assignment:");

    context->programStatusRegister = status;
    context->userModeRegisters[0]  = 0;
    context->userModeRegisters[1]  = 0;
    context->userModeRegisters[2]  = 0;
    context->userModeRegisters[3]  = 0;
    context->userModeRegisters[4]  = 0;
    context->userModeRegisters[5]  = 0;
    context->userModeRegisters[6]  = 0;
    context->userModeRegisters[7]  = 0;
    context->userModeRegisters[8]  = 0;
    context->userModeRegisters[9]  = 0;
    context->userModeRegisters[10] = 0;
    context->userModeRegisters[11] = 0;
    context->userModeRegisters[12] = 0;
    context->userModeRegisters[14] = 0;
}
