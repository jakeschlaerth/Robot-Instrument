Using funding from the Provost Undergraduate Research Fund from Ohio University.

This instrument is inspired by a renaissance instrument called the “hurdy gurdy.” The hurdy
gurdy is a multiple stringed instrument that utilizes a spinning wheel that rubs against
the strings in order to make them vibrate, much like how the friction from a violin bow
activates the violin’s strings to vibrate. In order for the hurdy gurdy to be played, the
performer must use one hand to crank a mechanism that spins the wheel touching the
strings. Unfortunately, the instrument has limitations due to the fact that the wheel is
touching all the strings, therefore making them all ring at one time. This is especially
inconvenient if one hopes to play in more than one key, or play more expressively by
using all 12 notes that create all western musical scales.

This instrument consists of multiple strings individually being activated by small direct current
(DC) motors with wooden wheels that rub against the strings, acting as a sort of infinite bow. 
The instrument utilizes various guitar components, including strings, pickups, tuning pegs, bridges,
and quarter inch cable outputaffixed to a wooden body.
The strings are fixed to a bridge at a point towards the center of the instrument, and be 
attached to a guitar tuning mechanism at the far end of the body. Before the string arrives at the tuning key, it must be pulled over a
second bridge near the tuning keys on the outside of the instrument. A key difference between this 
and the ancient instrument is that one can move this second bridge to any location
in order to change the length, and thus pitch, of vibrating string, expanding the tessiturra of the instrument.

Small wheels attached to DC motors act as a kind of infinite violin bow. These wheels are rubbed with violin rosin
to increase friction. Conversely from the hurdy-gurdy, each string has an individual wheel to activate it.
These motors are controlled with a microcontroller called an Arduino. The Arduino acts as an interface
for turning the motors on and off. The Arduino  recieves input via serial busfrom a laptop, which will
generate on/off instructions as well as speed via MIDI data, including note on, note off, and velocity data.
This MIDI data is genereated from a USB MIDI keyboard plugged into the laptop.
The performer is able to tune each string to a desired pitch, and play the instrument using a common MIDI
keyboard.  
