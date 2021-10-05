from keras.models import load_model
import cv2
import numpy as np
from datetime import datetime
from scipy import stats
import pyttsx3


def getTime():
    time = datetime.now().hour * 3600 + datetime.now().minute * 60 + datetime.now().second + datetime.now().microsecond / 1000000
    return time


def getCorrectClass(tmpClass, classMap):
    for key, value in classMap.items():
        if value == tmpClass:
            return key

def ResizeWithAspectRatio(image, width=None, height=None, inter=cv2.INTER_AREA):
    dim = None
    (h, w) = image.shape[:2]

    if width is None and height is None:
        return image
    if width is None:
        r = height / float(h)
        dim = (int(w * r), height)
    else:
        r = width / float(w)
        dim = (width, int(h * r))

    return cv2.resize(image, dim, interpolation=inter)

def showimg(icon):
    icon = cv2.imread(
        "menu/{}.png".format(icon))
    icon=ResizeWithAspectRatio(icon, width=400)
    cv2.imshow('menu',icon)
     
def menu_cuisine(page):

    # showimg(int(page)+1)
    if page == 1:
        return "salad"
    elif page==2:
        return "starters"
    elif page==3:
        return "maincourse"
    elif page==4:
        return "desserts"
    elif page==5:
        return "desserts"


def menu(page,item):

    # showimg(int(page)+1)
    if page == 1:
        return salad(item)
    elif page==2:
        return starters(item)
    elif page==3:
        return maincourse(item)
    elif page==4:
        return desserts(item)
    elif page==5:
        return desserts(item)

def salad(item):
    if item == 1:
        return "veggie salad"
    elif item == 2:
        return "avocado salad"
    elif item == 3:
        return "corn salad"
    elif item == 4:
        return "pasta salad"
    elif item == 5:
        return "fruit salad"


def starters(item):
    if item == 1:
        return "french fries"
    elif item == 2:
        return "soup"
    elif item == 3:
        return "donuts"
    elif item == 4:
        return "pasta"
    elif item == 5:
        return "onion rings"


def maincourse(item):
    if item == 1:
        return "dal makhni"
    elif item == 2:
        return "raajma chawal"
    elif item == 3:
        return "shahi paneer"
    elif item == 4:
        return "stuffed mushroooms"
    elif item == 5:
        return "aaloo gobhi"


def desserts(item):
    if item == 1:
        return "Chocolate moose Cake"
    elif item == 2:
        return "Ice Cream"
    elif item == 3:
        return "Blueberry Cheesecake"
    elif item == 4:
        return "Nutella Waffle"
    elif item == 5:
        return "Strawberry Cupcake"


def shakes(item):
    if item == 1:
        return "CHOCOLATE MILKSHAKE"
    elif item == 2:
        return "BANANA MILKSHAKE"
    elif item == 3:
        return "Strawberry Milkshake"
    elif item == 4:
        return "STRAWBERRY MILKSHAKE"
    elif item == 5:
        return "Vanilla Shake"

def getCannyImage(img, lowI, highI):
    return cv2.Canny(img, lowI, highI)


def keyCheck():
    k = cv2.waitKey(10)
    if k == ord('q'):
        speak('Thank you for eating with us')
        cap.release()
        cv2.destroyAllWindows()
        exit()
    if k == ord('p'):
        while True:
            k = cv2.waitKey(1)
            if k == ord('c'):
                return


def speak(a):
     textspeech = pyttsx3.init()
     speak = a
     textspeech.say(speak)
     textspeech.runAndWait()


def predict(frame):
    cannyImage = getCannyImage(frame[ytop:ybottom, xleft:xright], lowIntensity, highIntensity)
    predImage = cv2.resize(cannyImage, (imageSize, imageSize))
    pred = model.predict(predImage.reshape(1, predImage.shape[0], predImage.shape[1], 1))
    pred_cls = np.argmax(pred)
    value = getCorrectClass(pred_cls, classMap)
    return cannyImage, value


model = load_model("UltimateUltimateHeaven.h5")

classMap = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, 'EQUALS': 6, 'NONE': 7, 'SUM': 8}
imageSize = 100
coord = [[50, 300], [100, 400]]
white = (255, 255, 255)
red = (0,0,255)
rectangleThickness = fontThickness = 2
timeRemainingPosition = (10, 80)
outcomePosition = (30, 80)
font = cv2.FONT_HERSHEY_SIMPLEX
value = 'NONE'

prev2_value='NONE'
prev_value='NONE'

orders = []

lowIntensity = 50
highIntensity = 100

waitTime = 2
resultCalculationTime = 2
displayResultTime = 2

cap = cv2.VideoCapture(0)

ret, frame = cap.read()
showimg(1)

speak('Welcome to Multiverse CLones Restaurant')
speak('You can place your order')

while True:
    xleft = coord[0][0]
    xright = coord[0][1]
    ytop = coord[1][0]
    ybottom = coord[1][1]
    ret, frame = cap.read()
    if ret:
        # waiting for selection to begin
        ptime = getTime()
        while (getTime() - ptime < waitTime):
            ret, frame = cap.read()
            if ret:
                timeRemaining = round(waitTime - getTime() + ptime, 1)
                if (timeRemaining <= 0):
                    timeRemaining = 0
                cv2.rectangle(frame, (xleft, ytop), (xright, ybottom), white, rectangleThickness)
                cv2.rectangle(frame, (xleft+40, ytop+30), (xright-40, ybottom-30), red, rectangleThickness)
                cv2.putText(frame, " Capturing in: " + str(timeRemaining), timeRemainingPosition, font, 1.2, white,
                            fontThickness, cv2.LINE_AA)
                cv2.imshow('frame', frame)
                keyCheck()

        # getting selection
        ptime = getTime()
        order = []
        while (getTime() - ptime < resultCalculationTime):
            ret, frame = cap.read()
            if ret:
                # predict the move made
                cannyImage, value = predict(frame)
                order.append(value)
                cv2.rectangle(frame, (xleft, ytop), (xright, ybottom), white, rectangleThickness)
                cv2.rectangle(frame, (xleft+40, ytop+30), (xright-40, ybottom-30), red, rectangleThickness)
                cv2.putText(frame, "Finding Outcome", outcomePosition, font, 1.2, white, fontThickness, cv2.LINE_AA)
                cv2.imshow('frame', frame)
                keyCheck()
        order = stats.mode(np.array(order))[0][0]
        #speak(order)

        # displaying selection
        ptime = getTime()
        while (getTime() - ptime < displayResultTime):
            ret, frame = cap.read()
            if ret:
                # predict the move made
                cv2.rectangle(frame, (xleft, ytop), (xright, ybottom), white, rectangleThickness)
                
                if (order!='EQUALS'):
                    cv2.putText(frame, " Outcome: " + str(order), outcomePosition, font, 1.2, white, fontThickness,
                            cv2.LINE_AA)
                cv2.imshow('frame', frame)
                keyCheck()
    
    if order!='SUM':
        showimg(1)
        
    if order=='SUM':
        speak('Now you can add more items')
        speak('Choose type of cuisine')
        
    if prev_value=='SUM' and order!='EQUALS' and order!='NONE' and order!='SUM':
        showimg(int(order)+1)
        speak('Chosen Menu is '+menu_cuisine(int(order)))
    
    if prev2_value == 'SUM' and prev_value!='EQUALS' and prev_value!='NONE' and prev_value!='SUM' and order!='EQUALS' and order!='NONE' and order!='SUM': 
       orders.append(menu(int(prev_value),int(order)))
       speak('New item added is '+menu(int(prev_value),int(order)))
    
    elif order=='EQUALS':
       
        succes,frame=cap.read()
        cv2.putText(frame, "Final items Purchased: ",
                (100, 50), font, 1.2, (255, 255, 255), 2, cv2.LINE_AA)
        y=100
        print(orders)
        
        for i in range(len(orders)):
            cv2.putText(frame, orders[i] ,(100, y+50), font, 1, (255, 255, 255), 2, cv2.LINE_AA)
            y=y+50
        
        cv2.imshow('frame', frame)
        speak('Final orders are ')
        speak(orders)
        keyCheck()
            
    elif order == '0':
        orders = orders[:len(orders) - 1]
        speak('Deleting last item from list')
 
        
    prev2_value=prev_value
    prev_value=order
    

    keyCheck()
    
