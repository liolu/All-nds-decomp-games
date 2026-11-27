/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gti2UShortFromBuffer from https://github.com/LagoLunatic/ooe libs/GameSpy/gt2/gt2Message.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char GT2Byte;
unsigned short gti2UShortFromBuffer(const GT2Byte *buffer, int pos) {
    unsigned short s;
    s = (unsigned short) ((buffer[pos] << 8) & 0xFF00);
    pos++;
    s |= buffer[pos];

    return s;
}
