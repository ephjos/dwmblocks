//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "sd bar whatsleft",						3600,		0},

	{" ", "sd bar volume",						0,		10},

	{" ", "sd bar traffic",						5,		0},

	{" ", "sd bar internet",						30,		0},

	{" ", "sd bar cpu_load",				1,		0},

	{" ", "sd bar memory",						5,		0},

	{" ", "sd bar temperature",				5,		0},

	{" ", "sd bar disk",				600,		0},

	{" ", "sd bar battery",						5,		0},

	{" ", "sd bar clock",						5,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
