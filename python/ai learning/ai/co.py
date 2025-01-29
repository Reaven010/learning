import pyttsx3
import datetime

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
# print("choices :\n 0 - male \n 1 - female")
# voice = int(input("enter your voice: "))
# getvoices(voice)
# time()
# date()
def wishme():
    speak("welcome bask sir!")
    time()
    date()
    speak("the day is still young sir, how may i serve you")
wishme()