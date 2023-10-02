#include <xc.inc>
; PIC16F1619 Configuration Bit Settings 
;configuration word 1
CONFIG FOSC = INTOSC    // Oscillator Selection Bits (INTOSC oscillator: I/O function on CLKIN pin)
CONFIG PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
CONFIG MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
CONFIG CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
CONFIG BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
CONFIG CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
CONFIG IESO = ON        // Internal/External Switch Over (Internal External Switch Over mode is enabled)
CONFIG FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)
;configuration word 2
CONFIG WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
CONFIG PPS1WAY = ON     // Peripheral Pin Select one-way control (The PPSLOCK bit cannot be cleared once it is set by software)
CONFIG ZCD = OFF        // Zero Cross Detect Disable Bit (ZCD disable.  ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
CONFIG PLLEN = ON       // PLL Enable Bit (4x PLL is always enabled)
CONFIG STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
CONFIG BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
CONFIG LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
CONFIG LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)
;configuration word 3
CONFIG WDTCPS = WDTCPS1F// WDT Period Select (Software Control (WDTPS))
CONFIG WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
CONFIG WDTCWS = WDTCWSSW// WDT Window Select (Software WDT window size control (WDTWS bits))
CONFIG WDTCCS = SWC     // WDT Input Clock Selector (Software control, controlled by WDTCS bits)

PSECT resetVec,class=CODE,delta=2

resetVec:
	PAGESEL main ;jump to the main routine
	goto main
PSECT code
main:
	movlb 01H	;BANKSEL TRISA
	bcf TRISA,5
	bcf TRISA,4
	bcf TRISA,2
	bcf TRISC,5
	movlb 03H	;BANKSEL  ANSELA
	bcf ANSELA,5
	bcf ANSELA,4
	bcf ANSELA,2
	bcf ANSELC,5
	movlb 00H	;BANKSEL PORTC 
	bsf PORTA,5
	bcf PORTA,4
	bsf PORTA,2
	bcf PORTC,5	
LOOP:
	goto    LOOP	;loop forever!
	END resetVec