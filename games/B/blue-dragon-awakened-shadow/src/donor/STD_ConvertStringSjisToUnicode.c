/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* STD_ConvertStringSjisToUnicode from https://github.com/ntrtwl/NitroSDK libraries/std/src/std_unicode.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
static inline void MI_StoreLE16(void *ptr, u16 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
    src[1]  = (u8) (val >> 8UL);
}
extern const u16(*ctrdgi_fl_maxtime);
typedef enum STDResult {
    STD_RESULT_SUCCESS,
    STD_RESULT_ERROR,
    STD_RESULT_INVALID_PARAM,
    STD_RESULT_CONVERSION_FAILED
} STDResult;
typedef STDResult (*STDConvertUnicodeCallback)(u16 *dst, int *dst_len, const char *src, int *src_len);
static inline BOOL STD_IsSjisLeadByte(int c) {
    return ((unsigned int) ((((u8) c) ^ 0x20) - 0xA1) < 0x3C);
}
static inline BOOL STD_IsSjisTrailByte(int c) {
    return (c != 0x7F) && ((u8) (c - 0x40) <= (0xFC - 0x40));
}
static inline BOOL STD_IsSjisCharacter(const char *s) {
    return STD_IsSjisLeadByte(s[0]) && STD_IsSjisTrailByte(s[1]);
}
extern STDResult STD_ConvertStringSjisToUnicode(u16 *dst, int *dst_len, const char *src, int *src_len,
                                                STDConvertUnicodeCallback callback);
extern u16 sjis2unicode_array[];
STDResult STD_ConvertStringSjisToUnicode(u16 *dst, int *dst_len, const char *src, int *src_len,
                                         STDConvertUnicodeCallback callback) {
    STDResult retval = STD_RESULT_SUCCESS;
    if (!src) {
        retval = STD_RESULT_INVALID_PARAM;
    } else {
        int src_pos = 0;
        int dst_pos = 0;
        int src_max = (src_len && (*src_len >= 0)) ? *src_len : 0x7FFFFFFF;
        int dst_max = (dst && dst_len && (*dst_len >= 0)) ? *dst_len : 0x7FFFFFFF;

        while ((dst_pos < dst_max) && (src_pos < src_max)) {
            u16 dst_tmp[4];
            int dst_count = 0;
            int src_count;
            u32 c1 = (u8) src[src_pos];

            if (!c1) {
                break;
            } else if (c1 <= 0x7E) {
                dst_tmp[0] = (u16) c1;
                src_count  = 1;
                dst_count  = 1;
            } else if ((c1 >= 0xA1) && (c1 <= 0xDF)) {
                dst_tmp[0] = (u16) (c1 + (0xFF61 - 0xA1));
                src_count  = 1;
                dst_count  = 1;
            } else if (STD_IsSjisCharacter(&src[src_pos])) {
                src_count = 2;
                if (src_pos + src_count <= src_max) {

                    u32 c2 = (u8) src[src_pos + 1];
                    c1 -= 0x81 + ((c1 >= 0xE0) ? (0xE0 - 0xA0) : 0);
                    dst_tmp[0] = sjis2unicode_array[c1 * 0xC0 + (c2 - 0x40)];
                    dst_count  = (dst_tmp[0] ? 1 : 0);
                }
            }

            if (dst_count == 0) {
                if (!callback) {
                    retval = STD_RESULT_CONVERSION_FAILED;
                } else {
                    src_count = src_max - src_pos;
                    dst_count = sizeof(dst_tmp) / sizeof(*dst_tmp);
                    retval    = (*callback)(dst_tmp, &dst_count, &src[src_pos], &src_count);
                }
                if (retval != STD_RESULT_SUCCESS) {
                    break;
                }
            }

            if ((src_pos + src_count > src_max) || (dst_pos + dst_count > dst_max)) {
                break;
            }

            if (dst) {
                int i;
                for (i = 0; i < dst_count; ++i) {
                    MI_StoreLE16(&dst[dst_pos + i], (u16) dst_tmp[i]);
                }
            }
            src_pos += src_count;
            dst_pos += dst_count;
        }

        if (src_len) {
            *src_len = src_pos;
        }
        if (dst_len) {
            *dst_len = dst_pos;
        }
    }
    return retval;
}
