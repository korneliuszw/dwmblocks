//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"",	"music",	0,	11}, */
	/* {"",	"crypto",	0,	13}, */
   {"",  "vpn-status", 60, 20 },
   {"",	"mailbox",	180,	12},
	{"",	"memory",	10,	14},
	/* {"",	"cpu",		10,	13}, */
	/* {"",	"moonphase",	18000,	5}, */
	{"",	"volume",	0,	10},
	{"",	"clock",	60,	1},
	{"",	"internet",	5,	4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
