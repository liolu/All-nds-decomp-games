/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_CosFx64c_internal from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/fx/fx_trig_internal.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned long long int u64;
extern u64 func_020cd3e4(u64 x);
u64 func_020cd3e4(u64 x) {
    u64 x2, r;
    if (x == 0x100000000ULL) {
        return 0xB504F334;
    }
    x2 = (x * x) >> 32;
    r  = 0x100000000ULL - ((x2 * 0x02D1E41D) >> 32);
    r  = 0x100000000ULL - ((r * ((x2 * 0x054387AD) >> 32)) >> 32);
    r  = 0x100000000ULL - ((r * ((x2 * 0x0D28D331) >> 32)) >> 32);
    r  = 0x100000000ULL - ((r * ((x2 * 0x4EF4F327) >> 32)) >> 32);
    return r;
}
