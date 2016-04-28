# WITWM

A window manager designed with functionality and elegance in mind. 

**WITWM**: **W**ork**I**ng **T**itle **W**indow **M**anager.

--------------------------------------------------------------------


## Features

* Coming Soon

## Keybindings

	syntax: 
		<command> = "keybinding"
* logoff
* spawn
* resize
* move
* focus left/right/up/down
* quit
* maximize vert/horiz/full
* toggle stack/tile
* quick resize

## Todo:

* EWMH support
* Good keybinding support/
* Desktops/Groups
* Tiling Support
* Title bar for windows
* Minimization options
* Parser so config file can be plain text
- Think of of window placement scheme
- triple click for window snap:
  - once for half screen
  - twice for 2/3 of screen (or predefined ratio)
  - three times for original window size & position
- screen edge detection
- Optional window spawn placement
- get all values from a config file at runtime
- Dynamic:
  - Manual tiling
  - Stacking needs to have better window movement
    - window objects?
      - each window object has above, below, left, right closest window members
      - define what counts as above and below and left and right for stacking
        windows
- keybindings do different things based on window type (floating or tiled)
- optional sxhkd or internal config file
- utilize window centers for most things

