
/*
 * Wheel definitions
 */
 
 #include <avr/pgmspace.h>
 
 PROGMEM prog_uchar dizzy_four_cylinder[] = \
   { /* dizzy 4 cylinder */
     1,0,1,0
   };
   
 PROGMEM prog_uchar dizzy_six_cylinder[] = \
   { /* dizzy 6 cylinder */
     1,0,1,0,1,0
   };
   
 PROGMEM prog_uchar dizzy_eight_cylinder[] = \
   { /* dizzy 8 cyl */
     1,0,1,0,1,0,1,0
   };
   
 PROGMEM prog_uchar sixty_minus_two[] = \
   { /* 60-2 */
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,0,0,0,0
   };
   
 PROGMEM prog_uchar thirty_six_minus_one[] = \
   { /* 36-1 */
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     1,0,1,0,1,0,1,0,1,0, \
     0,0
   }; 
   
 PROGMEM prog_uchar four_minus_one_with_cam[] = \
   { /* 4-1 with cam */
     0,1,0,1,0,1,0,0,0,1, \
     2,1,0,1,0,0
   };
   
 PROGMEM prog_uchar eight_minus_one[] = \
   { /* 8-1 */
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,0
   };
  
  PROGMEM prog_uchar six_minus_one_with_cam[] = \
   { /* 6-1 with cam */
     0,0,1,0,0,1,0,0,1,0, \
     0,1,0,0,1,0,0,0,0,0, \
     1,0,0,1,2,2,1,0,0,1, \
     0,0,1,0,0,0
   };
   
  PROGMEM prog_uchar twelve_minus_one_with_cam[] = \
   { /* 12-1 with cam */
     0,0,0,0,0,1,0,0,0,0, \
     0,1,0,0,0,0,0,1,0,0, \
     0,0,0,1,0,0,0,0,0,1, \
     0,0,0,0,0,1,0,0,0,0, \
     0,1,0,0,0,0,0,1,0,0, \
     0,0,0,1,0,0,0,0,0,1, \
     0,0,0,0,0,1,0,0,0,0, \
     0,0,0,0,0,0,0,1,0,0, \
     0,0,0,1,0,0,0,0,0,1, \
     0,0,0,0,0,1,0,0,0,0, \
     0,1,0,0,0,0,0,1,0,0, \
     0,0,0,1,0,0,0,0,0,1, \
     0,0,0,0,0,1,2,2,2,2, \
     2,1,0,0,0,0,0,1,0,0, \
     0,0,0,0
   };
   
  PROGMEM prog_uchar fourty_minus_one[] = \
   { /* 40-1 */
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,1, \
     0,1,0,1,0,1,0,1,0,0 
   };
   
  PROGMEM prog_uchar dizzy_trigger_return[] = \
   { /* dizzy trigger return */
     0,0,0,0,0,1,1,1,1
   };
   
  PROGMEM prog_uchar oddfire_vr[] = \
   { /* Oddfire VR */
     1,0,0,0,0,0,0,0,0,1, \
     0,0,0,0,0,0,0,0,0,0, \
     0,0,0,0
   };
   
  PROGMEM prog_uchar optispark_lt1[] = \
  { /* Optispark 360 outside teeth, 8 varying inside teeth */
  /* 1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30 */
    3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,2,3,2,3,2,3,2,3,2, /* 0-30 */
    3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 31-60 */
    1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 61-90 */
    3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 91-120 */
    3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 121-150 */
    1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 151-180 */
    3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 181-210 */
    1,0,1,0,1,0,1,0,1,0,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 211-240 */
    1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 241-270 */
    3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 271-300 */
    1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,2,3,2,3,2,3,2,3,2,3,2,3,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 301-330 */
    1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0, /* 331-360 */
  };
