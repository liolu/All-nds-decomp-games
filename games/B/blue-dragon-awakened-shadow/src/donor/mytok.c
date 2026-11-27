/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* mytok from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroDWC/src/sb_server.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef struct SBServer SBServer;
struct SBServer {
    u32 publicIp;
    u16 publicPort;
    u32 privateIp;
    u16 privatePort;
    u32 icmpIp;
    u8 state;
    u8 flags;
    void *keyValues;
    u32 updateTime;
    SBServer *next;
};
typedef struct SBServerGlobals {
    char *tokenNext;
    SBServer *nullServer;
    void *refStrings;
} SBServerGlobals;
extern SBServerGlobals data_0210fd4c;
extern char *mytok(char *input, int delim);
char *mytok(char *input, int delim) {
    int ch;
    char *p, *start;
    if (input) {
        data_0210fd4c.tokenNext = input;
    }
    start = data_0210fd4c.tokenNext;
    p     = start;
    while ((ch = *p) != 0 && ch != delim) {
        p++;
        data_0210fd4c.tokenNext = p;
    }
    if (p == start) {
        start = ((void *) 0);
    }
    if (ch == 0) {
        return start;
    }
    {
        char *next              = data_0210fd4c.tokenNext;
        *p                      = 0;
        data_0210fd4c.tokenNext = next + 1;
    }
    return start;
}
