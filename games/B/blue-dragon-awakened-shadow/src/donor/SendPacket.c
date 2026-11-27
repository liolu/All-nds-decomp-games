/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SendPacket from https://github.com/LagoLunatic/ooe libs/GameSpy/natneg/natneg.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
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
extern int sendto(SOCKET sock, const char *buf, int len, int flags, const SOCKADDR *addr, int tolen);
void SendPacket(SOCKET sock, unsigned int toaddr, unsigned short toport, void *data, int len) {
    struct SOSockAddrIn saddr;
    saddr.family    = 2;
    saddr.port      = SOC_HtoNs(toport);
    saddr.addr.addr = toaddr;
    sendto(sock, (char *) data, len, 0, (struct SOSockAddr *) &saddr, sizeof(saddr));
}
