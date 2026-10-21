/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* calc_checksum_do from projets/blue-dragon-awakened-shadow/src/donor/calc_checksum_do.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
extern const u16(*ctrdgi_fl_maxtime);
static inline u16 CPS_htons(u16 data) {
    return (u16) ((data >> 8) | (data << 8));
}
static inline u32 CPS_htonl(u32 data) {
    u32 tmp;

    tmp = ((data >> 8) & 0x00ff00ff) | ((data << 8) & 0xff00ff00);
    return (tmp >> 16) | (tmp << 16);
}
u32 func_02095e30(u8 *s, u32 len, u32 sum) {
    if ((u32) s & 1) {
        while (len > 1) {
            sum += ((u16) (((u8 *) (s))[0] << 8 | ((u8 *) (s))[1]));
            s += 2;
            len -= 2;
        }
    } else {
        sum = CPS_htons(sum);
        while (len > 1) {
            sum += (*(u16 *) (s));
            s += 2;
            len -= 2;
        }
        sum = CPS_htonl(sum);
    }

    if (len != 0) {
        sum += *s << 8;
    }

    sum = (sum & 0xFFFF) + (sum >> 16);
    sum += sum >> 16;
    return sum & 0xFFFF;
}
