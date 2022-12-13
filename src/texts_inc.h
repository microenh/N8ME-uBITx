#undef MAKE_TEXT
#ifdef IN_HEADER_FILE
  #define MAKE_TEXT(A,B) extern const char A[];
#else
  #define MAKE_TEXT(A,B) const char A[] PROGMEM = B;
#endif

/* This is a way to maintain all PROGMEM texts in a single file.
 *
 * The arguments to the MAKE_TEXT macro are the name of the text and the value (in PROGMEM)
 * In text.h IN_HEADER_FILE is defined. In texts.cpp it is not.
 * 
 * texts.h
 * -----
 * #ifndef texts_h
 * #define texts_h
 *
 * #define IN_HEADER_FILE
 * #include "texts.inc."
 *
 * #endif
 * 
 * texts.cpp
 * -----
 * #include "texts.h"
 * #undef IN_HEADER_FILE
 * #include "texts.inc"
 */

#include <Arduino.h>

MAKE_TEXT(ENTER, "ENTER")
MAKE_TEXT(BS, "\x11" "-")
MAKE_TEXT(CANCEL, "CANCEL")
MAKE_TEXT(DECIMAL, ".")
MAKE_TEXT(FREQ1, "FREQ")
MAKE_TEXT(CAL, "CAL")
MAKE_TEXT(BFO, "BFO")
MAKE_TEXT(DELAY, "DELAY")
MAKE_TEXT(KEYER, "KEYER")
MAKE_TEXT(TOUCH, "TOUCH")
MAKE_TEXT(RIT, "RIT")
MAKE_TEXT(SPLIT, "SPLT")
MAKE_TEXT(FREQ, "FREQ")
MAKE_TEXT(FINP, "FINP")
MAKE_TEXT(CWP, "CW PTCH")
MAKE_TEXT(CWS, "CW SPD")
MAKE_TEXT(TUNE, "TUNE")
MAKE_TEXT(LOCK, "LOCK")
MAKE_TEXT(SETUP, "CFG")
MAKE_TEXT(BANNER, "N8ME [BITX 0.1")  // MAKE_TEXT(BANNER, "N8ME " "\xE5" "BITX 0.1")
MAKE_TEXT(KHZ, "KHZ")                // MAKE_TEXT(KHZ, "kHZ")
MAKE_TEXT(LSB_TEXT, "LSB")
MAKE_TEXT(USB_TEXT, "USB")
MAKE_TEXT(CWL_TEXT, "CWL")
MAKE_TEXT(CWU_TEXT, "CWU")
MAKE_TEXT(STEP_10, "10")
MAKE_TEXT(STEP_20, "20")
MAKE_TEXT(STEP_50, "50")
MAKE_TEXT(STEP_100, "100")
MAKE_TEXT(STEP_200, "200")
MAKE_TEXT(STEP_500, "500")
MAKE_TEXT(STEP_1K, "1K")
MAKE_TEXT(STEP_2K, "2K")
MAKE_TEXT(STEP_5K, "5K")
MAKE_TEXT(STEP_10K, "10K")
MAKE_TEXT(INPUT_FREQ, "FREQUENCY (KHZ)")
MAKE_TEXT(KEYER_HAND, "HAND")
MAKE_TEXT(KEYER_IAMA, "IAMBIC A")
MAKE_TEXT(KEYER_IAMB, "IAMBIC B")
MAKE_TEXT(KEYER_WK, "WINKEY")
MAKE_TEXT(PADDLE, "PADDLE")
MAKE_TEXT(NORMAL, "NORMAL")
MAKE_TEXT(REVERSE, "REV")
MAKE_TEXT(PTT_TEXT, "PTT")
MAKE_TEXT(SPOT, "SPOT")
MAKE_TEXT(MW, "MW")
MAKE_TEXT(ATTN, "ATTN")
MAKE_TEXT(TOUCH_CAL, "CLICK ON THE CROSS")
MAKE_TEXT(SAVE, "SAVE")
MAKE_TEXT(PUSH_ABORT, "PUSH KNOB TO ABORT")
MAKE_TEXT(TX_TEXT, "TX")
MAKE_TEXT(EN_TEXT, "ENABLE")
MAKE_TEXT(DIS_TEXT, "DISABLE")
MAKE_TEXT(TUNE_PWR, "TUNE PWR")
MAKE_TEXT(BAND, "BAND")
MAKE_TEXT(TEST, "TEST")
MAKE_TEXT(EEPROM_RESET, "EEPROM HAS BEEN RESET")
MAKE_TEXT(STARS, "***")
MAKE_TEXT(VFO, "VFO")
MAKE_TEXT(RF, "RF")
MAKE_TEXT(IF, "IF")
MAKE_TEXT(SHIFT, "SHIFT")
MAKE_TEXT(RESET, "RESET")
MAKE_TEXT(MEMORY, "MEMORY")