//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/        /*Command*/             /*Update Interval*/     /*Update Signal*/
        {"", "/home/willf/.local/bin/clock",                 5,                      0},
	{"", "/home/willf/.local/bin/school",            86400,		             0},
	{"", "/home/willf/.local/bin/pkgs",		   30,			     0},
 	{"", "/home/willf/.local/bin/connection",	  120,			     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
