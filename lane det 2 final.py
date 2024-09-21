import cv2
import numpy as np
import utilis


def getLaneCurve(img):
    imgcopy = img.copy()
    imgThres = utilis.thresholding(img)
    h, w, c = img.shape
    points = utilis.valTrackbars()
    imgWarp = utilis.warpImg(imgThres, points, w, h)
    imgWarpPoints = utilis.drawPoints(imgcopy, points)

    midpoint,imgHist = utilis.getHistogram(imgWarp, display= True,minPer=0.5,region=4)
    basepoint, imgHist = utilis.getHistogram(imgWarp, display=True, minPer=0.9)
    print(basepoint-midpoint)
    cv2.imshow('Thres', imgThres)
    cv2.imshow('Warp', imgWarp)
    cv2.imshow('Warp Points', imgWarpPoints)
    cv2.imshow('Histogram', imgHist)
    return None


if __name__ == '__main__':
    # Path to your video file
    video_path = 'E:/self drive/train vid/train_4.mp4'  # Update with the correct path to your video file

    # Open the video file
    cap = cv2.VideoCapture(video_path)

    # Initialize trackbars with default values
    intialTrackbarVals = [102, 80, 20, 214]
    utilis.initializeTrackbars(intialTrackbarVals)

    while True:
        success, img = cap.read()  # Read the next frame from the video file

        if not success:
            cap.set(cv2.CAP_PROP_POS_FRAMES, 0)  # Reset to the beginning of the video
            continue  # Skip the rest of the loop and continue to the next frame

        img = cv2.resize(img, (480, 240))  # Resize the frame if necessary
        getLaneCurve(img)
        cv2.imshow('Vid', img)  # Display the original frame

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break  # Exit the loop if 'q' is pressed

    cap.release()  # Release the video capture object
    cv2.destroyAllWindows()  # Close all OpenCV windows
