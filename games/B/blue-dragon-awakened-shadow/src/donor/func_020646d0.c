/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* gpiSetInfoi from https://github.com/Project-Holon/aletheia src/game/ov009/gpiinfo.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef enum _GPResult {
    GP_NO_ERROR,
    GP_MEMORY_ERROR,
    GP_PARAMETER_ERROR,
    GP_NETWORK_ERROR,
    GP_SERVER_ERROR,
    GP_MISC_ERROR,
    GP_COUNT
} GPResult;
extern void gpiSetErrorString(void **connection, char *errorString);
extern int func_020068c0(char *dst, const char *fmt, ...);
extern int func_02064650(void **connection, char *info, char *value);
extern int func_02064690(void **connection, char *info, char *value);
extern GPResult func_020646d0(void **connection, int info, int value);
extern char data_020fb238[];
extern char data_020fb250[];
extern char data_020fb290[];
extern char data_020fb2a8[];
extern char data_020fb2b0[];
extern char data_020fb2b8[];
extern char data_020fb2c0[];
extern char data_020fb2c8[];
extern char data_020fb2d0[];
extern char data_020fb2d8[];
extern char data_020fb348[];
extern char data_020fb35c[];
extern char data_020fb360[];
extern char data_020fb364[];
extern char data_020fb368[];
extern char data_020fb36c[];
extern char data_020fb37c[];
extern char data_020fb38c[];
extern char data_020fb398[];
extern char data_020fb3a4[];
extern char data_020fb3b4[];
extern char data_020fb3c4[];
extern char data_020fb3d4[];
extern char data_020fb3e8[];
extern char data_020fb3f8[];
int func_02064650(void **connection, char *info, char *value);
int func_02064690(void **connection, char *info, char *value);
GPResult func_020646d0(void **connection, int info, int value) {
    char intValue[16];
    GPResult __result__;

    switch (info) {
        case 0x708:
            if (value < 0) {
                gpiSetErrorString(connection, data_020fb348);
                return 2;
            }
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb250, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x70B:
            switch (value) {
                case 0x500:
                    __result__ = func_02064650(connection, data_020fb290, data_020fb360);
                    if (__result__) {
                        return __result__;
                    }
                    break;
                case 0x501:
                    __result__ = func_02064650(connection, data_020fb290, data_020fb364);
                    if (__result__) {
                        return __result__;
                    }
                    break;
                case 0x502:
                    __result__ = func_02064650(connection, data_020fb290, data_020fb368);
                    if (__result__) {
                        return __result__;
                    }
                    break;
                default:
                    gpiSetErrorString(connection, data_020fb36c);
                    return 2;
            }
            break;
        case 0x706:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb238, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x70C:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064690(connection, data_020fb37c, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x70D:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064690(connection, data_020fb38c, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x70E:
            func_020068c0(intValue, data_020fb35c, value / 16);
            __result__ = func_02064690(connection, data_020fb398, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x710:
            func_020068c0(intValue, data_020fb35c, value / 4);
            __result__ = func_02064690(connection, data_020fb3a4, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x712:
            func_020068c0(intValue, data_020fb35c, value / 4);
            __result__ = func_02064690(connection, data_020fb3b4, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x713:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064690(connection, data_020fb3c4, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x714:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064690(connection, data_020fb3d4, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x715:
            value = value;
            if (value) {
                value = 1;
            }
            func_020068c0(intValue, data_020fb35c, value);
            __result__ = func_02064690(connection, data_020fb3e8, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x718:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2a8, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x719:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2b0, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x71A:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2b8, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x71B:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2c0, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x71C:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2c8, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x71D:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2d0, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        case 0x71E:
            func_020068c0(intValue, data_020fb35c);
            __result__ = func_02064650(connection, data_020fb2d8, intValue);
            if (__result__) {
                return __result__;
            }
            break;
        default:
            gpiSetErrorString(connection, data_020fb3f8);
            return 2;
    }
    return 0;
}
