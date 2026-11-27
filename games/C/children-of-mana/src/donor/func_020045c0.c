/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __strtoul from https://github.com/Project-Holon/aletheia src/game/arm9/msl_strtod.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
enum {
    dec_start      = 1,
    check_for_zero = 2,
    leading_zero   = 4,
    need_digit     = 8,
    digit_loop     = 16,
    dec_finished   = 32,
    dec_failure    = 64
};
typedef struct MslStringScan {
    const char *cur;
    s32 eof;
} MslStringScan;
extern u32 func_020045c0(int base, int max_width, int (*ReadProc)(MslStringScan *, u32, u32), void *ReadProcArg,
                         int *chars_scanned, int *negative, int *overflow);
extern const unsigned short data_020f523c[];
extern const u8 data_020f51bc[];
u32 func_020045c0(int base, int max_width, int (*ReadProc)(MslStringScan *, u32, u32), void *ReadProcArg, int *chars_scanned,
                  int *negative, int *overflow) {
    int scan_state = dec_start;
    int count      = 0;
    int spaces     = 0;
    u32 value      = 0;
    u32 value_max  = 0;
    int c;

    *negative = *overflow = 0;

    if (base < 0 || base == 1 || base > 36 || max_width < 1) {
        scan_state = dec_failure;
    } else {
        c = (count++, (*ReadProc)(ReadProcArg, 0, 0));
    }

    if (base != 0) {
        value_max = 0xFFFFFFFFu / base;
    }

    while (count <= max_width && c != -1 && !((scan_state) & (dec_finished | dec_failure))) {
        switch (scan_state) {
            case dec_start:
                if ((((c) < 0 || (c) >= 0x80) ? 0 : (data_020f523c[c] & 0x100))) {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, 0));
                    count--;
                    spaces++;
                    break;
                }
                if (c == '+') {
                    c = (count++, (*ReadProc)(ReadProcArg, 0, 0));
                } else if (c == '-') {
                    c         = (count++, (*ReadProc)(ReadProcArg, 0, 0));
                    *negative = 1;
                }
                scan_state = check_for_zero;
                break;
            case check_for_zero:
                if (base == 0 || base == 16) {
                    if (c == '0') {
                        scan_state = leading_zero;
                        c          = (count++, (*ReadProc)(ReadProcArg, 0, 0));
                        break;
                    }
                }
                scan_state = need_digit;
                break;
            case leading_zero:
                if (c == 'X' || c == 'x') {
                    base       = 16;
                    scan_state = need_digit;
                    c          = (count++, (*ReadProc)(ReadProcArg, 0, 0));
                    break;
                }
                if (base == 0) {
                    base = 8;
                }
                scan_state = digit_loop;
                break;
            case need_digit:
            case digit_loop:
                if (base == 0) {
                    base = 10;
                }
                if (!value_max) {
                    value_max = 0xFFFFFFFFu / base;
                }
                if ((((c) < 0 || (c) >= 0x80) ? 0 : (data_020f523c[c] & 0x8))) {
                    if ((c -= '0') >= base) {
                        if (scan_state == digit_loop) {
                            scan_state = dec_finished;
                        } else {
                            scan_state = dec_failure;
                        }
                        c += '0';
                        break;
                    }
                } else if (!(((c) < 0 || (c) >= 0x80) ? 0 : (data_020f523c[c] & 0x1)) ||
                           ((((c) < 0 || (c) >= 0x80) ? (c) : data_020f51bc[c]) - 'A' + 10) >= base) {
                    if (scan_state == digit_loop) {
                        scan_state = dec_finished;
                    } else {
                        scan_state = dec_failure;
                    }
                    break;
                } else {
                    c = (((c) < 0 || (c) >= 0x80) ? (c) : data_020f51bc[c]) - 'A' + 10;
                }
                if (value > value_max) {
                    *overflow = 1;
                }
                value *= base;
                if (c > (0xFFFFFFFFu - value)) {
                    *overflow = 1;
                }
                value += c;
                scan_state = digit_loop;
                c          = (count++, (*ReadProc)(ReadProcArg, 0, 0));
                break;
        }
    }

    if (!((scan_state) & (leading_zero | digit_loop | dec_finished))) {
        count = value  = 0;
        *chars_scanned = 0;
    } else {
        count--;
        *chars_scanned = count + spaces;
    }
    (*ReadProc)(ReadProcArg, c, 1);
    return value;
}
