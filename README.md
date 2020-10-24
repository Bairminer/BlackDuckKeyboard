# BlackDuckKeyboard
A fully 3D printed 40% keyboard powered by QMK and a Teensy 2.0  
This is one of my older projects, originally from 2018, which I have recently ported to GitHub  

## Case
![Case](/Images/model.png)  
The case consists of 3 sections (Bottom, Plate, and Case) which are then split into 2 individual pieces for easier 3D printing. All screw holes are designed for 20mm long M2 screws. STL files can be found in the CADs folder. It is recomended that you hot glue the switches in place, or they may come loose when removing keycaps.
## Layout
![Layout](/Images/keymap.png)  
The physical layout of this keyboard is inspired by the HHKB Pro 2. Keybinds can be reconfigured to your liking via the QMK firmware. The layout was designed using http://www.keyboard-layout-editor.com/  
## Wiring
All switches are handwired to the Teensy 2.0 controller via the following diagram, in a column to row diode configuration. An optional 10 LED WS2812B strip for RGB underglow can be connected to D4.  
![Wiring](/Images/wiring.png)  
## Firmware
This keyboard is powered by the open source QMK firmware, available at https://github.com/qmk/qmk_firmware. I used https://kbfirmware.com/ to create the keybind definitions and my configuration json. A precompiled hex file and QMK source code can be found in the Code folder, along with the kbfirmware confgiguration json. To flash the hex file, download Teensy Loader from https://www.pjrc.com/teensy/loader.html, load the hex file, press the white button on the Teensy, then click program in Teensy Loader. 

## License
This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
