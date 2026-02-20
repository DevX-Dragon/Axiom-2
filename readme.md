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

# Hardware
I put the CAD files/designs in the /hardware folder. If you have a 3D printer, you can probably make this yourself.



Made by DevX-Dragon 🐉
(If it breaks, its not my fault lol)
