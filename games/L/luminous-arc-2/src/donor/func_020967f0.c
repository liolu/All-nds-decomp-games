/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* send_ether from projets/blue-dragon-awakened-shadow/src/donor/send_ether.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_0200766c(const void *src, void *dest, u32 size);
extern const u16(*ctrdgi_fl_maxtime);
typedef u32 CPSInAddr;
typedef u8 CPSMacAddress[6];
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
extern CPSMacAddress data_021711ec;
enum EthernetHeaderOffset {
    ETHERNET_OFFSET_MAC_DEST   = 0,
    ETHERNET_OFFSET_MAC_SOURCE = 6,
    ETHERNET_OFFSET_TYPE       = 12,
};
extern CPSMacAddress data_021711ec;
extern CPSInAddr func_02095fac(CPSInAddr ip);
extern BOOL func_0209600c(CPSInAddr ip);
extern void func_020960cc(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len);
extern CPSMacAddress *func_02096478(CPSInAddr ip);
extern CPSMacAddress *func_02096644(CPSInAddr ip);
void func_020967f0(u8 *hdr, u32 hdr_len, u8 *body, u32 body_len, CPSInAddr ip_to, u16 type) {
    hdr -= 14;
    hdr_len += 14;

    (*(u16 *) (&hdr[ETHERNET_OFFSET_TYPE])) = CPS_htons((u16) (type));

    if (!func_0209600c(ip_to)) {
        ip_to = func_02095fac(ip_to);
        if (ip_to == 0) {
            return;
        }
        CPSMacAddress *mac_to = func_02096478(ip_to);
        if (mac_to == 0) {
            mac_to = func_02096644(ip_to);
        }
        if (mac_to == 0) {
            return;
        }
        func_0200766c(mac_to, &hdr[ETHERNET_OFFSET_MAC_DEST], sizeof(CPSMacAddress));
    } else {
        hdr[ETHERNET_OFFSET_MAC_DEST]     = 1;
        hdr[ETHERNET_OFFSET_MAC_DEST + 1] = 0;
        hdr[ETHERNET_OFFSET_MAC_DEST + 2] = 0x5E;
        hdr[ETHERNET_OFFSET_MAC_DEST + 3] = (ip_to >> 16) & 0x7F;
        hdr[ETHERNET_OFFSET_MAC_DEST + 4] = ip_to >> 8;
        hdr[ETHERNET_OFFSET_MAC_DEST + 5] = ip_to;
    }

    func_0200766c(data_021711ec, &hdr[ETHERNET_OFFSET_MAC_SOURCE], sizeof(CPSMacAddress));
    func_020960cc(hdr, hdr_len, body, body_len);
}
