/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPS_Resolve from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_resolve.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern u8 wfailed[];
extern u32 CPS_Resolve(char *name);
extern u32 CPSDnsIp[2];
extern int rawip(u8 *string, u32 *ip);
extern int resolve_sub(char *name, u32 server, int id);
static inline u64 RandomValue(void) {
    (*(u64 *) (wfailed + (0x68))) =
        (*(u64 *) (wfailed + (0x70))) * (*(u64 *) (wfailed + (0x68))) + (*(u64 *) (wfailed + (0x78)));
    return (*(u64 *) (wfailed + (0x68))) >> 32;
}
u32 CPS_Resolve(char *name) {
    u32 result;
    u16 id[2];
    u8 live[2];
    int i, j;
    id[0] = (RandomValue() << 16) >> 32;
    id[1] = (RandomValue() << 16) >> 32;
    if (rawip((u8 *) name, &result)) {
        return result;
    }
    live[0] = 1;
    live[1] = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (live[j]) {
                result = resolve_sub(name, CPSDnsIp[j], id[j]);
                if (result && result != (u32) -1) {
                    goto done;
                }
                if (result == (u32) -1) {
                    live[j] = 0;
                }
            }
        }
    }
done:
    if (result == (u32) -1) {
        result = 0;
    }
    return result;
}
