@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_676_grp, bank_026
	.equ	seq_676_pri, 127
	.equ	seq_676_rev, 0
	.equ	seq_676_mvl, 127
	.equ	seq_676_key, 0

	.section .rodata
	.global	seq_676
	.align	2

@*********************** Track 01 ***********************@

seq_676_0:
	.byte		VOL   , 127*seq_676_mvl/mxv
	.byte	KEYSH , seq_676_key+0
	.byte	TEMPO , 280/2
	.byte		VOICE , 38
	.byte		PAN   , c_v+0
	.byte	W02
	.byte		N08   , As2 , v127
	.byte	W09
	.byte		N07   , Ds3 
	.byte	W10
	.byte		N01   , Cs3 , v080
	.byte	W01
	.byte		        Cs3 , v100
	.byte	W01
	.byte		N23   , Ds3 , v127
	.byte	W24
	.byte	FINE

@******************************************************@

	.align	2

seq_676:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_676_pri	@ Priority
	.byte	seq_676_rev	@ Reverb

	.word	seq_676_grp

	.word	seq_676_0

	.end
