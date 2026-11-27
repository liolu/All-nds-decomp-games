/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SBServerGetFloatValueA from https://github.com/LagoLunatic/ooe libs/GameSpy/serverbrowsing/sb_server.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern double atof(const char *str);
typedef unsigned char gsi_u8;
typedef unsigned int gsi_u32;
typedef unsigned int gsi_time;
typedef gsi_u32 goa_uint32;
typedef struct HashImplementation *HashTable;
typedef struct _SBServer *SBServer;
extern const char *SBServerGetStringValueA(SBServer server, const char *keyname, const char *def);
extern double SBServerGetFloatValueA(SBServer server, const char *key, double fdefault);
struct _SBServer {
    goa_uint32 publicip;
    unsigned short publicport;
    goa_uint32 privateip;
    unsigned short privateport;
    goa_uint32 icmpip;
    unsigned char state;
    unsigned char flags;
    HashTable keyvals;
    gsi_time updatetime;
    gsi_u32 querychallenge;
    struct _SBServer *next;
    gsi_u8 splitResponseBitmap;
};
extern const char *SBServerGetStringValueA(SBServer server, const char *keyname, const char *def);
extern double SBServerGetFloatValueA(SBServer server, const char *key, double fdefault);
const char *SBServerGetStringValueA(SBServer server, const char *keyname, const char *def);
double SBServerGetFloatValueA(SBServer server, const char *key, double fdefault) {
    const char *s;
    s = SBServerGetStringValueA(server, key, 0);
    if (s == 0) {
        return fdefault;
    } else {
        return atof(s);
    }
}
