#include "m2c.h"

extern M2C_UNK OSi_SystemCallbackInSwitchThread;

u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32 arg0);
void OSi_ExitThread_Destroy(void);
void OS_DisableScheduler(void);
void OSi_UnlockAllMutex(void *arg0);
void OSi_CancelThreadAlarmForSleep(void *arg0);
void OSi_RemoveSpecifiedLinkFromQueue(s32 arg0, void *arg1);
void OSi_RemoveThreadFromList(void *arg0);
void OS_WakeupThread(void *arg0);
void OS_EnableScheduler(void);
void OS_RescheduleThread(void);

void OS_DestroyThread(u8 *param_1) {
    u32 state;

    state = OS_DisableInterrupts();
    if (*(u8 **) ((u8 *) &OSi_SystemCallbackInSwitchThread + 0x28) == param_1) {
        OSi_ExitThread_Destroy();
    }
    OS_DisableScheduler();
    OSi_UnlockAllMutex(param_1);
    OSi_CancelThreadAlarmForSleep(param_1);
    if (*(u32 *) (param_1 + 0x78) != 0) {
        OSi_RemoveSpecifiedLinkFromQueue(*(u32 *) (param_1 + 0x78), param_1);
    }
    OSi_RemoveThreadFromList(param_1);
    *(u32 *) (param_1 + 0x64) = 2;
    OS_WakeupThread(param_1 + 0x9C);
    OS_EnableScheduler();
    OS_RestoreInterrupts(state);
    OS_RescheduleThread();
}
