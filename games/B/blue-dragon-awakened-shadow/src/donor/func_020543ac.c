/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWCi_SendGPBuddyMsgCommand from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/match_command.c (license:
 * none), reused by tools/donor_match.py */
extern unsigned strlen(const char *str);
typedef unsigned long u32;
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
extern int OS_SNPrintf(char *dest, u32 len, const char *format, ...);
extern int func_020543ac(void *connection, int command, u32 profile, const char *args);
extern const char data_020fa888[];
extern const char data_020fa890[];
extern const char data_020fa898[];
extern int gpSendBuddyMessageA(void *connection, u32 profile, const char *message);
int func_020543ac(void *connection, int command, u32 profile, const char *args) {
    char message[512];
    int n = OS_SNPrintf(message, 512, data_020fa888, data_020fa890, 3, data_020fa898);
    char *end;
    message[n]       = command;
    (message + 1)[n] = 0;
    end              = message + 1 + n;
    if (args) {
        u32 size = strlen(args);
        if (n + 2 + size > 512) {
            size = 511 - (n + 1);
        }
        MI_CpuCopy8(args, end, size);
        end[size] = 0;
    }
    return gpSendBuddyMessageA(connection, profile, message);
}
