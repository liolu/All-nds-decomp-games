/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GetLocalPort from https://github.com/LagoLunatic/ooe libs/GameSpy/natneg/NATify.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct SOInAddr {
    int addr;
} SOInAddr;
struct SOSockAddrIn {
    u8 _pad;
    u8 family;
    u16 port;
    SOInAddr addr;
};
typedef struct SOSockAddr {
    int len;
} SOSockAddr;
typedef int SOCKET;
typedef struct SOSockAddr SOCKADDR;
extern int getsockname(SOCKET sock, SOCKADDR *addr, int *len);
unsigned short func_02070764(SOCKET sock) {
    int ret;
    struct SOSockAddrIn saddr;
    int saddrlen = sizeof(saddr);
    ret          = getsockname(sock, (struct SOSockAddr *) &saddr, &saddrlen);
    if (((ret) == -1)) {
        return 0;
    }
    return saddr.port;
}
