import pyttsx3
import datetime

engine = pyttsx3.init()

def speak(text):
    engine.say(text)
    engine.runAndWait()
def greeting():
    hour= datetime.datetime.now().hour
    if hour >=6 and hour<12:
        speak("good morning sir")
    elif hour>=12 and hour<18:
        speak("good afternoon sir")
    elif hour >=18 and hour <24:
        speak("good evening sir")
    else:
        speak("good night sir")
greeting()