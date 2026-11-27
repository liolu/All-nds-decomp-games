/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a4758 from https://github.com/Project-Holon/aletheia src/game/ov009/cps_network.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u32 OSIntrMode;
struct CPSNetVars {
    u8 data_021d4640;
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
extern struct CPSNetVars data_021d4640;
extern OSIntrMode _Z20DisableIRQInterruptsv(void);
extern OSIntrMode _Z20SetIRQInterruptStatei(OSIntrMode state);
extern void func_020d4a50(const void *src, void *dest, u32 size);
extern unsigned short func_020a3d98(unsigned char *s, int len);
extern int func_020a3ea4(unsigned v);
extern void func_020a3fc0(u8 *srcAddr, u8 *dstAddr, u8 *buf1, u32 size1, u8 *buf2, u32 size2);
extern void func_020a4688(unsigned char *hdr, unsigned long hdr_len, unsigned char *body, unsigned long body_len,
                          unsigned long ip_to, unsigned short type);
extern void func_020a4758(unsigned char *hdr, unsigned long hdr_len, unsigned char *body, unsigned long body_len,
                          unsigned long ip_to, unsigned long offset);
extern u8 data_021106b0[];
extern unsigned char data_021d4b28[6];
extern int (*link_is_on)(void);
extern u32 offered_myip;
extern void (*dhcp_callback)(void);
extern u32 xid;
extern u32 lease_time;
extern u8 data_021d4b28[6];
static inline unsigned short swap16(unsigned short x) {
    return (unsigned short) ((x >> 8) | (x << 8));
}
void func_020a4758(unsigned char *hdr, unsigned long hdr_len, unsigned char *body, unsigned long body_len, unsigned long ip_to,
                   unsigned long offset) {
    unsigned long enabled;

    *(unsigned short *) (hdr - 0x12) = swap16((unsigned short) (hdr_len + 0x14 + body_len));
    *(unsigned short *) (hdr - 0xe)  = swap16((unsigned short) offset);
    *(unsigned short *) (hdr - 0xa)  = 0;
    *(unsigned short *) (hdr - 0xa)  = swap16(func_020a3d98(hdr - 0x14, 0x14));
    if (ip_to != 0x7f000001 && ip_to != data_021d4640.myip) {
        func_020a4688(hdr - 0x14, hdr_len + 0x14, body, body_len, ip_to, 0x800);
    }
    if (ip_to != 0x7f000001 && ip_to != data_021d4640.myip && !func_020a3ea4(ip_to)) {
        return;
    }
    func_020d4a50(data_021106b0, hdr - 0x1c, 8);
    enabled = _Z20DisableIRQInterruptsv();
    func_020a3fc0(data_021d4b28, data_021d4b28, hdr - 0x1c, hdr_len + 0x1c, body, body_len);
    _Z20SetIRQInterruptStatei(enabled);
}
void func_020a4688(unsigned char *hdr, unsigned long hdr_len, unsigned char *body, unsigned long body_len, unsigned long ip_to,
                   unsigned short type);
void func_020a3fc0(u8 *srcAddr, u8 *dstAddr, u8 *buf1, u32 size1, u8 *buf2, u32 size2);
int func_020a3ea4(unsigned v);
unsigned short func_020a3d98(unsigned char *s, int len);
