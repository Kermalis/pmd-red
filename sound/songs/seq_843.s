@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_843_grp, bank_026
	.equ	seq_843_pri, 127
	.equ	seq_843_rev, 0
	.equ	seq_843_mvl, 127
	.equ	seq_843_key, 0

	.section .rodata
	.global	seq_843
	.align	2

@*********************** Track 01 ***********************@

seq_843_0:
	.byte	KEYSH , seq_843_key+0
	.byte	TEMPO , 180/2
	.byte		VOICE , 1
	.byte	W01
	.byte		VOL   , 120*seq_843_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		N07   , En3 , v120
	.byte	W01
	.byte		BENDR , 13
	.byte		BEND  , c_v+1
	.byte	W01
	.byte		        c_v+4
	.byte	W01
	.byte		        c_v+9
	.byte	W06
	.byte		        c_v-1
	.byte		N06   , Cs4 , v088
	.byte	W01
	.byte		BEND  , c_v+2
	.byte	W01
	.byte		        c_v+15
	.byte	W19
	.byte		VOL   , 118*seq_843_mvl/mxv
	.byte	W02
	.byte		        117*seq_843_mvl/mxv
	.byte	W01
	.byte		        116*seq_843_mvl/mxv
	.byte	W01
	.byte		        114*seq_843_mvl/mxv
	.byte	W01
	.byte		        111*seq_843_mvl/mxv
	.byte	W01
	.byte		        108*seq_843_mvl/mxv
	.byte	W01
	.byte		        104*seq_843_mvl/mxv
	.byte	W01
	.byte		        99*seq_843_mvl/mxv
	.byte	W01
	.byte		        94*seq_843_mvl/mxv
	.byte	W01
	.byte		        82*seq_843_mvl/mxv
	.byte	W01
	.byte		        75*seq_843_mvl/mxv
	.byte	W01
	.byte		        67*seq_843_mvl/mxv
	.byte	W01
	.byte		        59*seq_843_mvl/mxv
	.byte	W01
	.byte		        50*seq_843_mvl/mxv
	.byte	W01
	.byte		        41*seq_843_mvl/mxv
	.byte	W01
	.byte		        31*seq_843_mvl/mxv
	.byte	W01
	.byte		        20*seq_843_mvl/mxv
	.byte	W01
	.byte		        9*seq_843_mvl/mxv
	.byte	W01
	.byte		        0*seq_843_mvl/mxv
	.byte	FINE

@*********************** Track 02 ***********************@

seq_843_1:
	.byte	KEYSH , seq_843_key+0
	.byte		VOICE , 3
	.byte		VOL   , 125*seq_843_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 50
	.byte	W01
	.byte		N03   , Dn3 , v127
	.byte	W03
	.byte		VOICE , 14
	.byte	W01
	.byte		N03   , Gn3 , v100
	.byte	W01
	.byte		VOL   , 122*seq_843_mvl/mxv
	.byte	W01
	.byte		        119*seq_843_mvl/mxv
	.byte	W01
	.byte		        107*seq_843_mvl/mxv
	.byte	W02
	.byte		BEND  , c_v+32
	.byte	W01
	.byte		VOL   , 120*seq_843_mvl/mxv
	.byte		BEND  , c_v+30
	.byte	W01
	.byte		VOL   , 115*seq_843_mvl/mxv
	.byte		BEND  , c_v+26
	.byte	W01
	.byte		VOL   , 106*seq_843_mvl/mxv
	.byte		BEND  , c_v+9
	.byte	W01
	.byte		VOL   , 94*seq_843_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W01
	.byte		VOL   , 60*seq_843_mvl/mxv
	.byte	W01
	.byte		        37*seq_843_mvl/mxv
	.byte	W01
	.byte		        0*seq_843_mvl/mxv
	.byte	FINE

@******************************************************@

	.align	2

seq_843:
	.byte	2	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_843_pri	@ Priority
	.byte	seq_843_rev	@ Reverb

	.word	seq_843_grp

	.word	seq_843_0
	.word	seq_843_1

	.end
