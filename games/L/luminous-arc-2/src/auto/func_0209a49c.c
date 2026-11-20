/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209a49c from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
extern void func_02098a98(void);
extern void func_02098acc(void);
extern void func_02098a38(u16 local_port, u16 remote_port, CPSInAddr remote_ip);
extern void func_02098a0c(void);
enum Port {
    PORT_DNS             = 53,
    PORT_DHCP_SERVER     = 67,
    PORT_DHCP_CLIENT     = 68,
    PORT_NB_NAME_SERVICE = 137,
};
enum ResolveResult {
    RESOLVE_RESULT_FATAL_ERROR   = -1,
    RESOLVE_RESULT_SUCCESS       = 1,
    RESOLVE_RESULT_NAME_TOO_LONG = 2,
};
enum DNSType {
    DNS_TYPE_A   = 1,
    DNS_TYPE_PTR = 12,
    DNS_TYPE_NB  = 32,
};
void func_02098a0c(void);
void func_02098a38(u16 local_port, u16 remote_port, CPSInAddr remote_ip);
void func_02098a98(void);
void func_02098acc(void);
CPSInAddr func_0209a124(u8 *name, u32 type, u16 id, u8 *rname, u32 rname_max);
CPSInAddr func_0209a49c(u8 *name, u32 dnsip, u16 id) {
    if (dnsip == 0) {
        return RESOLVE_RESULT_FATAL_ERROR;
    }

    func_02098a98();
    func_02098a0c();
    func_02098a38(0, PORT_DNS, dnsip);
    CPSInAddr ip = func_0209a124(name, DNS_TYPE_A, id, 0, 0);
    func_02098acc();
    return ip;
}
