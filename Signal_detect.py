import time
import serial

arduino = serial.Serial('COM9', 9600, timeout=1)
time.sleep(1)

while True:

	signal = True
	if signal :
		arduino.write(b'S')
	else:
		arduino.write(b'N')
	time.sleep(1)
	
