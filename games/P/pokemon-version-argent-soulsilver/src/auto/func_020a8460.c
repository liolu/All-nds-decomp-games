/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a8460 from https://github.com/ctrl-cheeb-del/pokeheartgold lib/libCPS/src/cps_resolve.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
extern u8 data_021d4640[];
extern u32 func_020a8460(char *name);
extern u32 data_021d46a0[2];
extern int func_020a8360(u8 *string, u32 *ip);
extern int func_020a83fc(char *name, u32 server, int id);
static inline u64 RandomValue(void) {
    (*(u64 *) (data_021d4640 + (0x68))) =
        (*(u64 *) (data_021d4640 + (0x70))) * (*(u64 *) (data_021d4640 + (0x68))) + (*(u64 *) (data_021d4640 + (0x78)));
    return (*(u64 *) (data_021d4640 + (0x68))) >> 32;
}
u32 func_020a8460(char *name) {
    u32 result;
    u16 id[2];
    u8 live[2];
    int i, j;
    id[0] = (RandomValue() << 16) >> 32;
    id[1] = (RandomValue() << 16) >> 32;
    if (func_020a8360((u8 *) name, &result)) {
        return result;
    }
    live[0] = 1;
    live[1] = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (live[j]) {
                result = func_020a83fc(name, data_021d46a0[j], id[j]);
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
