/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209cbe0 from https://github.com/ntrtwl/NitroWiFi libraries/soc/src/soc.c (license: none), reused by
 * tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
typedef CPSInAddr SOCLInAddr;
extern int func_0209b9cc(int, const void *buffer, int buffer_len, u16 port, SOCLInAddr ip, int flags);
typedef struct SOCInAddr {
    u32 addr;
} SOCInAddr;
typedef struct SOCSockAddrIn {
    u8 len;
    u8 family;
    u16 port;
    SOCInAddr addr;
} SOCSockAddrIn;
extern u32(SOC_NtoHl)(u32 netlong);
extern u16(SOC_NtoHs)(u16 netshort);
extern u32(SOC_HtoNl)(u32 hostlong);
extern u16(SOC_HtoNs)(u16 hostshort);
extern int func_0209cbe0(int s, const void *buf, int len, int flags, const void *sockTo);
int func_0209cbe0(int s, const void *buf, int len, int flags, const void *sockTo) {
    SOCSockAddrIn *addr;
    u16 port;
    SOCLInAddr ip;

    if (sockTo) {
        addr = (SOCSockAddrIn *) sockTo;
        port = ((u16) ((((u16) (addr->port) >> 8) & 0x00ff) | (((u16) (addr->port) << 8) & 0xff00)));
        ip   = ((u32) ((((u32) (addr->addr.addr) >> 24) & 0x000000ff) | (((u32) (addr->addr.addr) >> 8) & 0x0000ff00) |
                     (((u32) (addr->addr.addr) << 8) & 0x00ff0000) | (((u32) (addr->addr.addr) << 24) & 0xff000000)));
    } else {
        port = 0;
        ip   = 0;
    }

    return func_0209b9cc(s, buf, len, port, ip, flags);
}
