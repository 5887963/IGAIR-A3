//meta
#define REQUIREDARMAVERSION 1.62
//CanSee
#define CANSEERADAR 1
#define CANSEEEYE 2
#define CANSEEOPTICS 4
#define CANSEEEAR 8
#define CANSEECOMPASS 16
#define CANSEEALL 31
#define CANSEEPERIPHERAL 32
#define CANSEERADARC CANSEERADAR+CANSEECOMPASS
//scope
#define PRIVATE 0
#define PROTECTED 1
#define PUBLIC 2
//side
#define NO_SIDE -1
#define EAST 0
#define WEST 1
#define RESISTANCE 2
#define CIVILIAN 3
#define NEUTRAL 4
#define ENEMY 5
#define FRIENDLY 6
#define LOGIC 7
//type (threat)
#define VSOFT 0
#define VARMOR 1
#define VAIR 2
//equip
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
//mags
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a