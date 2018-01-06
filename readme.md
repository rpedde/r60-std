# r60 std #

This is just a simple poker 60% board as a base for testing
stuff.

It's a 16MHz Atmega32U4 running [quantum mechanical
keyboard](https://github.com/qmk/qmk_firmware) firmware.

It should fit in most (all?) 60% poker cases.

## CAD/CAM ##

I have cnc milled plates for this board using openscad/dxf files generated
from [this project](https://github.com/rpedde/platemaker).

I have cnc milled cases for this board using openscad/stl files generate
from [this project](https://github.com/rpedde/r60-case).

## Changelog ##

Rev 1 (Ordered through easyeda, verified working):

 - Initial rev

Rev 1.1 (Ordered through easyeda, verified working) [gerbers](https://storage.googleapis.com/rpedde-public-gerbers/r60-std-r1.1.zip):

 - Changed PTH holes on sides to edge slot cuts, for ease in mfg

Rev 1.2 (Not verified working):

 - Silkscreen fixes
 - Move speaker connector, allow for direct drive of 8 ohm speaker

Rev 2.0 (Not verified working) [gerbers](https://storage.googleapis.com/rpedde-public-gerbers/r60-std-r2.0.zip):

 - Use SMT diodes rather than through-hole
 - Align components to fit better on vortex cases (braces between rows)

Rev 2.1 (Not verified working)

 - Switch SOD-323 footprint diodes to 0805
