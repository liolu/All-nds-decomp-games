/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_GetDecoderCodeCached from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_GetDecoderCodeCached.c (license: CC0-1.0), reused by tools/donor_match.py
 */
extern void func_02007558(const void *src, void *dest, unsigned int size);
extern int data_02188140[];
extern unsigned char data_020e7484[];
void *func_020d7954(void) {
    void *p;

    if (data_02188140[2] == 0) {
        if ((unsigned int) data_02188140[5] >= 0x659c) {
            p                = (void *) data_02188140[6];
            data_02188140[2] = (int) p;
            func_02007558(data_020e7484, p, 0x659c);
            data_02188140[6] += 0x659c;
            data_02188140[5] -= 0x659c;
        } else {
            return data_020e7484;
        }
    }
    return (void *) data_02188140[2];
}
