/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206ece0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_0206ece0.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    unsigned char conversion_char;
    char fill_char;
    char pad7;
    int field_width;
    int precision;
} print_format;
typedef struct {
    char style;
    char unused;
    short digits;
} decform;
typedef struct {
    unsigned char sgn;
    unsigned char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[36];
    } sig;
} decimal;
enum {
    only_minus   = 0,
    sign_always  = 1,
    space_holder = 2
};
extern void func_0207b928(decform *f, double x, decimal *d);
extern int func_0207df3c(double a, double b);
extern char *func_02076174(char *dst, const char *src);
extern void func_02073a1c(decimal *d, int digits);
extern unsigned short data_020a4260[];
extern char data_0219b014[];
extern char data_0219b01c[];
extern char data_0219b024[];
extern char data_0219b028[];
extern char data_0219b02c[];
extern char data_0219b034[];
extern char data_0219b03c[];
extern char data_0219b040[];
char *func_020733c4(double x, char *buff_end, print_format format) {
    int int_digits;
    int code;
    decform form;
    int prec;
    int sign_opt;
    unsigned char *q;
    int power;
    int n;
    char sign;
    int alt;
    int digits;
    decimal dec;
    volatile unsigned char *p;

    form.style  = 0;
    form.digits = 32;

    code     = format.conversion_char;
    prec     = (int) format.precision;
    alt      = format.alternate_form;
    sign_opt = format.sign_options;

    func_0207b928(&form, x, &dec);

    p = dec.sig.text + dec.sig.length;

    while (dec.sig.length > 1 && *--p == '0') {
        --dec.sig.length;
        ++dec.exp;
    }

    switch (*dec.sig.text) {
        case '0':
            dec.exp = 0;
            break;

        case 'I':
            if (func_0207df3c(x, 0.0)) {
                p = (unsigned char *) buff_end - 5;
                if ((((code) < 0 || (code) >= 0x80) ? 0 : (data_020a4260[code] & 0x200))) {
                    func_02076174((char *) p, data_0219b014);
                } else {
                    func_02076174((char *) p, data_0219b01c);
                }
            } else {
                p = (unsigned char *) buff_end - 4;
                if ((((code) < 0 || (code) >= 0x80) ? 0 : (data_020a4260[code] & 0x200))) {
                    func_02076174((char *) p, data_0219b024);
                } else {
                    func_02076174((char *) p, data_0219b028);
                }
            }
            return (char *) p;

        case 'N':
            if (dec.sgn) {
                p = (unsigned char *) buff_end - 5;
                if ((((code) < 0 || (code) >= 0x80) ? 0 : (data_020a4260[code] & 0x200))) {
                    func_02076174((char *) p, data_0219b02c);
                } else {
                    func_02076174((char *) p, data_0219b034);
                }
            } else {
                p = (unsigned char *) buff_end - 4;
                if ((((code) < 0 || (code) >= 0x80) ? 0 : (data_020a4260[code] & 0x200))) {
                    func_02076174((char *) p, data_0219b03c);
                } else {
                    func_02076174((char *) p, data_0219b040);
                }
            }
            return (char *) p;
    }

    dec.exp += dec.sig.length - 1;

    p    = (unsigned char *) buff_end;
    *--p = 0;

    switch (code) {
        case 'g':
        case 'G':
            if (dec.sig.length > prec) {
                func_02073a1c(&dec, prec);
            }

            if (dec.exp < -4 || dec.exp >= prec) {
                if (alt) {
                    --prec;
                } else {
                    prec = dec.sig.length - 1;
                }

                if (code == 'g') {
                    code = 'e';
                } else {
                    code = 'E';
                }

                goto e_format;
            }

            if (alt) {
                prec -= dec.exp + 1;
            } else if ((prec = dec.sig.length - (dec.exp + 1)) < 0) {
                prec = 0;
            }

            goto f_format;

        case 'e':
        case 'E':
        e_format:
            if (dec.sig.length > prec + 1) {
                func_02073a1c(&dec, prec + 1);
            }

            power = dec.exp;
            sign  = '+';

            if (power < 0) {
                power = -power;
                sign  = '-';
            }

            for (n = 0; power || n < 2;) {
                *--p = power % 10 + '0';
                power /= 10;
                ++n;
            }

            *--p = sign;
            *--p = code;

            if (prec + (buff_end - (char *) p) > 509) {
                return 0;
            }

            if (dec.sig.length < prec + 1) {
                n = prec + 2 - dec.sig.length;

                while (--n) {
                    *--p = '0';
                }
            }

            q = dec.sig.text + dec.sig.length;
            n = dec.sig.length;

            while (--n) {
                *--p = *--q;
            }

            if (prec || alt) {
                *--p = '.';
            }

            *--p = *dec.sig.text;

            if (dec.sgn) {
                *--p = '-';
            } else if (sign_opt == sign_always) {
                *--p = '+';
            } else if (sign_opt == space_holder) {
                *--p = ' ';
            }
            break;

        case 'f':
        case 'F':
        f_format:
            if ((digits = dec.sig.length - dec.exp - 1) < 0) {
                digits = 0;
            }

            if (digits > prec) {
                func_02073a1c(&dec, dec.sig.length - (digits - prec));

                if ((digits = dec.sig.length - dec.exp - 1) < 0) {
                    digits = 0;
                }
            }

            if ((int_digits = dec.exp + 1) < 0) {
                int_digits = 0;
            }

            if (int_digits + digits > 509) {
                return 0;
            }

            q = dec.sig.text + dec.sig.length;

            for (n = 0; n < prec - digits; ++n) {
                *--p = '0';
            }

            {
                int i;
                for (i = 0; i < digits && i < dec.sig.length; ++i) {
                    *--p = *--q;
                }

                for (; i < digits; ++i) {
                    *--p = '0';
                }
            }

            if (prec || alt) {
                *--p = '.';
            }

            if (int_digits) {
                int i;
                for (i = 0; i < int_digits - dec.sig.length; ++i) {
                    *--p = '0';
                }

                for (; i < int_digits; ++i) {
                    *--p = *--q;
                }
            } else {
                *--p = '0';
            }

            if (dec.sgn) {
                *--p = '-';
            } else if (sign_opt == sign_always) {
                *--p = '+';
            } else if (sign_opt == space_holder) {
                *--p = ' ';
            }
            break;
    }

    return (char *) p;
}
