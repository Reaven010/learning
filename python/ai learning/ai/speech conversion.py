import speech_recognition as sr
import pyttsx3 # text data to speech
import datetime
from pytube import YouTube
import vlc
import os


# Capture audio from the microphone
def speech_to_text(timeout=10, phrase_time_limit=None):
    recognizer = sr.Recognizer()
    
    try:
        with sr.Microphone() as source:
            print("Adjusting for background noise... Please wait.")
            recognizer.adjust_for_ambient_noise(source, duration=2)
            print("Listening for your speech...")
            
            audio = recognizer.listen(source, timeout=timeout, phrase_time_limit=phrase_time_limit)
            print("Recognizing speech...")
            
            # Convert speech to text
            text = recognizer.recognize_google(audio)
            print(text)
            return text
    except sr.UnknownValueError:
        print("Sorry, I could not understand the audio.")
        return None
    except sr.RequestError as e:
        print(f"Could not request results from the recognition service; {e}")
        return None
    except Exception as e:
        print(f"An error occurred: {e}")
        return None
def play_music():
    player = vlc.MediaPlayer("learning/python/ai learning/ai/Mehrama - Pritam.mp3")
    player.play()
    input("Press Enter to stop the music...")
    player.stop()
engine = pyttsx3.init()
def speak(text):
    engine.say(text)
    engine.runAndWait()

def getvoices(voice):
    voices = engine.getProperty("voices")
    # print(voices[1].id)
    if voice == 1:
        engine.setProperty("voice", voices[1].id)
    elif voice == 0:
        engine.setProperty("voice", voices[0].id)
    speak("hello this is raven, how may i serve you today sir")
    print("choices :\n 0 - male \n 1 - female")
    voice = int(input("enter your voice: "))
    getvoices(voice)

def time():
    Time = datetime.datetime.now().strftime("%H:%M:%S")  # H-hour (24-hour format), M-minute, S-second
    speak("the current time is")
    speak(Time)
def month(n):
    if n==1:
        return("january")
    elif n==2:
        return "febrary"
    elif n==3:
        return "march"
    elif n==4:
        return "april"
    elif n==5:
        return "may"
    elif n==6:
        return "june"
    elif n==7:
        return "july"
    elif n==8:
        return "august"
    elif n==9:
        return "september"
    elif n==10:
        return "october"
    elif n==11:
        return "november"
    elif n==12:
        return "december"
def date():
    year=(datetime.datetime.now().year)
    mounth=month(datetime.datetime.now().month)
    date=(datetime.datetime.now().day)
    i="the current date is "+ str(date)+mounth+str(year)
    speak(i)
# Convert speech to text using Google Web Speech API
try:
    voices = engine.getProperty("voices")
    engine.setProperty("voice", voices[1].id)
    text=speech_to_text()
    
    while text !="stop"or "shutdown":
        if text == "hello" or text == "wake up" or text == "arise":
            speak("hello there sir this is raven, how may i serve you today ?")
        elif text =="what are you raven" or text=="tell me about youself":
            speak("i am an artificial integence developed by sayujya here to serve you sir")
        elif text=="time"or text =="what is current time" or text == "current time":
            time()
        elif text == "date" or text =="what's current date" or text =="current date":
            date()
        elif text == "play music":
            play_music()
        elif text == "stop" or text == "shutdown" or text =="kill":
            break
    
        text=speech_to_text()
except Exception as e:
    print("Error:", str(e))
    speak("sorry for inconvinience")