/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;					  /* -b  option; if 0, dmenu appears at bottom	 */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Space Mono:size=10"
};

static const char bg_color[]		= "#282a34";
static const char col_foreg[]		= "#ffffff";
static const char col_cyan[]		= "#81a2be";
static const char col_gray[]		= "#aaaaaa";

static const char *prompt = NULL;	  /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*			fg	 bg	   */
	[SchemeNorm] =	{ col_foreg, bg_color },
	[SchemeSel] =	{ col_foreg, col_gray},
	[SchemeOut] =	{ col_foreg, col_cyan },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
