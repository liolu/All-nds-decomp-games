/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* tcpip from projets/blue-dragon-awakened-shadow/src/donor/tcpip.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
extern void func_02098884(void *unused);
extern u8 *func_02096374(u32 *len);
extern void func_02096434(void);
extern void func_020970e8(u8 *buf, u32 len);
extern void func_020986c0(u8 *buf, u32 len);
void func_02098884(void *unused) {
    u32 len;

    while (1) {
        u8 *buf = func_02096374(&len);
        if (len > 14 + 20) {
            switch ((CPS_htons((*(u16 *) (&buf[ETHERNET_OFFSET_TYPE]))))) {
                case 0x800:
                    func_020986c0(buf + 14, len - 14);
                    break;
                case 0x806:
                    func_020970e8(buf + 14, len - 14);
                    break;
            }
        }

        func_02096434();
    }
}
