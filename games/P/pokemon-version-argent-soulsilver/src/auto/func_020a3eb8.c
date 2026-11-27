/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a3eb8 from https://github.com/Project-Holon/aletheia src/game/ov009/cps_network.c (license: none (MIT = tooling
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
extern unsigned long func_020a3e68(unsigned long ip);
extern int func_020a3ea4(unsigned v);
extern unsigned long func_020a3eb8(unsigned long ip);
extern int (*link_is_on)(void);
extern u32 offered_myip;
extern void (*dhcp_callback)(void);
extern u32 xid;
extern u32 lease_time;
unsigned long func_020a3eb8(unsigned long ip) {
    unsigned long my = data_021d4640.myip;
    int d            = 1;
    int c            = 1;
    int b            = 1;
    int a            = 1;

    if (my != 0 && ip != my) {
        a = 0;
    }
    if (!a && ip != 0x7f000001) {
        b = 0;
    }
    if (!b && func_020a3e68(ip) == 0) {
        c = 0;
    }
    if (!c && func_020a3ea4(ip) == 0) {
        d = 0;
    }
    return d;
}
int func_020a3ea4(unsigned v);
unsigned long func_020a3e68(unsigned long ip);
