/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* reply_arp from https://github.com/Project-Holon/aletheia src/game/ov009/cps_network.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
struct CPSNetVars {
    u8 wfailed;
    u8 ip_conflict;
    u16 ipid;
    u16 mymss;
    u16 eport;
    u32 pingseq;
    u32 mode;
    u32 netmask;
    void *(*alloc)(u32);
    int (*link_is_on)(void);
    u32 dhcp_server_ip;
    u8 *buf;
    u8 pad24[0x28 - 0x24];
    void (*fixed_ip_hook)(void);
    u32 gateway_ip;
    u32 xid;
    void (*periodic)(void);
    u32 offered_myip;
    u32 lease_time;
    u32 lease_sleep;
    void (*free)(void *);
    int (*dhcp_callback)(void);
    u32 dhcp_state;
    u32 myip;
    void *thread;
    u32 calm;
    volatile u32 bufsize;
    volatile u32 putpnt;
    volatile u32 getpnt;
    u8 mac[8];
    u32 dns[2];
    u64 rand_state;
    u64 rand_mult;
    u64 rand_inc;
};
extern struct CPSNetVars wfailed;
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
extern void send_packet(unsigned char *hdr, unsigned long hdr_len, unsigned char *body, unsigned long body_len);
extern void reply_arp(unsigned char *buf);
extern unsigned char CPSMyMac[6];
extern int (*link_is_on)(void);
extern u32 offered_myip;
extern void (*dhcp_callback)(void);
extern u32 xid;
extern u32 lease_time;
extern u8 CPSMyMac[6];
void reply_arp(unsigned char *buf) {
    unsigned short v;
    *(unsigned short *) (buf + 6) = 0x200;
    MI_CpuCopy8(buf + 8, buf + 0x12, 10);
    MI_CpuCopy8(CPSMyMac, buf + 8, 6);
    v                                = (unsigned short) (wfailed.myip >> 16);
    *(unsigned short *) (buf + 0xe)  = (v >> 8) | (v << 8);
    v                                = (unsigned short) wfailed.myip;
    *(unsigned short *) (buf + 0x10) = (v >> 8) | (v << 8);
    MI_CpuCopy8(buf + 0x12, buf - 0xe, 6);
    MI_CpuCopy8(CPSMyMac, buf - 8, 6);
    send_packet(buf - 0xe, 0x2a, 0, 0);
}
void send_packet(unsigned char *hdr, unsigned long hdr_len, unsigned char *body, unsigned long body_len);
