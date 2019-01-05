# Diy monitor mount with auto-rotating screen

Auto-rotate your screen with the help of arduino or any other microcontroller and MPU-6050 to get the angle of screen.

Connections:
MPU-6050 <-> Arduino NANO V3
VCC <-> 5V
GND <-> GND
SDA <-> A4
SCL <-> A5

You will also need display.exe file from (http://noeld.com/programs.asp#Display) i used Version 1.4 (build 31) but other version should work and if you want to compile main.py to EXE i would suggest to use "pip install auto-py-to-exe" because it's easy to use.

I also used this library for arduino to get data from MPU-6050 (https://github.com/Tockn/MPU6050_tockn) and also you will need (pip install pyserial) for python file to work.

You can also add shortcut of EXE to C:\Users\Username\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup and it will start every time you start your computer. 

NOTE: 
	-It depends also how yours MPU-6050 is positioned and what axle is changing, and also i added 90 to degrees i got from MPU-6050 so i would only work with positive numbers.
	-It also depend which way you rotate your screen, so in python file you may need to change 90 to 270 degrees
	-If you have more that one monitor attached, you can specify in .py file which monitor you like to change rotation, (-device 2) is if only one monitor is attached 
	-By default .py and desplay.exe should be in the same folder, but you can change that in .py file