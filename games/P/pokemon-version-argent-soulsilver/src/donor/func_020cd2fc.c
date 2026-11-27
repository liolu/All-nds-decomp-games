/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_SinFx64c_internal from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/fx/fx_trig_internal.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned long long int u64;
extern u64 func_020cd2fc(u64 x);
u64 func_020cd2fc(u64 x) {
    u64 x2, r;
    if (x == 0x100000000ULL) {
        return 0xB504F334;
    }
    x2 = (x * x) >> 32;
    r  = 0x100000000ULL - ((x2 * 0x02317888) >> 32);
    r  = 0x100000000ULL - ((r * ((x2 * 0x03C2857C) >> 32)) >> 32);
    r  = 0x100000000ULL - ((r * ((x2 * 0x07E54B84) >> 32)) >> 32);
    r  = 0xC90FDAA2ULL - ((r * ((x2 * 0x14ABBCE6) >> 32)) >> 32);
    return (r * x) >> 32;
}
