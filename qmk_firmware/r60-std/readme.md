r60std keyboard firmware
========================

## Ugh

I didn't really want to carry around a fork of QMK, and I wanted the
firmware in this repo, but I did build this with QMK.

Get qmk from https://github.com/qmk/qmk_firwmare

Check out rev 8a0997, link this directory as "r60std" in keyboards,
and then "make r60std:default" from the root of the qmk firmware
directory.  A r60std_default.hex should appear in the root of the qmk
directory.

## Layout

Default layout looks like this:

![keyboard-layout.png](keyboard-layout.png "default keyboard layout")