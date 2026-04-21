# split_kat

![split_kat](imgur.com image replace me!)

This is a 4x6 split keyboard with 3 thumbkeys. The home row is the 3rd row, and the home thumbkey is the centre one. I used low-profile kalih-v2 switches, but normal Cherry MX switches should fit too.

* Keyboard Maintainer: [Shen-Kit Hia](https://github.com/shen-kit)
* Hardware Supported: RP2040 - I used a WeActStudio development board from Tayda Electronics, but a normal Raspi Pico should work the same
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make split_kat:default

Flashing example for this keyboard:

    make split_kat:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` (in the EXTRA layer)

