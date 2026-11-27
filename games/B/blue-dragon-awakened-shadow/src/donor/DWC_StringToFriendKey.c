/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DWC_StringToFriendKey from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long int u64;
extern u64 DWC_StringToFriendKey(const char *string);
u64 DWC_StringToFriendKey(const char *string) {
    int i;
    u64 result = 0;
    u64 dec    = 1;

    for (i = 0; i < 12; ++i) {
        char tmp = *(string + 12 - 1 - i);

        if (tmp < '0' || tmp > '9') {
            return 0;
        }

        result += (tmp - '0') * dec;
        dec *= 10;
    }

    return result;
}
