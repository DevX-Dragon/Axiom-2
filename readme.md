# Axiom-2 🤖🖊️
YO. Welcome to Axiom-2. It’s a CNC drawing machine that basically does my homework (not really, don't tell my teacher). I built this because I wanted a robot that draws better than me.

## What is this?
It’s a "Drawing Bot" that uses an Arduino Uno and a CNC Shield to move a pen around. It runs on GRBL (which is basically the brain) with some tiny tweaks I made so it doesn't freak out.

## Images
### Full Render
![Full Render](https://github.com/user-attachments/assets/223b3d1d-db4e-4478-98cb-cf9991b3fa54)
(still in prodcution so not fully rendered)

### Belt Diagrams
<img width="184" height="417" alt="Belt Diagram EXCIL DRAW 2" src="https://github.com/user-attachments/assets/e62f16b5-e78b-49eb-984c-ad80ff0f72db" />
<img width="600" height="426" alt="BELT DIAGRAM" src="https://github.com/user-attachments/assets/6a0afe80-4b06-498d-9081-e85e0ad2a5b9" />


## Cool Stuff Inside
**The Brain:** Arduino Uno + CNC Shield (v3)

**Firmware:** GRBL (hacked a bit)

**The Parts:** I put the BOM (Bill of Materials) in the .xlsx file above. It has all the nuts, bolts, and rods you need to buy.

**Pictures:** Check the /images folder to see what it actually looks like.

## How to use it (I think)
**Flash it:** Get the GRBL firmware onto the Arduino.

**Wire it:** Plug the stepper motors into the shield. Don't blow it up.

**Software:** Use something like Universal Gcode Sender (UGS) to send your drawings to the bot.

**Draw:** Put a pen in the holder and watch it go zoom.

## Hardware
I put the CAD files/designs in the /hardware folder. If you have a 3D printer, you can probably make this yourself.

## 🛠️ Axiom-2 Official BOM (with links!!)

| Product Name | Qty | Price (ea) | Total | Notes |
| :--- | :---: | :--- | :--- | :--- |
| [**Nema 17 Stepper Motor**](https://www.duino.lk/product/nema-17-stepper-motor-bipolar-1-8deg-1-5a-42ncm-42x42x40mm/) | 2 | $8.07 | $16.14 | Bipolar version |
| [**Linear Rod M8 (1m)**](https://www.duino.lk/product/1000mm-8mm-smooth-shaft/) | 2 | $5.81 | $11.62 | Need 2x 450mm and 2x 350mm |
| **Linear Rod 3mm** | 2 | - | $0.00 | Salvaging from a CDROM |
| **Threaded Rod M8 x 480mm** | 1 | - | $0.00 | Still haven't found a link for this |
| [**LM8UU Bearings**](https://www.duino.lk/product/lm8luu-lm20luu-ball-bearings/) | 8 | $1.45 | $11.60 | Standard sliders |
| [**SG90 Servo Motor**](https://www.duino.lk/product/servo-motor-sg90-9g-micro-servo-motor/) | 1 | $1.81 | $1.81 | Pen lift go brrrr |
| **Spring** | 1 | - | $0.00 | From a ballpoint pen lol |
| [**GT2 Pulley (16T)**](https://www.duino.lk/product/gt2-16t-16-teeth-5mm-bore/) | 2 | $0.97 | $1.94 | 5mm bore |
| [**Bearing 624zz**](https://www.duino.lk/product/624zz-ball-bearing/) | 5 | $0.48 | $2.40 | Tiny bearings |
| [**GT2 Belt (1m)**](https://www.duino.lk/product/gt2-6mm-width-2gt-pu-transmission-timing-belt/) | 2 | $1.61 | $3.22 | Buying 2m total |
| [**CNC Shield + Uno + Drivers**](https://www.duino.lk/product/cnc-shield-v3-0-uno-r3-4pcs-a4988-drivers/) | 1 | $20.97 | $20.97 | Cheaper as a kit |
| [**Jumper Connectors**](https://www.duino.lk/product/2-pin-jumper-connector-stud-2-54mm-standard/) | 1 | $0.32 | $0.32 | |
| [**12V 2A Power Supply**](https://www.duino.lk/product/power-supply-adapter-3-pin-ac-dc-12v-2a/) | 1 | $2.42 | $2.42 | |
| **3D Printing (Legion)** | 1 | $30.00 | $30.00 | |
| **Exchange Tax** | - | - | $5.00 | |
| **Shipping** | - | - | $5.00 | |
| **TOTAL** | | | **$112.44** | |
> (THIS IS USING A LOCAL ONLY ELECTRONICS STORE. IF YOU'RE GOING TO HAVE TO SOURCE IT YOURSELF. USE AMAZON , ALIEXPRESS , TEMU)
> THERE ARE STILL NUTS , WASHERS , ETC YOU NEED BUY SEPERATELY

Made by DevX-Dragon 🐉
(If it breaks, its not my fault lol)
