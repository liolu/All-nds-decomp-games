/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SendPacket from projets/blue-dragon-awakened-shadow/src/donor/SendPacket.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
inline u32 SOC_HtoNs(u16 val) {
    return ((val >> 0x08) & 0x000000FF) | ((val << 0x08) & 0x0000FF00);
}
typedef struct SOSockAddr {
    int len;
} SOSockAddr;
typedef int SOCKET;
typedef struct SOSockAddr SOCKADDR;
extern int func_020aa9c8(SOCKET sock, const char *buf, int len, int flags, const SOCKADDR *addr, int tolen);
void func_020bee68(SOCKET sock, unsigned int toaddr, unsigned short toport, void *data, int len) {
    struct SOSockAddrIn saddr;
    saddr.family    = 2;
    saddr.port      = SOC_HtoNs(toport);
    saddr.addr.addr = toaddr;
    func_020aa9c8(sock, (char *) data, len, 0, (struct SOSockAddr *) &saddr, sizeof(saddr));
}
