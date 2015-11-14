;------------------------------------------------------------------------
;                                                                       |
;   FILE        :nc_define.inc                                          |
;   DATE        :Sun, Feb 15, 2015                                      |
;   DESCRIPTION :interrupt program.                                     |
;   CPU GROUP   :29                                                     |
;                                                                       |
;   This file is generated by Renesas Project Generator (Ver.4.19).     |
;   NOTE:THIS IS A TYPICAL EXAMPLE.                                     |
;------------------------------------------------------------------------
; Macro Symbol definition
__NEAR_ROM_FLG__   .equ	0	; NEAR ROM flag definition
__FAR_RAM_FLG__    .equ	0	; FAR RAM flag definition
__STANDARD_IO__    .equ	0	; STANDARD I/O flag definition
__HEAPSIZE__       .equ	0H	; HEEP SIZE definition
__STACKSIZE__      .equ	0100H	; STACK SIZE definition
__ISTACKSIZE__     .equ	0100H	; INTERRUPT STACK SIZE definition
__VECTOR_ADR__     .equ	0ffd00H	; INTERRUPT VECTOR ADDRESS definition
__ROM_TOPADR__     .equ	0E0000H	; ROM TOP ADDRESS definition
__SPECIAL_PRG__    .equ 0f8000H		; Special page program address