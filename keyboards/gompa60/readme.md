Gompa60
===

![gh60 Rev C PCB](https://i.imgur.com/FejpoNF.jpg)

A common 60% PCB.

Keyboard Maintainer: QMK Community
Hardware Supported: typewriter keyboard
Hardware Availability: secondhand

Make example for this keyboard (after setting up your build environment):

    make gompa60:default

See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then the [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.


## gompa60 Hardware Information

    /* Column pin configuration
    * col:  0   1   2   3   4   5   6   7 
    * pin:  B4, B5, F0, F1, F4, F5, F6, F7  
    */
     
    /* Row pin configuration
    * row: 0   1   2   3   4   5   6   7 
    * pin: D2, D3, D1, D0, D4, C6, D7, E6 
    */
     
    GPIO pads
    0 F7 WASD LEDs
    1 F6 ESC LED
    2 F5 FN LED
    3 F4 POKER Arrow LEDs
     
    B2 Capslock LED
    B0 not connected
	
Functions to controls LED clusters
	
    gh60_caps_led_on()
    gh60_poker_leds_on()
    gh60_fn_led_on()
    gh60_esc_led_on()
    gh60_wasd_leds_on()
    
    gh60_caps_led_off()
    gh60_poker_leds_off()
    gh60_fn_led_off()
    gh60_esc_led_off()
    gh60_wasd_leds_off()
