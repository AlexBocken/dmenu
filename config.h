/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=13",
	"IPAGothic:size=13",
	"symbola:size=13"};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d7d5d1", "#000000" },
	[SchemeSel] = { "#d7d5d1", "#7D7A63" },
	[SchemeOut] = { "#d7d5d1", "#96A3A8" },
};



//static const char *colors[SchemeLast][2] = {
//	/*     fg         bg       */
//	[SchemeNorm] = { "#d3dae3", "#000000" },
//	[SchemeSel] = { "#d3dae3", "#718AAA" },
//	[SchemeOut] = { "#d3dae3", "#9DB1CE" },
//};

/*static const char *colors[SchemeLast][2] = {
	     fg         bg
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};*/

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static const int vertpad            = 10;       /* vertical padding of bar */
static const int sidepad            = 20;       /* horizontal padding of bar */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
