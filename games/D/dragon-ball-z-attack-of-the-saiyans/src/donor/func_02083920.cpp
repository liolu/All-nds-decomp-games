/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _Z24SetDMACompletionCallbackiPFviEi from https://github.com/DQIX/dqix-decomp src/NitroSDK/InterruptHandler.cpp (license:
 * Unlicense), reused by tools/donor_match.py */
typedef void (*DMACompletionCallback)(int userdata);
extern void SetDMACompletionCallback(int channel, DMACompletionCallback callback, int userdata);
extern unsigned int EnableSpecificInterrupts(unsigned int flagMask);
struct DMAOrTimerResponse {
    DMACompletionCallback callback;
    unsigned int stayEnabledAfter;
    int userdata;
};
extern DMAOrTimerResponse data_020d859c[8];
inline DMACompletionCallback &CallbackByIndex(int n, int base = 0) {
    return *(DMACompletionCallback *) ((unsigned int) &data_020d859c[base].callback + n * sizeof(DMAOrTimerResponse));
}
inline unsigned int &ShouldStayEnabledByIndex(int n, int base = 0) {
    return *(unsigned int *) ((unsigned int) &data_020d859c[base].stayEnabledAfter + n * sizeof(DMAOrTimerResponse));
}
inline int &CallbackUserdataByIndex(int n, int base = 0) {
    return *(int *) ((unsigned int) &data_020d859c[base].userdata + n * sizeof(DMAOrTimerResponse));
}
void SetDMACompletionCallback(int channel, DMACompletionCallback callback, int userdata) {
    CallbackByIndex(channel)          = callback;
    CallbackUserdataByIndex(channel)  = userdata;
    unsigned int prior                = EnableSpecificInterrupts(1 << (channel + 8));
    ShouldStayEnabledByIndex(channel) = prior & (1 << (channel + 8));
}
