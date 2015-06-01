#!/usr/bin/awk -f
BEGIN {
	last=0
	out[0] = "Unkn"
	out[1] = "Unkn"
}

function show(){ printf("	{0x%06x, {%s,%s}},\n", last, out[0], out[1]) }

{	this = NR-1
	thisout = $1

	diff = this - last
	if(diff < 2){
		out[diff] = thisout
	} else if(out[diff % 2] != thisout){
		show()
		out[0] = thisout
		last = this
	}
}
END { show() }
