/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a50c4 from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
typedef u8 CPSMacAddress[6];
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
enum Protocol {
    PROTOCOL_ICMP = 1,
    PROTOCOL_TCP  = 6,
    PROTOCOL_UDP  = 17,
};
enum IPHeaderOffset {
    IP_OFFSET_VERSION_IHL    = 0,
    IP_OFFSET_DSCP_ECN       = 1,
    IP_OFFSET_TOTAL_LENGTH   = 2,
    IP_OFFSET_ID             = 4,
    IP_OFFSET_FRAG_OFFSET    = 6,
    IP_OFFSET_TTL            = 8,
    IP_OFFSET_PROTOCOL       = 9,
    IP_OFFSET_CHECKSUM       = 10,
    IP_OFFSET_SOURCE_ADDRESS = 12,
    IP_OFFSET_DEST_ADDRESS   = 16,
    IP_OFFSET_OPTIONS        = 20,
};
enum ICMPHeaderOffset {
    ICMP_OFFSET_TYPE     = 0,
    ICMP_OFFSET_CODE     = 1,
    ICMP_OFFSET_CHECKSUM = 2,
    ICMP_OFFSET_DATA     = 4,
};
enum ICMPMessageType {
    ICMP_ECHO_REPLY   = 0,
    ICMP_ECHO_REQUEST = 8,
};
u16 func_020a3d98(u8 *s, u32 len);
CPSInAddr func_020a3e44(CPSInAddr ip);
CPSMacAddress *func_020a4310(CPSInAddr ip);
void func_020a43e0(CPSInAddr ip);
void func_020a4880(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len, CPSInAddr ip_to, u8 protocol);
void func_020a50c4(u8 *iphdr, u8 *icmpdata, u32 len) {
    CPSInAddr ip_reply_to = func_020a3e44((((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_SOURCE_ADDRESS])))) << 16) |
                                           (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_SOURCE_ADDRESS]) + 2))))));
    if (ip_reply_to == 0) {
        return;
    }
    if (func_020a4310(ip_reply_to) == 0) {
        func_020a43e0(ip_reply_to);
        return;
    }

    icmpdata[ICMP_OFFSET_TYPE]                   = ICMP_ECHO_REPLY;
    (*(u16 *) (&icmpdata[ICMP_OFFSET_CHECKSUM])) = CPS_htons((u16) (0));
    (*(u16 *) (&icmpdata[ICMP_OFFSET_CHECKSUM])) = CPS_htons((u16) (func_020a3d98(icmpdata, len)));
    func_020a4880(icmpdata, len, 0, 0,
                  (((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_SOURCE_ADDRESS])))) << 16) |
                   (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_SOURCE_ADDRESS]) + 2))))),
                  PROTOCOL_ICMP);
}
