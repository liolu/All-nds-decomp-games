/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* send_ether from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void MI_CpuCopy8(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
typedef u8 CPSMacAddress[6];
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
extern CPSMacAddress CPSMyMac;
enum EthernetHeaderOffset {
    ETHERNET_OFFSET_MAC_DEST   = 0,
    ETHERNET_OFFSET_MAC_SOURCE = 6,
    ETHERNET_OFFSET_TYPE       = 12,
};
extern CPSMacAddress CPSMyMac;
CPSInAddr get_targetip(CPSInAddr ip);
BOOL is_multicast(CPSInAddr ip);
void send_packet(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len);
CPSMacAddress *inq_arpcache(CPSInAddr ip);
CPSMacAddress *arprequest(CPSInAddr ip);
void send_ether(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len, CPSInAddr ip_to, u16 type) {
    hdr -= 14;
    hdr_len += 14;

    (*(u16 *) (&hdr[ETHERNET_OFFSET_TYPE])) = CPS_htons((u16) (type));

    if (!is_multicast(ip_to)) {
        ip_to = get_targetip(ip_to);
        if (ip_to == 0) {
            return;
        }
        CPSMacAddress *mac_to = inq_arpcache(ip_to);
        if (mac_to == 0) {
            mac_to = arprequest(ip_to);
        }
        if (mac_to == 0) {
            return;
        }
        MI_CpuCopy8(mac_to, &hdr[ETHERNET_OFFSET_MAC_DEST], sizeof(CPSMacAddress));
    } else {
        hdr[ETHERNET_OFFSET_MAC_DEST]     = 1;
        hdr[ETHERNET_OFFSET_MAC_DEST + 1] = 0;
        hdr[ETHERNET_OFFSET_MAC_DEST + 2] = 0x5E;
        hdr[ETHERNET_OFFSET_MAC_DEST + 3] = (ip_to >> 16) & 0x7F;
        hdr[ETHERNET_OFFSET_MAC_DEST + 4] = ip_to >> 8;
        hdr[ETHERNET_OFFSET_MAC_DEST + 5] = ip_to;
    }

    MI_CpuCopy8(CPSMyMac, &hdr[ETHERNET_OFFSET_MAC_SOURCE], sizeof(CPSMacAddress));
    send_packet(hdr, hdr_len, body, body_len);
}
