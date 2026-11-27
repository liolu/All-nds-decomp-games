/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a52c8 from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
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
void func_020a50c4(u8 *iphdr, u8 *icmpdata, u32 len);
void func_020a51a8(u8 *iphdr, u8 *icmpdata, u32 len);
BOOL func_020a52a8(CPSInAddr ip1, CPSInAddr ip2);
void func_020a52c8(u8 *iphdr, u8 *icmpdata, u32 len) {
    if (func_020a3d98(icmpdata, len) != 0xFFFF ||
        !func_020a52a8((((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_SOURCE_ADDRESS])))) << 16) |
                        (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_SOURCE_ADDRESS]) + 2))))),
                       (((u32) (CPS_htons((*(u16 *) (&iphdr[IP_OFFSET_DEST_ADDRESS])))) << 16) |
                        (CPS_htons((*(u16 *) ((&iphdr[IP_OFFSET_DEST_ADDRESS]) + 2))))))) {
        return;
    }

    switch (icmpdata[ICMP_OFFSET_TYPE]) {
        case ICMP_ECHO_REPLY:
            func_020a51a8(iphdr, icmpdata, len);
            break;
        case ICMP_ECHO_REQUEST:
            func_020a50c4(iphdr, icmpdata, len);
            break;
    }
}
