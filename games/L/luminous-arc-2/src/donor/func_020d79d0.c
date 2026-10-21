/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_GetDecodeTableCached from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_GetDecodeTableCached.c (license: CC0-1.0), reused by tools/donor_match.py
 */
extern void func_02007558(const void *src, void *dest, unsigned int size);
extern int data_02188140[];
extern unsigned char data_020e5384[];
void *func_020d79d0(void) {
    void *p;

    if (data_02188140[1] == 0) {
        if ((unsigned int) data_02188140[3] >= 0x2100) {
            p                = (void *) data_02188140[4];
            data_02188140[1] = (int) p;
            func_02007558(data_020e5384, p, 0x2100);
            data_02188140[4] += 0x2100;
            data_02188140[3] -= 0x2100;
        } else {
            return data_020e5384;
        }
    }
    return (void *) data_02188140[1];
}
