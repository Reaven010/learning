import speech_recognition as sr
import pyttsx3
import pywhatkit
import datetime
import wikipedia
import pyjokes
#initialising
listener=sr.Recognizer()
engine=pyttsx3.init()
voices = engine.getProperty("voices")
engine.setProperty("voice",voices[1].id)
#function defining
def talk(text):
    engine.say(text)
    engine.runAndWait()
