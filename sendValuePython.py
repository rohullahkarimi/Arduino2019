import serial
import time

arduino = serial.Serial('/dev/ttyACM0', 9600)
arduino.flushInput()

muuttaja = 'A'
command = muuttaja.encode('utf-8')
while True:
    arduino.write(command)   
    time.sleep(1.5)