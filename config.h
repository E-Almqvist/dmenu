/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;					  /* -b  option; if 0, dmenu appears at bottom	 */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Code:size=11"
};

static const char bg_color[]		= "#111015";
static const char col_gray1[]		= "#222222";
static const char col_gray2[]		= "#444444";
static const char col_gray3[]		= "#bbbbbb";
static const char col_gray4[]		= "#eeeeee";
static const char col_cyan[]		= "#5f819d";

static const char *prompt = NULL;	  /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*					fg			 bg	   */
	[SchemeNorm] =	{ col_gray3, bg_color },
	[SchemeSel] =	{ col_gray4, col_cyan },
	[SchemeOut] =	{ col_gray4, col_cyan },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;
