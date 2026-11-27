/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a4f80 from https://github.com/Project-Holon/aletheia src/game/ov009/cps_network.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
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
extern int func_020a3f38(unsigned short *a, unsigned short *b);
extern void func_020a454c(unsigned char (*mac)[6], unsigned long ip, int new_entry);
extern void func_020a4ed8(unsigned char *buf);
extern void func_020a4f80(unsigned char *buf, unsigned long len);
extern unsigned char data_021d4b28[6];
extern int (*link_is_on)(void);
extern u32 offered_myip;
extern void (*dhcp_callback)(void);
extern u32 xid;
extern u32 lease_time;
extern u8 data_021d4b28[6];
static inline unsigned short SWAP16(unsigned short v) {
    return (v >> 8) | (v << 8);
}
void func_020a4f80(unsigned char *buf, unsigned long len) {
    unsigned short op;
    unsigned long ipfrom;
    int from_me;
    int to_me;

    if (len < 0x1c) {
        return;
    }
    if (func_020a3f38((short unsigned int *) (buf + 8), (short unsigned int *) data_021d4b28) == 0 ||
        (*(long *) ((char *) &data_021d4640 + (0x50))) == 0) {
        return;
    }
    if (*(unsigned short *) buf != 0x100 || *(unsigned short *) (buf + 2) != 8 || *(unsigned short *) (buf + 4) != 0x406) {
        return;
    }
    op = SWAP16(*(unsigned short *) (buf + 6));
    if (op != 1 && op != 2) {
        return;
    }
    ipfrom = (((unsigned long) SWAP16(*(unsigned short *) (buf + 0xe)) << 16) | SWAP16(*(unsigned short *) ((buf + 0xe) + 2)));
    from_me = (ipfrom == (*(unsigned long *) ((char *) &data_021d4640 + (0x50))));
    to_me =
        ((*(unsigned long *) ((char *) &data_021d4640 + (0x50))) ==
         (((unsigned long) SWAP16(*(unsigned short *) (buf + 0x18)) << 16) | SWAP16(*(unsigned short *) ((buf + 0x18) + 2))));
    if (!from_me) {
        func_020a454c((unsigned char(*)[6])(buf + 8), ipfrom, to_me);
    }
    if (op == 1 && to_me) {
        func_020a4ed8(buf);
        return;
    }
    if (op == 2 && to_me && from_me) {
        (*(unsigned char *) ((char *) &data_021d4640 + (1))) = 1;
    }
}
void func_020a4ed8(unsigned char *buf);
void func_020a454c(unsigned char (*mac)[6], unsigned long ip, int new_entry);
int func_020a3f38(unsigned short *a, unsigned short *b);
