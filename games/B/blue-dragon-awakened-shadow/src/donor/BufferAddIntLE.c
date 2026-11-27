/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* BufferAddIntLE from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_serverlist.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
inline u32 SOC_HtoNl(u32 val) {
    return ((val >> 0x18) & 0x000000FF) | ((val >> 0x08) & 0x0000FF00) | ((val << 0x08) & 0x00FF0000) |
           ((val << 0x18) & 0xFF000000);
}
void BufferAddInt(char **buffer, int ival, int *len);
void BufferAddIntLE(char **buffer, int ival, int *len) {
    unsigned int ivalNBO = SOC_HtoNl(ival);
    unsigned int ivalBE  = 0;
    ivalBE |= ((0x000000FF & ivalNBO) << 24);
    ivalBE |= ((0x0000FF00 & ivalNBO) << 8);
    ivalBE |= ((0x00FF0000 & ivalNBO) >> 8);
    ivalBE |= ((0xFF000000 & ivalNBO) >> 24);
    BufferAddInt(buffer, (int) ivalBE, len);
}
