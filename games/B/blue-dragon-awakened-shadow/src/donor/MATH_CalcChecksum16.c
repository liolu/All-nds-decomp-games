/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MATH_CalcChecksum16 from https://github.com/ntrtwl/NitroSDK libraries/math/src/checksum.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern u16 MATH_CalcChecksum16(const void *data, u32 dataLength);
static inline u32 MATHi_Checksum16Update(const void *input, u32 length) {
    u32 sum;
    u32 n;
    BOOL fSwap = 0;

    sum = 0;

    if (((u32) input) & 1) {
        sum += (*((u8 *) input)++ << 8);
        length--;
        fSwap = 1;
    }

    while ((length >> 17) > 0) {
        length -= (1 << 17);
        for (n = (1 << 16); n > 0; n--) {
            sum += *((u16 *) input)++;
        }

        sum = (sum >> 16) + (sum & 0xffff);
        sum = (u16) ((sum >> 16) + sum);
    }

    for (n = (length >> 1); n > 0; n--) {
        sum += *((u16 *) input)++;
    }

    if (length & 1) {
        sum += *((u8 *) input);
    }

    sum = (sum >> 16) + (sum & 0xffff);
    sum = (sum >> 16) + (sum & 0xffff);

    if (fSwap) {
        sum = ((sum << 24) | (sum << 8)) >> 16;
    }

    return sum;
}
u16 MATH_CalcChecksum16(const void *data, u32 dataLength) {
    u32 sum;

    sum = MATHi_Checksum16Update(data, dataLength);
    return (u16) (~sum);
}
