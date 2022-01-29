;CONSULTAR DATASHEET DEL PIC18F45K50

TMR0N MACRO PRESCALER, TMROH, TMROL
               ;PARA 16 BITS
               MOVLW 0x00
               MOVWF T0CON
               ADDLW PRESCALER
               ADDWF T0CON
               MOVLW TMROH
	       MOVWF TMR0H
	       MOVLW TMROL
	       MOVWF TMR0L
	       BSF T0CON,TMR0ON
	       BTFSS INTCON,TMR0IF 
	       goto $-2
	       BCF T0CON,TMR0ON
	       BCF INTCON,TMR0IF
         endm

