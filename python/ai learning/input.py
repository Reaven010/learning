import pyttsx3 # text data to speech

engine=pyttsx3.init()

def speak(text):
    engine.say(text)
    engine.runAndWait()

for i in range (5):
    text = input("emter the text you want to convert to speech: ")
    speak(text)