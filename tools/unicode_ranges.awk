#!/usr/bin/awk -E
BEGIN {
	FS=";";
	FIELD=3
	if(ARGC > 0) MATCH=ARGV[1]
	ARGC--
	if(ARGC > 0) FIELD=ARGV[2]
	ARGV[1] = "/usr/share/unicode/UnicodeData.txt"
	first="";
}

$FIELD ~ MATCH {
	if(first == ""){
		first=$1
		if($11 != "") firstname=$11 
		else firstname=$2
	}
	last=$1
	if($11 != "") lastname=$11 
	else lastname=$2
	next
}

function printrange(){
	printf("	{%s0x%s, %s0x%s},	/* %s%s */\n", (5-length(first)) ? " " : "", tolower(first), (5-length(last)) ? " " : "", tolower(last), firstname, firstname == lastname ? "" : " … " lastname);
}

{
	if(first!="") printrange()
	first=""
}

END{
	if(first!="") printrange()
}
