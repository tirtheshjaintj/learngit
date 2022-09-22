import os
import pyttsx3
import datetime 
import wikipedia
from datetime import date
import webbrowser as web
import speech_recognition as sr
import pyautogui as auto
today = date.today()
print("Today's date:", today)
assist=pyttsx3.init();
speak =assist.say
assist.setProperty('volume', 2)
assist.setProperty("rate",160)
voice= assist.getProperty('voices')
hour=int(datetime.datetime.now().strftime("%H"))
sec=int(datetime.datetime.now().strftime("%S"))
assist.setProperty('voice', voice[1].id)
assist.say("Hello Master Tirthesh Jain Welcome Back")
if(hour<12):
    assist.say("And A Very Good Morning")
elif(hour<18):
    assist.say("And A Very Good Afternoon")
else:
    assist.say("And A Very Good Evening")

assist.runAndWait()
def takeCommand():
    
    #It takes microphone input from the user and returns string output
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.adjust_for_ambient_noise(source, duration=0.6)
        r.pause_threshold = 0.5
        audio = r.listen(source)
        assist.runAndWait()
    try:
        print("Recognizing...")    
        query = r.recognize_google(audio) #Using google for voice recognition.
        print(f"User said: {query}\n")  #User query will be printed.
        return query
    except Exception as e:
        takeCommand()
while True:
     try:
        query = takeCommand().lower() #Converting user query into lower case
        # Logic for executing tasks based on query
        if 'wikibaba' in query:  #if wikipedia found in the query then this block will be executed
            query = query.replace("wikibaba", "")
            wikipedia.set_lang("en")
            result = wikipedia.summary("India", sentences = 2)
            assist.say("According to Wikipedia")
            assist.say(result)
            assist.runAndWait()
        elif 'wiki' in query:
             query = query.replace("wikipedia", "")
             result = wikipedia.summary(query, sentences = 2)
             assist.say("According to Wikipedia")
             assist.say(result)
             assist.runAndWait()
        elif 'whatsapp' in query:
             os.startfile("C:/Program Files/WindowsApps/5319275A.WhatsAppDesktop_2.2228.14.0_x64__cv1g1gvanyjgm/app/WhatsApp.exe")
             assist.say("Opening WhatsApp For You Master")
             assist.runAndWait()
        elif 'time' in query or 'clock' in query or 'alarm' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            assist.say(f"Sir, the time is {strTime}")
            assist.runAndWait()
            os.startfile("C:/Program Files/WindowsApps/Microsoft.WindowsAlarms_11.2206.27.0_x64__8wekyb3d8bbwe/Time.exe")
        elif 'search' in query or 'what' in query or 'when' in query or 'where' in query: 
             query = query.replace("search", "").replace(" ","%20")
             assist.say("Searching Online")
             assist.runAndWait()
             web.open("https://www.bing.com/search?q="+query)
        elif 'youtube' in query or 'video' in query:
             query = query.replace("youtube", "").replace(" ","%20")
             web.open("https://www.youtube.com/results?search_query="+query)
             assist.say("Searching Youtube")
             assist.runAndWait()  
        elif 'hello' in query or 'hye' in query:
              assist.say("Hello Nice to listen you I am a Talk Bot Made By master Tirthesh Jain.")
              assist.runAndWait()
        elif 'repeat' in query:
             query = query.replace("repeat", "")
             assist.say("You Said "+query)
             assist.say(query)
             assist.say(query)
             assist.say(query)     
             assist.runAndWait()
        elif 'excel' in query:
             os.startfile("C:/Program Files/Microsoft Office/root/Office16/EXCEL.EXE")
             assist.say("Opening Ms Excel For You Master")
             assist.runAndWait()
        elif 'cortana' in query:
             os.startfile("C:/Program Files/WindowsApps/Microsoft.549981C3F5F10_4.2204.13303.0_x64__8wekyb3d8bbwe/Cortana.exe")
             assist.say("Opening My Sister Cortana For You Master")
             assist.runAndWait()
        elif 'camera' in query:
             os.startfile("C:\Program Files\WindowsApps\Microsoft.WindowsCamera_2022.2206.2.0_x64__8wekyb3d8bbwe\WindowsCamera.exe")
             assist.say("Opening Camera For You Master")
             assist.runAndWait()
        
        elif 'powerpoint' in query or 'ppt' in query:
             os.startfile("C:/Program Files/Microsoft Office/root/Office16/POWERPNT.EXE")
             assist.say("Opening Ms Powerpoint For You Master")
             assist.runAndWait()
        elif 'word' in query:
             os.startfile("C:/Program Files/Microsoft Office/root/Office16/WINWORD.EXE")
             assist.say("Opening Ms Word For You Master")
             assist.runAndWait()          
        elif 'mode' in query or 'code' in query:
             os.startfile("C:/Users/tirth/AppData/Local/Programs/Microsoft VS Code Insiders/Code - Insiders.exe")
             web.open("https://play.google.com/console/u/1/developers/7869079839064125604/app-list?pli=1")
             os.startfile("C:/Windows/System32/cmd.exe") 
             web.open("https://mail.google.com/mail/u/0/")
             assist.say("Launching Code Mode For You Master")
             assist.runAndWait()    
        elif 'browser' in query:
             web.open("https://play.google.com/console/u/1/developers/7869079839064125604/app-list?pli=1")
             web.open("https://mail.google.com/mail/u/0/")
             assist.say("Opening Browser For You Master")
             assist.runAndWait() 
        elif 'mail' in query:
             web.open("https://mail.google.com/mail/u/0/")
             assist.say("Opening Mails For You Master")
             assist.runAndWait()
        elif 'notepad' in query:
             web.open("C:/Windows/notepad.exe")
             assist.say("Opening Notepad For You Master")
             assist.runAndWait()  
        elif 'home' in query:        
             auto.hotkey('win','d')
             assist.say("Lets Go Back To Home Master")
             assist.runAndWait()
        elif 'tabs' in query or 'window' in query:
             auto.hotkey('win','tab')
             assist.say("Opening All Windows  For You Master")
             assist.runAndWait()
        elif 'setting' in query or 'settings' in query:   
             auto.hotkey('win','i')
             assist.say("Opening Settings For You Master")
             assist.runAndWait()
        elif 'notification' in query or 'notify' in query:         
             auto.hotkey('win','n')
             assist.say("Opening Notification For You Master")
             assist.runAndWait()
        elif 'widget' in query or 'news' in query:          
             auto.hotkey('win','w')
             assist.say("Opening Widgets For You Master")
             assist.runAndWait()
        elif 'lock' in query or 'secure' in query:
             os.startfile("C:/Users/tirth/Desktop/c/lock.bat")     
             assist.say("Locking Myself For You Master")
             assist.runAndWait()    
        elif 'task' in query or 'list' in query:
             os.startfile("C:/Windows/System32/Taskmgr.exe")  
             assist.say("Opening Task Manager For You Master")
             assist.runAndWait()
        elif 'quick' in query or 'sidebar' in query or 'bar' in query:     
             auto.hotkey('win','a')
             assist.say("Opening Sidebar For You Master")
             assist.runAndWait()
        elif 'screen' in query or 'print' in query or 'shot' in query or 'short' in query :     
             auto.hotkey('win','shift','s')
             assist.say("Lets Take A Shot For You Master")
             assist.runAndWait()     
        elif 'bubble' in query:
             os.startfile("C:/Windows/System32/Bubbles.scr")  
             assist.say("Lets Have Some Bubbles Master")
             assist.runAndWait()
        elif 'calculator' in query or 'calc' in query:
             os.startfile("C:/Windows/System32/calc.exe")
             assist.say("Opening Calculator for You Master")
             assist.runAndWait()
        elif 'command' in query or 'prompt' in query:
             os.startfile("C:/Windows/System32/cmd.exe")
             assist.say("Opening Command Prompt for You Master")
             assist.runAndWait()
        elif 'shutdown' in query :
             os.startfile("C:/Users/tirth/Desktop/c/shut.bat") 
             assist.say("I am going To ShutDown Master")
             assist.runAndWait()
        elif 'restart' in query or 'reboot' in query:
             os.startfile("C:/Users/tirth/Desktop/c/rest.bat") 
             assist.say("I am going To Reboot  Master")
             assist.runAndWait()  
        elif 'system' in query or 'about' in query:
             os.startfile("C:/Users/tirth/Desktop/c/sys.bat") 
             assist.say("I am going To Show You SystemInfo Master")
             assist.runAndWait() 
        elif 'stop' in query or 'end' in query or 'bye' in query or 'over' in query or 'out' in query or 'hell' in query  or 'sleep' in query or 'out' in query: 
             assist.say("Okay Sir I am going have a nice day")
             assist.runAndWait()
             break 
        elif 'fuck' in query :
              assist.say("Hey Control Your Tounge Or I will Fuck You.")
              assist.runAndWait()     
        else:
             assist.say("Can You Please Repeat Master")
             query = query.replace("repeat", "")
             assist.say("I Think You Said "+query)
             assist.runAndWait() 
        assist.say("Done")
        assist.runAndWait()
     except Exception as e:
          assist.say("Master Can You Please Repeat")
          assist.runAndWait() 