@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_412_grp, bank_026
	.equ	seq_412_pri, 127
	.equ	seq_412_rev, 0
	.equ	seq_412_mvl, 127
	.equ	seq_412_key, 0

	.section .rodata
	.global	seq_412
	.align	2

@*********************** Track 01 ***********************@

seq_412_0:
	.byte	KEYSH , seq_412_key+0
	.byte	TEMPO , 158/2
	.byte		VOICE , 23
	.byte		MOD   , 60
	.byte		VOL   , 120*seq_412_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BENDR , 20
	.byte	W01
	.byte		MODT  , mod_tre
	.byte		BEND  , c_v+0
	.byte	W04
	.byte		N03   , Ds2 , v127
	.byte	W01
	.byte		BEND  , c_v+5
	.byte	W01
	.byte		        c_v+7
	.byte	W01
	.byte		        c_v+10
	.byte		N04   , Gs2 
	.byte	W01
	.byte		BEND  , c_v+13
	.byte	W01
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+18
	.byte		N04   , Cn3 , v100
	.byte	W01
	.byte		BEND  , c_v+21
	.byte	W01
	.byte		        c_v+23
	.byte	W01
	.byte		        c_v+26
	.byte		N04   , En3 
	.byte	W01
	.byte		BEND  , c_v+29
	.byte	W01
	.byte		MOD   , 120
	.byte		BEND  , c_v+31
	.byte	W01
	.byte		        c_v+34
	.byte		N04   , Gn3 , v127
	.byte	W01
	.byte		BEND  , c_v+34
	.byte	W01
	.byte		        c_v+38
	.byte	W01
	.byte		        c_v+43
	.byte	W01
	.byte		        c_v+48
	.byte	FINE

@******************************************************@

	.align	2

seq_412:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_412_pri	@ Priority
	.byte	seq_412_rev	@ Reverb

	.word	seq_412_grp

	.word	seq_412_0

	.end
