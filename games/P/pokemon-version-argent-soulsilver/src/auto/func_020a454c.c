/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a454c from https://github.com/Project-Holon/aletheia src/game/ov009/cps_network.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
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
typedef struct CpsArpEntry {
    unsigned long ip;
    unsigned char mac[6];
    unsigned short when;
} CpsArpEntry;
extern OSTick func_020d34b0(void);
extern void func_020d4a50(const void *src, void *dest, u32 size);
extern unsigned long func_020a3e04(unsigned long ip);
extern int func_020a3ea4(unsigned v);
extern void func_020a454c(unsigned char (*mac)[6], unsigned long ip, int new_entry);
extern CpsArpEntry data_021d46c0[8];
extern int (*link_is_on)(void);
extern u32 offered_myip;
extern void (*dhcp_callback)(void);
extern u32 xid;
extern u32 lease_time;
void func_020a454c(unsigned char (*mac)[6], unsigned long ip, int new_entry) {
    unsigned long i;
    unsigned long candidate;
    unsigned short now;
    unsigned short oldest_time;

    if (ip == 0x7f000001 || ip == data_021d4640.myip) {
        return;
    }
    if (!func_020a3e04(ip)) {
        return;
    }
    if (func_020a3ea4(ip)) {
        return;
    }
    now = (unsigned short) (func_020d34b0() >> 16);
    for (i = 0; i < 8; i++) {
        if (data_021d46c0[i].ip == ip) {
            data_021d46c0[i].when = now;
            func_020d4a50(mac, data_021d46c0[i].mac, 6);
            return;
        }
    }
    if (!new_entry) {
        return;
    }
    oldest_time = 0;
    candidate   = 0;
    for (i = 0; i < 8; i++) {
        if (data_021d46c0[i].ip == 0) {
            candidate = i;
            break;
        }
        if ((short) (now - data_021d46c0[i].when) > oldest_time) {
            candidate   = i;
            oldest_time = now - data_021d46c0[i].when;
        }
    }
    data_021d46c0[candidate].ip = ip;
    func_020d4a50(mac, data_021d46c0[candidate].mac, 6);
    data_021d46c0[candidate].when = now;
}
int func_020a3ea4(unsigned v);
unsigned long func_020a3e04(unsigned long ip);
