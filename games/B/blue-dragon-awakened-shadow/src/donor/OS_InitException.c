/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InstallExceptionVector from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/os/calls/OSi_InstallExceptionVector.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void OSi_ExceptionHandler(void);
extern char OSi_DebuggerHandler[];
void OS_InitException(void) {
    unsigned int v = *(volatile unsigned int *) 0x027FFD9Cu;
    if (v >= 0x02600000u && v < 0x02800000u) {
        *(unsigned int *) OSi_DebuggerHandler = v;
    } else {
        *(unsigned int *) OSi_DebuggerHandler = 0;
    }
    if (*(unsigned int *) OSi_DebuggerHandler == 0) {
        *(volatile void **) 0x027FFD9Cu = (void *) OSi_ExceptionHandler;
        {
            volatile char *base                = (volatile char *) 0x027E3000u;
            *(volatile void **) (base + 0xFDC) = (void *) OSi_ExceptionHandler;
        }
    }
    *(unsigned int *) (OSi_DebuggerHandler + 8) = 0;
}
