/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=13",
	"IPAGothic:size=13",
	"symbola:size=13",
	"Font Awesome 6 Free:size=13",
	"Font Awesome 6 Free Solid:size=10",
	"Font Awesome 6 Brands:size=13"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// NORD COLORS:
#define bblack "#000000"
#define nord0 "#2E3440"
#define nord1 "#3B4252"
#define nord2 "#434C5E"
#define nord3 "#4C566A"
#define nord4 "#D8DEE9"
#define nord5 "#E5E9F0"
#define nord6 "#ECEFF4"
#define nord7 "#8FBCBB"
#define nord8 "#88C0D0"
#define nord9 "#81A1C1"
#define nord10 "#5E81AC"
#define nord11 "#BF616A"
#define nord12 "#D08770"
#define nord13 "#EBCB8B"
#define nord14 "#A3BE8C"
#define nord15 "#B48EAD"
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { nord4 , nord0 },
 	[SchemeSel] = { nord6, nord10 },
	[SchemeOut] = { nord0, nord10},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

static int sidepad = 20;
static int vertpad = 10;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

