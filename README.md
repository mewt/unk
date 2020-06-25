# UNK

My own version of <a href="https://ultimatehackingkeyboard.com/">UHK</a>. This is still a work-in-progress build logs.

### Goals

- Splitted-staggered keyboard
- Handwired
- As thin as possible (thinner than Vortex Core)
- Fully programmable (QMK)
- Almost zero learning curve (~ortholinear~, ~symbols through modifier/layer~)
- Ergonomic as UHK
- Generic size of keycaps (any 75-80% keycap set should be fitted)
- Interchangeable middle modules (touchpad, trackball, smartphone dock)

### Parts

| Item  | Price (rupiah) |
| ------------- | -------------: |
| Existing DSA keycaps set from a <a href="https://www.google.com/search?q=vortex+tab+75&source=lnms&tbm=isch">Vortex Tab 75 keyboard</a> | 0 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=514326055&dtl_id=771431683">Gateron Brown switches</a>, 68 @ Rp 2.400 | 163.200 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=524106095&dtl_id=786051991">IN4148 diodes</a>, 200 @ Rp 100 | 20.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=520483166&dtl_id=780648825">Pro micro ATMEGA32U4 16Mhz 5V</a>, 2 @ Rp 52.800 | 105.600 |
| Stainless steel plates + laser cutting service at <a href="https://www.instagram.com/laserindonesia/">Laser Indonesia</a>, 1.5mm top plate + 2.0mm bottom plate | 463.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=524168394&dtl_id=786149367">Cherry switch stabilizers (1x6u, 6x2u)</a> | 210.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=523970821&dtl_id=785853463">M3 x 6mm female to female spacer</a>, 30 @ Rp 1.200 | 36.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=519530379&dtl_id=779219817">Dupont wire jumper cable for breadboard project</a>, 100 @ Rp 375 | 37.500 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=524108021&dtl_id=786054902">Carbon vinyl sticker 30 meter</a> | 45.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=523970823&dtl_id=785853465">Neodyum super magnet 20 x 10 x 2mm</a>, 16 @ Rp 3.700 | 59.200 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=525632439&dtl_id=788362577">M3x3mm screw for top plate</a>, 20 @ Rp 3.000 | 60.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=523970818&dtl_id=785853460">M3x5mm hex screw for bottom plate</a>, 30 @ Rp 1.500 | 45.000 |
| <a href="https://www.bukalapak.com/product_detail_history?product_id=387589838&product_sku_id=337897319&transaction_id=2832367677">Wood wrist rest for TKL size mechanical keyboard (36cm)</a> | 100.000 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=521809361&dtl_id=782626464">Type C USB to micro USB adapter</a>, 2 @ Rp 15.000 | 30.000 |
| <a href="https://www.bukalapak.com/product_detail_history?product_id=2175738349&product_sku_id=2181000539&transaction_id=2614550530">Tactile switch push button 6 x 6 x 10mm</a>, 2 @ Rp 2.800 | 5.600 |
| <a href="https://www.tokopedia.com/snapshot_product?order_id=521809362&dtl_id=782626465">TRRS PCB 3.5mm jack socket</a>, 2 @ Rp 12.000 | 24.000 |
| 3.5mm TRRS 4 pins for Hifiman Balanced Male Plug, 2 @ Rp 12.500 | 25.000 |
| Joyseus 2 in 1 coiled data cable 1M (micro USB & type C) | 45.000 |

*Some items were purcashed more than the need for spare/stockpile.*

### Layout

- Combined : http://www.keyboard-layout-editor.com/#/gists/457787e3b1938c4cbe9d65c7b7bd31ef
- Left half: http://www.keyboard-layout-editor.com/#/gists/f117f3cbc2d0b1bf17206992068f9017
- Right half: http://www.keyboard-layout-editor.com/#/gists/e9e79566d1be71f77f1f2d33660011e5

<img src="/assets/layout.png">

### Plate

Download:
- <a href="https://github.com/herpiko/ultimate-ngoprek-keyboard/raw/master/split-full-final-cut.svg">SVG (Inkscape)</a>
- <a href="https://github.com/herpiko/ultimate-ngoprek-keyboard/raw/master/split-full-final-cut.ai">Adobe Illustrator</a>

<img src="/assets/plate-design.png">

### Build Logs

#### 20200612

The wish was occured a loooooongc time ago, but I began to (seriously) design the keyboard from this date.

#### 20200615

Pro micro clones arrived. Small important things.

<img width="650" src="/assets/promicro.png">

#### 20200617

The plates arrived. The top plate's thickness is 1.5mm and the bottom plate is 2mm. I'm a bit surprissed that these plates were quite heavy.

<img width="650" src="/assets/plate-1.jpg">
<img width="650" src="/assets/plate-3.jpg">

#### 20200619

I put carbon-like sticker on the inner side of bottom plate to avoid shorting from the wiring.

<img width="650" src="/assets/split-magnet.png">

Also there were four strong neodyum magnets to help the two parts stick together.

<img width="650" src="/assets/split-magnet.gif">

#### 20200620

Handwired. Pardon my mediocre soldering skill.

<img width="650" src="/assets/handwired.png">

<img width="650" src="/assets/pro-micro-testing.jpg">

#### 20200622

Fully working left half with modified <a href="https://github.com/herpiko/qmk_firmware/tree/uhk">DeltaSplit75 firmware code</a>.

<img width="650" src="/assets/left-half-test-on-game.gif">


#### 20299623

DO NOT USE SUPER GLUE TO GLUE YOUR SWITCHES TO THE PLATE.

Oh boy, just don't. I'm a big fan of super glue as it's very versatile, strong adhesive, and quick-drying. Super glue has this kind of vapor that makes white mark around the surface that you glued on. My super glue is the strong one. This marks got into my switches' housing, contaminated the copper contacts, and makes it unusable!

Because of my stupidity, I've to unplugged all the switches. I've to redo all the works that has been done on switches: matrix soldering and gluing. Plentiful of switches become the victims. Huft!

<img width="650" src="/assets/unplugged-switches.jpg">

Use hot glue instead. Hot glue is quite strong to hold your switches but very easy to remove in case that you want to change some bad switches.

I've seen some videos of making handwired keyboard and got some idea for better handwiring. I'll be using 0.35mm magnet coil wire.

#### 20299624

I reglued the switches back into the plate using hot glue. Quite easy but messy. Note that you have to clean the "spider web" things from the hot glue. If this thing makes it way into your switch housing or the stabilizer, it'll makes it feel terible.

<img width="650" src="/assets/hot-glue.png">

#### 20299625

While waiting my magnet coil wire to be arrived, I made two parts of wrist rest for the keyboard.

<img width="650" src="/assets/wrist-rest-1.jpg">
<img width="650" src="/assets/wrist-rest-2.jpg">
<img width="650" src="/assets/wrist-rest-3.jpg">

