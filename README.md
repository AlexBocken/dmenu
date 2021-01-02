# dmenu - dynamic menu
dmenu is an efficient dynamic menu for X.


## Requirements
In order to build dmenu you need the Xlib header files.


## Installation
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


## Running dmenu
See the man page for details.

## Notes on personal build

This version of dmenu has a few personal changes:

- Uses the nord theme
- instant patch; accepts last option if only one is available (disabled by default)
- dmenu_run uses a history file, can launch a terminal with said command by appending "!" to it
- initial text patch
- offset to match bar offset I use in dwm
- multiselection patch
