//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "sd bar whatsleft",						60,		0},

	{" ", "sd bar volume",						0,		10},

	{" ", "sd bar battery",						5,		0},

	//{" ", "~/.local/bin/statusbar/temperature",				5,		0},

	{" ", "sd bar clock",						5,		0},

	{" ", "sd bar recording",						0,		10},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
