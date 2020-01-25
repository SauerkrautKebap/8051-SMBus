#define TIMER0  0b00;
#define TIMER1  0b01;
#define TIMER2H 0b10;
#define TIMER2L 0b11;


typedef struct settings_t {
    char SMBEnable      : 1;
    char SMBSlaveInhibit: 1;
    char SMBExtHold     : 1;
    char SMBSCLTimeout  : 1;
    char SMBFreeTimeout : 1;
    char SMBClockSource : 2;
} settings;

void I2Csettings(struct settings_t *settings) {
    SMB0CF = &settings;

    if (settings.SMBSCLTimeout){
        
    }
    

} 

