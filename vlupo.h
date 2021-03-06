/* VLUPO IO REGISTER R1.1*/
#define VLUPO_IO_LVDSIN     0x00   // R   D16
#define VLUPO_IO_LVDSCOIN   0x02   // R   D16
#define VLUPO_IO_NIMIN      0x04   // R   D16
#define VLUPO_IO_NIMCOIN    0x06   // R   D16
#define VLUPO_IO_PULSEWIDTH 0x40   // RW D16
#define VLUPO_IO_INTDELAY   0x42   // RW D16
#define VLUPO_IO_CLEAR      0x90   // R  D16
#define VLUPO_IO_INTDISABLE 0x80   //  W D16
#define VLUPO_IO_INTENABLE  0xa0   //  W D16
#define VLUPO_IO_LEVEL      0x00   //  W D16
#define VLUPO_IO_PULSE      0x10   //  W D16

/* VLUPO TS R1.0*/
#define VLUPO_TS_DATA24L      0x00   // R   D32
#define VLUPO_TS_DATA24H      0x04   // R   D32
#define VLUPO_TS_DATA32L      0x08   // R   D32
#define VLUPO_TS_DATA32H      0x0c   // R   D32
#define VLUPO_TS_TRGCOUNTER   0x10   // R   D32
#define VLUPO_TS_FIFOCNT      0x14   // R   D32
#define VLUPO_TS_DATAFLY      0x18   // R   D32
#define VLUPO_TS_PULSEWIDTH   0x40   // RW D16
#define VLUPO_TS_INTDELAY     0x42   // RW D16
#define VLUPO_TS_CLEAR        0x90   // R  D16
#define VLUPO_TS_RESETTS      0x92   // R  D16
#define VLUPO_TS_CLEARCOUNTER 0x94   // R  D16
#define VLUPO_TS_INTDISABLE   0x80   //  W D16
#define VLUPO_TS_INTENABLE    0xa0   //  W D16
#define VLUPO_TS_LEVEL        0x00   //  W D16
#define VLUPO_TS_PULSE        0x10   //  W D16
#define VLUPO_TS_CLKMODE      0X60   //  W D16

/* VLUPO DAQ MASTER R1.0 */
#define VLUPO_DM_CLK1M        0x00   // R  D32
#define VLUPO_DM_CLK10K       0x04   // R  D32
#define VLUPO_DM_CLK1K        0x08   // R  D32
#define VLUPO_DM_LEVEL        0x00   //  W D16
#define VLUPO_DM_PULSE        0x10   //  W D16
#define VLUPO_DM_UNGATED      0x10   // R  D32
#define VLUPO_DM_GATED        0x14   // R  D32
#define VLUPO_DM_SCR0         0x20   // R  D32
#define VLUPO_DM_SCR1         0x24   // R  D32
#define VLUPO_DM_SCR2         0x28   // R  D32
#define VLUPO_DM_SCR3         0x2c   // R  D32
#define VLUPO_DM_TRGSRC       0x30   // R  D32
#define VLUPO_DM_PULSEWIDTH   0x40   // RW D16
#define VLUPO_DM_INTDELAY     0x42   // RW D16
#define VLUPO_DM_INTEVTCNT    0x44   // RW D16
#define VLUPO_DM_OUTCONF0     0x50   // RW D16
#define VLUPO_DM_OUTCONF1     0x52   // RW D16
#define VLUPO_DM_OUTCONF2     0x54   // RW D16
#define VLUPO_DM_OUTCONF3     0x56   // RW D16
#define VLUPO_DM_ANDOR0       0x60   // RW D16
#define VLUPO_DM_ANDOR1       0x62   // RW D16
#define VLUPO_DM_ANDOR2       0x64   // RW D16
#define VLUPO_DM_ANDOR3       0x66   // RW D16
#define VLUPO_DM_TRGCONF      0x68   // RW D16
#define VLUPO_DM_TRGACT       0x6a   // RW D16
#define VLUPO_DM_VERSION      0x70   // R  D16
#define VLUPO_DM_CLEAR        0x90   // R  D16
#define VLUPO_DM_CLEARSCR     0x92   // R  D16
#define VLUPO_DM_CLEARTRGSCR  0x94   // R  D16
#define VLUPO_DM_CLEARALL     0x96   // R  D16
#define VLUPO_DM_INTDISABLE   0x80   //  W D16
#define VLUPO_DM_INTENABLE    0xa0   //  W D16
