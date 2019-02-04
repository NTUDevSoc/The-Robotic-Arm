import serial
import keyboard
import time

delay = 0.005

ser = serial.Serial('COM5', baudrate=115200)

while True:

    if (keyboard.is_pressed('esc')):
        break
    if (keyboard.is_pressed('a')):
        data = "A"
        ser.write(data.encode())
        print("A")
        time.sleep(delay)
    if (keyboard.is_pressed('d')):
        data = "a"
        ser.write(data.encode())
        print("a")
        time.sleep(delay)
    if (keyboard.is_pressed('w')):
        data = "B"
        ser.write(data.encode())
        print("B")
        time.sleep(delay)
    if (keyboard.is_pressed('s')):
        data = "b"
        ser.write(data.encode())
        print("b")
        time.sleep(delay)
    if (keyboard.is_pressed('j')):
        data = "C"
        ser.write(data.encode())
        print("C")
        time.sleep(delay)
    if (keyboard.is_pressed('l')):
        data = "c"
        ser.write(data.encode())
        print("c")
        time.sleep(delay)
    if (keyboard.is_pressed('i')):
        data = "D"
        ser.write(data.encode())
        print("D")
        time.sleep(delay)
    if (keyboard.is_pressed('k')):
        data = "d"
        ser.write(data.encode())
        print("d")
        time.sleep(delay)