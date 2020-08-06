import serial as sl
#import pyserial
import pyautogui

ard = sl.Serial('COM5',9600)

while True:
    IN = ard.readline()
    print("press")
    if IN == b'Play/Pause\r\n':
        pyautogui.press('space')

    elif IN == b'Vol+\r\n':
        pyautogui.press('up')

    elif IN == b'Vol-\r\n':
        pyautogui.press('down')
