#include "m2c.h"

/* NitroSDK version string (VERSION section of the SDK), placed in .text after the module parameters
   (BuildInfo); same fakematch exception. */
#pragma define_section TEXTDATA ".text" \
                                ".text"

__declspec(TEXTDATA) char _SDK_NintendoDwc[56] = "[SDK+NINTENDO:DWC3.1.30001.080708.1933_DWC_3_1_PLUS]";
