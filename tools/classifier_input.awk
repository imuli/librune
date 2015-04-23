#!/usr/bin/awk -nf
BEGIN {
	FS=";"
	last=0
	lastout=0
	v["unknown"] = 32
	v["Cc;B"] = 33
	v["Cc;BN"] = 34
	v["Cc;S"] = 35
	v["Cc;WS"] = 36
	v["Cf;AL"] = 37
	v["Cf;AN"] = 38
	v["Cf;BN"] = 39
	v["Cf;FSI"] = 40
	v["Cf;L"] = 41
	v["Cf;LRE"] = 42
	v["Cf;LRI"] = 43
	v["Cf;LRO"] = 44
	v["Cf;ON"] = 45
	v["Cf;PDF"] = 46
	v["Cf;PDI"] = 47
	v["Cf;R"] = 48
	v["Cf;RLE"] = 49
	v["Cf;RLI"] = 50
	v["Cf;RLO"] = 51
	v["Co;L"] = 52
	v["Cs;L"] = 53
	v["Ll;L"] = 54
	v["Lm;AL"] = 55
	v["Lm;L"] = 56
	v["Lm;ON"] = 57
	v["Lm;R"] = 58
	v["Lo;AL"] = 59
	v["Lo;L"] = 60
	v["Lo;R"] = 61
	v["Lt;L"] = 62
	v["Lu;L"] = 63
	v["Mc;L"] = 64
	v["Me;NSM"] = 65
	v["Mn;L"] = 66
	v["Mn;NSM"] = 67
	v["Nd;AN"] = 68
	v["Nd;EN"] = 69
	v["Nd;L"] = 70
	v["Nd;R"] = 71
	v["Nl;L"] = 72
	v["Nl;ON"] = 73
	v["No;AN"] = 74
	v["No;EN"] = 75
	v["No;L"] = 76
	v["No;ON"] = 77
	v["No;R"] = 78
	v["Pc;ON"] = 79
	v["Pd;ES"] = 80
	v["Pd;ON"] = 81
	v["Pd;R"] = 82
	v["Pe;ON"] = 83
	v["Pf;ON"] = 84
	v["Pi;ON"] = 85
	v["Po;AL"] = 86
	v["Po;AN"] = 87
	v["Po;CS"] = 88
	v["Po;ET"] = 89
	v["Po;L"] = 90
	v["Po;ON"] = 91
	v["Po;R"] = 92
	v["Ps;ON"] = 93
	v["Sc;AL"] = 94
	v["Sc;ET"] = 95
	v["Sk;AL"] = 96
	v["Sk;L"] = 97
	v["Sk;ON"] = 98
	v["Sm;AL"] = 99
	v["Sm;CS"] = 100
	v["Sm;ES"] = 101
	v["Sm;ET"] = 102
	v["Sm;L"] = 103
	v["Sm;ON"] = 104
	v["So;AL"] = 105
	v["So;ET"] = 106
	v["So;L"] = 107
	v["So;ON"] = 108
	v["So;R"] = 109
	v["Zl;WS"] = 110
	v["Zp;B"] = 111
	v["Zs;CS"] = 112
	v["Zs;WS"] = 113
}

{	this = ("0x" $1)+0
	thisout = $3 $5;

	if(lastout != thisout) lastout = "Unkn"
	for(last++;last < this; last++){ printf("%s\n", lastout) }
	printf("%s\n", thisout)

	lastout = thisout
	last = this
}
