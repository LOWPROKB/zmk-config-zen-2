# minusfive's Corne-ish Zen V2 Custom Configuration

![Corne-ish Zen Logo](img/Zen_R3_sticker.png)

## Keymap

![minusfive's keymap](img/corneish_zen.svg)

## Resources

- The [official ZMK Firmware GitHub](https://github.com/zmkfirmware/zmk) repository. View the keymaps for other boards and shields as a starting point for your keymap.
- The [official ZMK Documentation](https://zmk.dev/docs) web site. Find the answers to many of your questions about ZMK Firmware.
- The [official ZMK Discord Server](https://zmk.dev/community/discord/invite). Instant conversations with other ZMK developers and users. Great technical resource!

## Instructions

1. Edit the keymap file(s):
    - Change [the keymap file](/config/corneish_zen.keymap) to edit keycodes, add new layers etc.
    - Change [the conf file](/config/corneish_zen.conf) to edit configuration settings like changing the deep sleep timeout
2. Commit and push. GitHub Actions will start building a new version of the firmware with the updated keymap and drawing.

## Firmware Files

To locate your firmware files...

1. Click "Actions" in the main navigation, and in the left navigation click the "Build" link.
2. Select the desired workflow run in the centre area of the page (based on date and time of the build you wish to use). You can also start a new build from this page by clicking the "Run workflow" button.
3. After clicking the desired workflow run, you should be presented with a section at the bottom of the page called "Artifacts". This section contains the results of your build, in a file called "firmware.zip"
4. Download the firmware zip archive and extract the two `.uf2` files. They are named according to which side they need to be flashed to.
5. Flash the firmware to your keyboard by double-clicking the reset button to put the it in bootloader mode. A window should pop up showing the contents of the storage on the keyboard. Drag and drop the correct `.uf2` file into the window. When the upload is complete the window will close and the keyboard will exit bootloader mode.
    - If you only changed [the keymap file](/config/corneish_zen.keymap) you only need to flash the left side firmware to the left side.
    - If you changed [the conf file](/config/corneish_zen.conf) you should flash both sides their respective files.

Your keyboard is now ready to use.
