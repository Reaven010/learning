import pyttsx3

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