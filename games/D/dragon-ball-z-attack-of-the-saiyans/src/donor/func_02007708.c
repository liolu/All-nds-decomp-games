/* compiler: 2.0/sp1p5  */
/* func_0203ba78 from projets/battle-of-giants-dinosaurs/src/auto/func_0203ba78.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
s32 func_02007708(volatile u8 *a, u8 *b, s32 *out) {
    u8 *p = b;
    u32 c;
    u32 d;
    u32 f;
    u32 g;
    s32 n;

    *out = 0;
    if (b == 0) {
        return 1;
    }

    if (b[0] == 'P') {
        if (*++p == 'V') {
            p++;
        }
        if (*p == 'K') {
            p++;
        }
        if (*p == 'v') {
            c = *a;
            if (c == 'P' || c == '*') {
                return 1;
            }
        }
        p = b;
    }

    f = *a;
    if (f == '!' || f == '*') {
        f = *a++;
        g = *p++;
        if (f != g) {
            return 0;
        }
    loop:
        f = *a;
        if (f != *p++) {
            goto mismatch;
        }
        a++;
        if (f != '!') {
            goto loop;
        }

        n = 0;
        while (*a != '!') {
            n = n * 10 + *a++ - '0';
        }
        *out = n;
        return 1;
    mismatch:
        while (*a++ != '!') {
        }
        while (*a++ != '!') {
        }
        if (*a == 0) {
            return 0;
        }
        p = b + 1;
        goto loop;
    }
    goto plain;

special:

    d = *++p;
    a++;
    if (d == 'K') {
        d = *a;
        if (d == 'K') {
            a++;
        }
        p++;
    }
    c = *a;
    if (c == 'K') {
        return 0;
    }
    if (*p == 'V') {
        if (c == 'V') {
            a++;
        }
        p++;
    }
    if (*a == 'V') {
        return 0;
    }

plain:
    c = *a;
    if ((c == 'P' || c == 'R') && c == *p) {
        goto special;
    }
    if (c != *p) {
        goto fail;
    }
    for (;;) {
        if (c == 0) {
            return 1;
        }
        c = *++a;
        d = *++p;
        if (c != d) {
            goto fail;
        }
    }
fail:
    return 0;
}
