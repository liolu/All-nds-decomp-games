/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* tcpip from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
enum EthernetHeaderOffset {
    ETHERNET_OFFSET_MAC_DEST   = 0,
    ETHERNET_OFFSET_MAC_SOURCE = 6,
    ETHERNET_OFFSET_TYPE       = 12,
};
extern void tcpip(void *unused);
u8 *receive_packet(u32 *len);
void throw_packet(void);
void dispatch_arp(u8 *buf, u32 len);
void dispatch_ip(u8 *buf, u32 len);
void tcpip(void *unused) {
    u32 len;

    while (1) {
        u8 *buf = receive_packet(&len);
        if (len > 14 + 20) {
            switch ((CPS_htons((*(u16 *) (&buf[ETHERNET_OFFSET_TYPE]))))) {
                case 0x800:
                    dispatch_ip(buf + 14, len - 14);
                    break;
                case 0x806:
                    dispatch_arp(buf + 14, len - 14);
                    break;
            }
        }

        throw_packet();
    }
}
