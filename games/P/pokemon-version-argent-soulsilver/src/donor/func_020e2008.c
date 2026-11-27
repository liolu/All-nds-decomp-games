/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CTRDGi_VerifyFlashSectorCore from https://github.com/RushRE/SonicRushAdventure-Decomp
 * lib/NitroSDK/src/ctrdg/ARM9/ctrdg_flash_common.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
u32 func_020e2008(u8 *src, u8 *tgt, u32 size) {
    while (size--) {
        if (*tgt++ != *src++) {
            return (u32) tgt - 1;
        }
    }

    return 0;
}
