/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* reg_arpcache from https://github.com/Project-Holon/aletheia src/game/ov009/cps_network.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
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
typedef struct CpsArpEntry {
    unsigned long ip;
    unsigned char mac[6];
    unsigned short when;
} CpsArpEntry;
extern OSTick OS_GetTick(void);
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
extern unsigned long ip_islocal(unsigned long ip);
extern int is_multicast(unsigned v);
extern void reg_arpcache(unsigned char (*mac)[6], unsigned long ip, int new_entry);
extern CpsArpEntry arpcache[8];
extern int (*link_is_on)(void);
extern u32 offered_myip;
extern void (*dhcp_callback)(void);
extern u32 xid;
extern u32 lease_time;
void reg_arpcache(unsigned char (*mac)[6], unsigned long ip, int new_entry) {
    unsigned long i;
    unsigned long candidate;
    unsigned short now;
    unsigned short oldest_time;

    if (ip == 0x7f000001 || ip == wfailed.myip) {
        return;
    }
    if (!ip_islocal(ip)) {
        return;
    }
    if (is_multicast(ip)) {
        return;
    }
    now = (unsigned short) (OS_GetTick() >> 16);
    for (i = 0; i < 8; i++) {
        if (arpcache[i].ip == ip) {
            arpcache[i].when = now;
            MI_CpuCopy8(mac, arpcache[i].mac, 6);
            return;
        }
    }
    if (!new_entry) {
        return;
    }
    oldest_time = 0;
    candidate   = 0;
    for (i = 0; i < 8; i++) {
        if (arpcache[i].ip == 0) {
            candidate = i;
            break;
        }
        if ((short) (now - arpcache[i].when) > oldest_time) {
            candidate   = i;
            oldest_time = now - arpcache[i].when;
        }
    }
    arpcache[candidate].ip = ip;
    MI_CpuCopy8(mac, arpcache[candidate].mac, 6);
    arpcache[candidate].when = now;
}
int is_multicast(unsigned v);
unsigned long ip_islocal(unsigned long ip);
