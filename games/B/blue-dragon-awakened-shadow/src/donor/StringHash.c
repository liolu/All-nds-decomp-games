/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StringHash from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_server.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern unsigned char __lower_map[];
inline int tolower(int c) {
    return (c < 0 || c >= 128 ? c : (int) __lower_map[c]);
}
typedef unsigned int gsi_u32;
typedef gsi_u32 goa_uint32;
extern int StringHash(const char *s, int numbuckets);
int StringHash(const char *s, int numbuckets) {
    goa_uint32 hashcode = 0;
    while (*s != 0) {
        hashcode = (goa_uint32) ((int) hashcode * -1664117991 + tolower(*s));
        s++;
    }
    return (int) (hashcode % numbuckets);
}
