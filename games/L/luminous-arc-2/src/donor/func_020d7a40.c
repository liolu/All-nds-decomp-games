/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov024_MobiClip_GetSatTable5BitCached from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/system/ov024_mobiclip/Ov024_MobiClip_GetSatTable5BitCached.c (license: CC0-1.0), reused by tools/donor_match.py
 */
extern void func_02007558(const void *src, void *dest, unsigned int size);
extern int data_02188140[];
extern unsigned char data_020ee0ec[];
void *func_020d7a40(void) {
    void *p;

    if (data_02188140[0] == 0) {
        if ((unsigned int) data_02188140[3] >= 0x300) {
            p                = (void *) data_02188140[4];
            data_02188140[0] = (int) p;
            func_02007558(data_020ee0ec, p, 0x300);
            data_02188140[4] += 0x300;
            data_02188140[3] -= 0x300;
        } else {
            return data_020ee0ec;
        }
    }
    return (void *) data_02188140[0];
}
