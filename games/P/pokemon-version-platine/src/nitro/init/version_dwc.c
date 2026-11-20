#include "m2c.h"

/* NitroSDK version string (VERSION section of the SDK), placed in .text after the module parameters
   (BuildInfo); same fakematch exception. */
#pragma define_section TEXTDATA ".text" \
                                ".text"

__declspec(TEXTDATA) char _SDK_NintendoDwc[56] = "[SDK+NINTENDO:DWC2.2.30008.080630.1906_DWC_2_2_PLUS8]";
