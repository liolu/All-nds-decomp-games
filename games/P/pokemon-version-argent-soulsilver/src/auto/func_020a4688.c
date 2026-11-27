/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a4688 from https://github.com/ntrtwl/NitroWiFi libraries/cps/src/network.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020d4a50(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
typedef u8 CPSMacAddress[6];
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
extern CPSMacAddress data_021d4b28;
enum EthernetHeaderOffset {
    ETHERNET_OFFSET_MAC_DEST   = 0,
    ETHERNET_OFFSET_MAC_SOURCE = 6,
    ETHERNET_OFFSET_TYPE       = 12,
};
extern CPSMacAddress data_021d4b28;
CPSInAddr func_020a3e44(CPSInAddr ip);
BOOL func_020a3ea4(CPSInAddr ip);
void func_020a3f64(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len);
CPSMacAddress *func_020a4310(CPSInAddr ip);
CPSMacAddress *func_020a44dc(CPSInAddr ip);
void func_020a4688(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len, CPSInAddr ip_to, u16 type) {
    hdr -= 14;
    hdr_len += 14;

    (*(u16 *) (&hdr[ETHERNET_OFFSET_TYPE])) = CPS_htons((u16) (type));

    if (!func_020a3ea4(ip_to)) {
        ip_to = func_020a3e44(ip_to);
        if (ip_to == 0) {
            return;
        }
        CPSMacAddress *mac_to = func_020a4310(ip_to);
        if (mac_to == 0) {
            mac_to = func_020a44dc(ip_to);
        }
        if (mac_to == 0) {
            return;
        }
        func_020d4a50(mac_to, &hdr[ETHERNET_OFFSET_MAC_DEST], sizeof(CPSMacAddress));
    } else {
        hdr[ETHERNET_OFFSET_MAC_DEST]     = 1;
        hdr[ETHERNET_OFFSET_MAC_DEST + 1] = 0;
        hdr[ETHERNET_OFFSET_MAC_DEST + 2] = 0x5E;
        hdr[ETHERNET_OFFSET_MAC_DEST + 3] = (ip_to >> 16) & 0x7F;
        hdr[ETHERNET_OFFSET_MAC_DEST + 4] = ip_to >> 8;
        hdr[ETHERNET_OFFSET_MAC_DEST + 5] = ip_to;
    }

    func_020d4a50(data_021d4b28, &hdr[ETHERNET_OFFSET_MAC_SOURCE], sizeof(CPSMacAddress));
    func_020a3f64(hdr, hdr_len, body, body_len);
}
