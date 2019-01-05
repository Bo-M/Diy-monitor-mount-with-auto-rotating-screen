import serial
import subprocess
import os
path = os.getcwd()

arduino = serial.Serial('COM3', 9600, timeout=.1)
#print(path)
while True:
    data = arduino.readline()[:-2]
    if data:
        data = (str(data.decode()))
        #print(data)
        if data == "vertical":
            print('vertical')
            proc = subprocess.Popen('{}\\display -device 2 -rotate 90'.format(path), stdin = subprocess.PIPE, stdout = subprocess.PIPE)
        else:
            print('horizontal')
            proc = subprocess.Popen('{}\\display -device 2 -rotate 0'.format(path), stdin = subprocess.PIPE, stdout = subprocess.PIPE)
                
                