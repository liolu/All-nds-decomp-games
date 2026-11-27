/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0202f568 from projets/battle-of-giants-dinosaurs/src/donor/func_0202f568.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef char *va_list;
typedef signed long intptr_t;
typedef intptr_t ptrdiff_t;
typedef unsigned long size_t;
typedef unsigned short wchar_t;
enum __ReadProcActions {
    __GetAChar,
    __UngetAChar,
    __TestForError
};
extern const unsigned short data_0210e528[128];
static inline int isspace(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (data_0210e528[c] & 0x100);
}
extern int data_0211110c[];
extern int func_020e5954(wchar_t *pwc, const char *s, int n);
extern unsigned long func_020eae78(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                   int *chars_scanned, int *negative, int *overflow);
extern unsigned long long func_020eb260(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                        int *chars_scanned, int *negative, int *overflow);
extern long double func_020e9b3c(int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                                 int *overflow);
enum argument_options {
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_long_argument,
    double_argument,
    long_double_argument,
    wchar_argument
};
typedef unsigned char char_map[32];
typedef struct {
    unsigned char suppress_assignment;
    unsigned char field_width_specified;
    unsigned char argument_options;
    unsigned char conversion_char;
    int field_width;
    char_map char_set;
} scan_format;
extern const char *func_020e8104(const char *format_string, scan_format *format);
int func_020e85fc(int (*ReadProc)(void *, int, int), void *ReadProcArg, const char *format_str, va_list arg, int is_secure) {
    int num_chars, chars_read, items_assigned, conversions;
    int base, negative, overflow;
    int rval;
    const char *format_ptr;
    char format_char;
    char c;
    scan_format format;
    long long_num;
    unsigned long u_long_num;
    long long long_long_num = 0;
    unsigned long long u_long_long_num;
    long double long_double_num;
    char *arg_ptr;
    int elem_valid;
    size_t elem_maxsize;
    int match_failure = 0;
    int terminate     = 0;

    format_ptr     = format_str;
    chars_read     = 0;
    items_assigned = 0;
    conversions    = 0;

    while (!terminate && (format_char = *format_ptr) != 0) {
        if (isspace(format_char)) {
            do {
                format_char = *++format_ptr;
            } while (isspace(format_char));

            if (!match_failure) {
                while (isspace(c = (*ReadProc)(ReadProcArg, 0, __GetAChar))) {
                    ++chars_read;
                }

                (*ReadProc)(ReadProcArg, c, __UngetAChar);
            }
            continue;
        }

        if ((format_char != '%') && (!match_failure)) {
            if ((c = (*ReadProc)(ReadProcArg, 0, __GetAChar)) != (unsigned char) format_char) {
                (*ReadProc)(ReadProcArg, c, __UngetAChar);
                if (!is_secure) {
                    goto exit;
                } else {
                    match_failure = 1;
                    ++format_ptr;
                    continue;
                }
            }

            chars_read++;
            format_ptr++;

            continue;
        }

        format_ptr = func_020e8104(format_ptr, &format);

        if (!format.suppress_assignment && format.conversion_char != '%') {
            arg_ptr = (*(char **) ((arg += ((((unsigned int) (sizeof(char *))) + 3U) & ~3U)) -
                                   ((((unsigned int) (sizeof(char *))) + 3U) & ~3U)));
        } else {
            arg_ptr = 0;
        }

        if ((format.conversion_char != 'n') && (!match_failure) && (*ReadProc)(ReadProcArg, 0, __TestForError)) {
            if (!is_secure) {
                goto exit;
            } else {
                match_failure = 1;
            }
        }

        switch (format.conversion_char) {
            case 'd':
                base = 10;
                goto signed_int;
            case 'i':
                base = 0;
            signed_int:

                if (match_failure) {
                    long_num      = 0;
                    long_long_num = 0;
                } else {
                    if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                        u_long_long_num =
                            func_020eb260(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    } else {
                        u_long_num =
                            func_020eae78(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    }

                    if (!num_chars) {
                        if (!is_secure) {
                            goto exit;
                        } else {
                            match_failure = 1;
                            long_num      = 0;
                            long_long_num = 0;
                            goto signed_int_assign;
                        }
                    }

                    chars_read += num_chars;

                    if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                        long_long_num = (negative ? -u_long_long_num : u_long_long_num);
                    } else {
                        long_num = (negative ? -u_long_num : u_long_num);
                    }
                }

            signed_int_assign:

                if (arg_ptr) {
                    switch (format.argument_options) {
                        case normal_argument:
                            *(int *) arg_ptr = long_num;
                            break;
                        case char_argument:
                            *(signed char *) arg_ptr = long_num;
                            break;
                        case short_argument:
                            *(short *) arg_ptr = long_num;
                            break;
                        case long_argument:
                            *(long *) arg_ptr = long_num;
                            break;
                        case intmax_argument:
                            *(long long *) arg_ptr = long_long_num;
                            break;
                        case size_t_argument:
                            *(size_t *) arg_ptr = long_num;
                            break;
                        case ptrdiff_argument:
                            *(ptrdiff_t *) arg_ptr = long_num;
                            break;
                        case long_long_argument:
                            *(long long *) arg_ptr = long_long_num;
                            break;
                    }
                    if (!match_failure) {
                        items_assigned++;
                    }
                }

                conversions++;
                break;
            case 'o':
                base = 8;
                goto unsigned_int;
            case 'u':
                base = 10;
                goto unsigned_int;
            case 'x':
            case 'X':
                base = 16;
            unsigned_int:

                if (match_failure) {
                    u_long_num      = 0;
                    u_long_long_num = 0;
                } else {
                    if ((format.argument_options == long_long_argument) || (format.argument_options == intmax_argument)) {
                        u_long_long_num =
                            func_020eb260(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    } else {
                        u_long_num =
                            func_020eae78(base, format.field_width, ReadProc, ReadProcArg, &num_chars, &negative, &overflow);
                    }

                    if (!num_chars) {
                        if (!is_secure) {
                            goto exit;
                        } else {
                            match_failure   = 1;
                            u_long_num      = 0;
                            u_long_long_num = 0;
                            goto unsigned_int_assign;
                        }
                    }

                    chars_read += num_chars;

                    if (negative) {
                        if (format.argument_options == long_long_argument) {
                            u_long_long_num = -u_long_long_num;
                        } else {
                            u_long_num = -u_long_num;
                        }
                    }
                }

            unsigned_int_assign:

                if (arg_ptr) {
                    switch (format.argument_options) {
                        case normal_argument:
                            *(unsigned int *) arg_ptr = u_long_num;
                            break;
                        case char_argument:
                            *(unsigned char *) arg_ptr = u_long_num;
                            break;
                        case short_argument:
                            *(unsigned short *) arg_ptr = u_long_num;
                            break;
                        case long_argument:
                            *(unsigned long *) arg_ptr = u_long_num;
                            break;
                        case intmax_argument:
                            *(long long *) arg_ptr = u_long_long_num;
                            break;
                        case size_t_argument:
                            *(size_t *) arg_ptr = u_long_num;
                            break;
                        case ptrdiff_argument:
                            *(ptrdiff_t *) arg_ptr = u_long_num;
                            break;
                        case long_long_argument:
                            *(unsigned long long *) arg_ptr = u_long_long_num;
                            break;
                    }

                    if (!match_failure) {
                        items_assigned++;
                    }
                }

                conversions++;
                break;
            case 'a':
            case 'A':
            case 'f':
            case 'F':
            case 'e':
            case 'E':
            case 'g':
            case 'G':
            flt:
                if (match_failure) {
                    long_double_num = (*(float *) data_0211110c);
                } else {
                    long_double_num = func_020e9b3c(format.field_width, ReadProc, ReadProcArg, &num_chars, &overflow);

                    if (!num_chars) {
                        if (!is_secure) {
                            goto exit;
                        } else {
                            match_failure   = 1;
                            long_double_num = (*(float *) data_0211110c);
                            goto assign_float;
                        }
                    }

                    chars_read += num_chars;
                }

            assign_float:

                if (arg_ptr) {
                    switch (format.argument_options) {
                        case normal_argument:
                            *(float *) arg_ptr = long_double_num;
                            break;
                        case double_argument:
                            *(double *) arg_ptr = long_double_num;
                            break;
                        case long_double_argument:
                            *(long double *) arg_ptr = long_double_num;
                            break;
                    }

                    if (!match_failure) {
                        items_assigned++;
                    }
                }

                conversions++;
                break;

            case 'c':

                if (!format.field_width_specified) {
                    format.field_width = 1;
                }

                if (arg_ptr) {
                    if (is_secure) {
                        elem_valid   = 1;
                        elem_maxsize = (*(size_t *) ((arg += ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)) -
                                                     ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)));
                    }

                    num_chars = 0;

                    if (match_failure) {
                        if (elem_maxsize > 0) {
                            *arg_ptr = 0;
                        }
                        continue;
                    } else {
                        char *arg_start = arg_ptr;

                        while (format.field_width-- && (!is_secure || ((elem_valid = (elem_maxsize > num_chars)) != 0)) &&
                               ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1)) {
                            c = rval;

                            if (format.argument_options == wchar_argument) {
                                func_020e5954(((wchar_t *) arg_ptr), (char *) (&c), 1);
                                arg_ptr++;
                            } else {
                                *arg_ptr++ = c;
                            }
                            num_chars++;
                        }

                        c = rval;
                        if (!num_chars || (is_secure && !elem_valid)) {
                            if (!is_secure) {
                                goto exit;
                            } else {
                                match_failure = 1;
                                if (elem_maxsize > 0) {
                                    *arg_start = 0;
                                }
                                continue;
                            }
                        }

                        chars_read += num_chars;

                        items_assigned++;
                    }
                } else {
                    num_chars = 0;

                    while (format.field_width-- && ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1)) {
                        c = rval;
                        num_chars++;
                    }
                    c = rval;
                    if (!num_chars) {
                        goto exit;
                    }
                }

                conversions++;
                break;

            case '%':
                if (match_failure) {
                    continue;
                } else {
                    while (isspace(c = (*ReadProc)(ReadProcArg, 0, __GetAChar))) {
                        chars_read++;
                    }

                    if (c != '%') {
                        (*ReadProc)(ReadProcArg, c, __UngetAChar);
                        if (!is_secure) {
                            goto exit;
                        } else {
                            match_failure = 1;
                            continue;
                        }
                    }

                    chars_read++;
                }
                break;

            case 's':
                if (!match_failure) {
                    c = (*ReadProc)(ReadProcArg, 0, __GetAChar);
                    while (isspace(c)) {
                        chars_read++;
                        c = (*ReadProc)(ReadProcArg, 0, __GetAChar);
                    }

                    (*ReadProc)(ReadProcArg, c, __UngetAChar);
                }
            case '[':
                if (arg_ptr) {
                    if (is_secure) {
                        elem_valid   = 1;
                        elem_maxsize = (*(size_t *) ((arg += ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U)) -
                                                     ((((unsigned int) (sizeof(size_t))) + 3U) & ~3U))) -
                                       1;
                    }

                    num_chars = 0;

                    if (match_failure) {
                        if (elem_maxsize > 0) {
                            *arg_ptr = 0;
                        }
                        continue;
                    } else {
                        char *arg_start = arg_ptr;

                        while (format.field_width-- && (!is_secure || ((elem_valid = (elem_maxsize >= num_chars)) != 0)) &&
                               ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1)) {
                            c = rval;

                            if (!(format.char_set[(unsigned char) c >> 3] & (1 << (c & 7)))) {
                                break;
                            }

                            if (format.argument_options == wchar_argument) {
                                func_020e5954(((wchar_t *) arg_ptr), (char *) &c, 1);
                                arg_ptr = (char *) ((wchar_t *) arg_ptr + 1);
                            } else {
                                *arg_ptr++ = c;
                            }
                            num_chars++;
                        }
                        c = rval;

                        if (!num_chars || (is_secure && !elem_valid)) {
                            (*ReadProc)(ReadProcArg, c, __UngetAChar);
                            if (!is_secure) {
                                goto exit;
                            } else {
                                match_failure = 1;
                                if (elem_maxsize > 0) {
                                    *arg_start = 0;
                                }
                                continue;
                            }
                        }

                        chars_read += num_chars;

                        if (format.argument_options == wchar_argument) {
                            *(wchar_t *) arg_ptr = L'\0';
                        } else {
                            *arg_ptr = 0;
                        }

                        items_assigned++;
                    }
                } else {
                    num_chars = 0;

                    while (format.field_width-- && ((rval = ((*ReadProc)(ReadProcArg, 0, __GetAChar))) != -1)) {
                        c = rval;
                        if (!(format.char_set[(unsigned char) c >> 3] & (1 << (c & 7)))) {
                            break;
                        }

                        num_chars++;
                    }
                    c = rval;

                    if (!num_chars) {
                        (*ReadProc)(ReadProcArg, c, __UngetAChar);
                        break;
                    }
                    chars_read += num_chars;
                }

                if (format.field_width >= 0) {
                    (*ReadProc)(ReadProcArg, c, __UngetAChar);
                }

                conversions++;
                break;
            case 'n':
                if (arg_ptr) {
                    switch (format.argument_options) {
                        case normal_argument:
                            *(int *) arg_ptr = chars_read;
                            break;
                        case short_argument:
                            *(short *) arg_ptr = chars_read;
                            break;
                        case long_argument:
                            *(long *) arg_ptr = chars_read;
                            break;
                        case char_argument:
                            *(char *) arg_ptr = chars_read;
                            break;
                        case long_long_argument:
                            *(long long *) arg_ptr = chars_read;
                            break;
                    }
                }
                continue;
            case 0xFF:
            default:
                goto exit;
        }
    }

exit:

    if ((*ReadProc)(ReadProcArg, 0, __TestForError) && conversions == 0) {
        return -1;
    }

    return items_assigned;
}
