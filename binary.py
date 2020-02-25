import RPi.GPIO as GPIO
import time
import numpy as np
import matplotlib.pyplot as plt
GPIO.cleanup()


GPIO.setmode(GPIO.BOARD)
GPIO.setup(12, GPIO.IN)
GPIO.setup(15, GPIO.IN)
GPIO.setup(16, GPIO.IN)
GPIO.setup(36, GPIO.IN)


no = (GPIO.input(12)<<3)+(GPIO.input(15)<<2)+(GPIO.input(16)<<1)+GPIO.input(36)
	#no = GPIO.input(15)
print('Values:',no)
	
	
	
	
