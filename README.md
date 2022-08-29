# Arduino Apple Keyboard Emulator
Apple Keyboard emulator to switch Target Display Mode of an iMac without a physically connected keyboard

1. Download and install Arduino IDE
2. Modify the Arduino Leonardo board description `/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/boards.txt`/`C:\Users\$username\AppData\Local\Arduino15\packages\arduino\hardware\avr\$version\boards.txt`
    ```
    leonardo.name=Arduino Leonardo
    leonardo.vid.0=0x2341
    leonardo.pid.0=0x0036
    leonardo.vid.1=0x2341
    leonardo.pid.1=0x8036
    leonardo.vid.2=0x2A03
    leonardo.pid.2=0x0036
    leonardo.vid.3=0x2A03
    leonardo.pid.3=0x8036
    
    leonardo.upload.tool=avrdude
    leonardo.upload.protocol=avr109
    leonardo.upload.maximum_size=28672
    leonardo.upload.maximum_data_size=2560
    leonardo.upload.speed=57600
    leonardo.upload.disable_flushing=true
    leonardo.upload.use_1200bps_touch=true
    leonardo.upload.wait_for_upload_port=true
    
    leonardo.bootloader.tool=avrdude
    leonardo.bootloader.low_fuses=0xff
    leonardo.bootloader.high_fuses=0xd8
    leonardo.bootloader.extended_fuses=0xcb
    leonardo.bootloader.file=caterina/Caterina-Leonardo.hex
    leonardo.bootloader.unlock_bits=0x3F
    leonardo.bootloader.lock_bits=0x2F
    
    leonardo.build.mcu=atmega32u4
    leonardo.build.f_cpu=16000000L
    leonardo.build.vid=0x05ac
    leonardo.build.pid=0x0221
    leonardo.build.usb_product="Apple Keyboard"
    leonardo.build.usb_manufacturer="Apple Computer, Inc."
    leonardo.build.board=AVR_LEONARDO
    leonardo.build.core=arduino
    leonardo.build.variant=leonardo
    leonardo.build.extra_flags={build.usb_flags}
    ```
3. Start/Restart the Arduino IDE
4. Open the `apple_keyboard.ino` in the Arduino IDE and upload the sketch
