/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* parse_time from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)), reused
 * by tools/donor_match.py */
extern unsigned long func_020a8a18(unsigned char *s, int type);
unsigned long func_020a8a18(unsigned char *s, int type) {
    unsigned long year;

    year = s[0] * 10 + s[1] - 528;
    s += 2;
    if (type == 0x17) {
        if (year < 50) {
            year += 2000;
        } else {
            year += 1900;
        }
    } else {
        year = year * 100 + (s[0] * 10 + s[1] - 528);
        s += 2;
    }
    return (year << 16) + ((s[0] * 10 + s[1] - 528) << 8) + (s[2] * 10 + s[3] - 528);
}
