/* near start: 9 diffs with profile "1.2/sp3" */
#include "m2c.h"
typedef struct {
    u8 a, b, c, d;
} Four;
typedef struct {
    u8 len;
    u8 fam;
    u16 port;
    s32 addr;
} SockAddr;
typedef struct {
    u8 pad[0xc];
    u8 **list;
} HostEnt;
extern s32 *data_0210fd58;
extern char data_020fd134[];
char *func_02075e88(u8 *, s32);
char *strcpy(char *, const char *);
s32 func_020068c0(char *, char *, u8 *, char *);
s32 inet_addr(char *);
HostEnt *SOC_GetHostByName(char *);
s32 socket(s32, s32, s32);
s32 func_0205c168(s32, SockAddr *, s32);
void closesocket(s32);
s32 func_02075ee0(u8 *ctx) {
    SockAddr sa;
    char buf[128];
    char *t;
    HostEnt *h;
    u8 *src;
    u8 *d;
    t = func_02075e88(ctx + 0xc, 0x14);
    if (data_0210fd58 != 0) {
        strcpy(buf, (const char *) data_0210fd58);
    } else {
        func_020068c0(buf, data_020fd134, ctx + 0xc, t);
    }
    sa.fam  = 2;
    sa.port = 0xee70;
    sa.addr = inet_addr(buf);
    if (sa.addr == -1) {
        h = SOC_GetHostByName(buf);
        if (h == 0) {
            return 2;
        }
        src                        = *h->list;
        *(Four *) ((s32) &sa.addr) = *(Four *) src;
    }
    if (*(s32 *) (ctx + 0x6b4) == -1) {
        *(s32 *) (ctx + 0x6b4) = socket(2, 1, 0);
        if (*(s32 *) (ctx + 0x6b4) == -1) {
            return 1;
        }
    }
    if (func_0205c168(*(s32 *) (ctx + 0x6b4), &sa, 8) == 0) {
        return 0;
    }
    closesocket(*(s32 *) (ctx + 0x6b4));
    *(s32 *) (ctx + 0x6b4) = -1;
    return 3;
}
