/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a3db4 from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
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
u32 func_020a3cc8(u8 *s, u32 len, u32 sum);
BOOL func_020a3db4(u8 *tcpudp_hdr, u32 len, u8 *ip_hdr, u16 protocol) {
    u32 sum = func_020a3cc8(tcpudp_hdr, len, protocol);
    sum     = func_020a3cc8(&ip_hdr[IP_OFFSET_SOURCE_ADDRESS], sizeof(CPSInAddr) * 2, sum);
    sum += len;

    if (sum & 0x10000) {
        sum = (sum + 1) & 0xFFFF;
    }

    return sum != 0xFFFF;
}
