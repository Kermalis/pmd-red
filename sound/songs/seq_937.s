@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_937_grp, bank_027
	.equ	seq_937_pri, 127
	.equ	seq_937_rev, 0
	.equ	seq_937_mvl, 127
	.equ	seq_937_key, 0

	.section .rodata
	.global	seq_937
	.align	2

@*********************** Track 01 ***********************@

seq_937_0:
	.byte	KEYSH , seq_937_key+0
	.byte	TEMPO , 200/2
	.byte		VOICE , 60
	.byte		VOL   , 70*seq_937_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 90
	.byte		N10   , Dn2 , v127
	.byte	W10
	.byte		MOD   , 20
	.byte		N05   , As3 , v100
	.byte	W05
	.byte		        En4 
	.byte	W05
	.byte		        As4 
	.byte	W05
	.byte		        As4 , v032
	.byte	W05
	.byte	FINE

@******************************************************@

	.align	2

seq_937:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_937_pri	@ Priority
	.byte	seq_937_rev	@ Reverb

	.word	seq_937_grp

	.word	seq_937_0

	.end