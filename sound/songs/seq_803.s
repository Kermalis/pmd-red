@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_803_grp, bank_026
	.equ	seq_803_pri, 127
	.equ	seq_803_rev, 0
	.equ	seq_803_mvl, 127
	.equ	seq_803_key, 0

	.section .rodata
	.global	seq_803
	.align	2

@*********************** Track 01 ***********************@

seq_803_0:
	.byte	KEYSH , seq_803_key+0
	.byte	TEMPO , 190/2
	.byte		VOICE , 12
	.byte		VOL   , 120*seq_803_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 60
	.byte		MODT  , mod_pan
	.byte		N06   , En3 , v120
	.byte	W06
	.byte		N03   , Cn3 
	.byte	W03
	.byte		VOICE , 29
	.byte		N06   , Cn2 , v127
	.byte	W06
	.byte		        Cn2 , v056
	.byte	W06
	.byte		N24   , Cn2 , v036
	.byte	W24
	.byte	W02
	.byte	FINE

@******************************************************@

	.align	2

seq_803:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_803_pri	@ Priority
	.byte	seq_803_rev	@ Reverb

	.word	seq_803_grp

	.word	seq_803_0

	.end
