# Mini USB Devboard

<!--toc:start-->
- [Mini USB Devboard](#mini-usb-devboard)
  - [26/08/2026: Made the Schematic](#26082026-made-the-schematic)
  - [26/08/2026: Finished the PCB](#26082026-finished-the-pcb)
  - [27/08/2026: A Simple Case](#27082026-a-simple-case)
  - [27/08/2026: Finding Components and a Better README](#27082026-finding-components-and-a-better-readme)
<!--toc:end-->

A little CH552G USB Devboard, for quickly testing ideas.

Total hours: 8h

## 26/08/2026: Made the Schematic

Time Spent: 2h
Made the schematic for the board. The guide on the ysws was really helpful.
Still not sure what to do with the two leftover pins. Might just add more LEDs.
I tried out the bus feature in KiCad, it definitely helps once you have more than of bus in the project.
Definitely need to add pads for I2C pull-up resistors.
![A screenshot showing the schematic](assets/26-08_schematic.png)

## 26/08/2026: Finished the PCB

Time Spent: 2h
Added some finishing touches to the schematic ( and the I2C stuff)
![A screenshot showing the scheamtic after improvements](assets/schem-fix.png)
Also made the PCB, using it as the USB connector.

![A render of the pcb with all the components](assets/Pcb-render.png)
It has 2 LEDs on it, as well as two touch pads for inputs
All the other pins are available on the header with a nice cheat sheet on the underside.

## 27/08/2026: A Simple Case

Time Spent: 1h
I didn't want to obscure the underside of the pcb, since I put a pin cheatsheet there, so I went with an open-bottom case
The case is supposed to be snap fit.
![](assets/cad-case.png)

## 27/08/2026: Finding Components and a Better README

Time Spent: 2h
Finally got and found all the components for the build.
With the new EU tariffs, china is not feasible for small quantities. Thankfully TME had most of the components.
It's my first time picking components out, so I hope they will all be good.
Also got to work on filling out the README a bit more.

## 28/08/2026: Quick Firmware
Time Spent: 1h
Just realised that I had used the wrong pins for the the touch pads, should be correct now
Modified the blink code to add a quick touch test. Have to work on it.
I'm honestly tired and just want to be done with this
