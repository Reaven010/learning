import threading
import winsound
import cv2
import imutils

cap =cv2.VideoCapture(0)
cap.set(cv2.CAP_PROP_FRAME_WIDTH,640)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT,480)
_,start_frame = cap.read()
start_frame =imutils.resize(start_frame,width=500)
start_frame=cv2.cvtColor(start_frame,cv2.COLOR_BGR2GRAY)
start_frame=cv2.GaussianBlur(start_frame,(21,21),0)
alarm=False
alarm_mode=False
alarm_counter=0
def beep():
    global alarm
    for i in range(5):
        if not alarm_mode:
            break
        print("ALARM!!!")
        winsound.Beep(2500,2500)#2500
    alarm =False
while True:
    _,frame =cap.read()
    frame =imutils.resize(frame,width=500)
    if alarm_mode:
        frame_bw=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
        frame_bw = cv2.GaussianBlur(frame_bw,(5,5),0)
        diffrence = cv2.absdiff(frame_bw,start_frame)
        threshold = cv2.threshold(diffrence,25,255,cv2.THRESH_BINARY)[1]
        start_frame = frame_bw

        if threshold.sum() >0:#sensitivity of movement detection
            alarm_counter+=1
        else:
            if alarm_counter>0:#longer movements 
                alarm_counter-=1
        cv2.imshow("cam",threshold)
    else:
        cv2.imshow("cam",frame)
    if alarm_counter>20:
        if not alarm:
            alarm =True
            alarm_thread = threading.Thread(target=beep).start()
    key_pressed = cv2.waitKey(30)
    if key_pressed == ord('t'):
        alarm_mode = not alarm_mode
        alarm_counterr=0
    if key_pressed == ord("q"):
        alarm_mode = False
        break
cap.release()
cv2.destroyAllWindows()