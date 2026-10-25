/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* RNG_GetSeed from https://github.com/Yotona/twewy src/Engine/Math/Random.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef unsigned int u32;
typedef unsigned short u16;
extern u32 func_02036cf0(void);
extern u16 data_0209fb4c[2];
u32 func_02036cf0(void) {
    return (data_0209fb4c[1] << 0x10) | data_0209fb4c[0];
}
