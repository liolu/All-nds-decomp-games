/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a83fc from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
extern void func_020a6930(void);
extern void func_020a6964(void);
extern void func_020a68d0(u16 local_port, u16 remote_port, CPSInAddr remote_ip);
extern void func_020a68a4(void);
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
void func_020a68a4(void);
void func_020a68d0(u16 local_port, u16 remote_port, CPSInAddr remote_ip);
void func_020a6930(void);
void func_020a6964(void);
CPSInAddr func_020a8084(u8 *name, u32 type, u16 id, u8 *rname, u32 rname_max);
CPSInAddr func_020a83fc(u8 *name, u32 dnsip, u16 id) {
    if (dnsip == 0) {
        return RESOLVE_RESULT_FATAL_ERROR;
    }

    func_020a6930();
    func_020a68a4();
    func_020a68d0(0, PORT_DNS, dnsip);
    CPSInAddr ip = func_020a8084(name, DNS_TYPE_A, id, 0, 0);
    func_020a6964();
    return ip;
}
