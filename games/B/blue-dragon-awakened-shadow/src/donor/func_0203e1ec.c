/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02076008 from https://github.com/cntrl-alt-lenny/gx-spirit-caller src/main/func_02076008.legacy.c (license: MIT),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef struct {
    u8 pad[0x10];
    unsigned int lo, hi;
    u8 buf[64];
} MD5Ctx;
typedef struct {
    u8 pad[0x14];
    unsigned int hi, lo;
    u8 buf[64];
} SHA1Ctx;
extern int func_0203e1d4(char *p, int b, int c);
extern void func_0203e1b0(unsigned char *p);
extern void MD5Final(char *a, char *b);
extern void MD5Update(MD5Ctx *c, unsigned char *data, unsigned int len);
extern void MD5Init(unsigned int *self);
extern void SHA1Final(void *a0, void *a1);
extern void SHA1Update(SHA1Ctx *c, unsigned char *data, unsigned int len);
extern void SHA1Init(unsigned int *self);
extern void MI_CpuFill8(void *dst, int value, unsigned int size);
extern int memcmp(unsigned char *p0, unsigned char *p1, int count);
int func_0203e1ec(char *ctx, u8 *packet) {
    u8 digest[0x14];
    u8 pad[0x30];
    int len;
    int size;
    len = func_0203e1d4(ctx, (int) (packet + 5), (packet[3] << 8) + packet[4]);
    switch (*(unsigned short *) (ctx + 0x32)) {
        case 4: {
            MD5Ctx *hash;
            len -= 0x10;
            packet[3] = len >> 8;
            packet[4] = len;
            hash      = (MD5Ctx *) (ctx + 0x3fc);
            MD5Init((unsigned int *) hash);
            MD5Update(hash, *(u8 **) (ctx + 0x1d4), 0x10);
            MI_CpuFill8(pad, 0x36, 0x30);
            MD5Update(hash, pad, 0x30);
            MD5Update(hash, (u8 *) ctx + 0x2e4, 8);
            MD5Update(hash, packet, 1);
            MD5Update(hash, packet + 3, len + 2);
            MD5Final((char *) hash, (char *) digest);
            MD5Init((unsigned int *) hash);
            MD5Update(hash, *(u8 **) (ctx + 0x1d4), 0x10);
            MI_CpuFill8(pad, 0x5c, 0x30);
            MD5Update(hash, pad, 0x30);
            MD5Update(hash, digest, 0x10);
            MD5Final((char *) hash, (char *) digest);
            size = 0x10;
            break;
        }
        case 5: {
            SHA1Ctx *hash;
            len -= 0x14;
            packet[3] = len >> 8;
            packet[4] = len;
            hash      = (SHA1Ctx *) (ctx + 0x348);
            SHA1Init((unsigned int *) hash);
            SHA1Update(hash, *(u8 **) (ctx + 0x1d4), 0x14);
            MI_CpuFill8(pad, 0x36, 0x28);
            SHA1Update(hash, pad, 0x28);
            SHA1Update(hash, (u8 *) ctx + 0x2e4, 8);
            SHA1Update(hash, packet, 1);
            SHA1Update(hash, packet + 3, len + 2);
            SHA1Final(hash, digest);
            SHA1Init((unsigned int *) hash);
            SHA1Update(hash, *(u8 **) (ctx + 0x1d4), 0x14);
            MI_CpuFill8(pad, 0x5c, 0x28);
            SHA1Update(hash, pad, 0x28);
            SHA1Update(hash, digest, 0x14);
            SHA1Final(hash, digest);
            size = 0x14;
            break;
        }
    }
    if (memcmp(packet + 5 + len, digest, size) != 0) {
        ctx[0x455] = 9;
    }
    func_0203e1b0((u8 *) ctx + 0x2ec);
    return len + 5;
}
