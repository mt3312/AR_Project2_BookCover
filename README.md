# AR_Project2_BookCover
Design of an app that uses two target images representing the front and the back of a book and generated an AR book cover using Hololens 2

a brief description of your code, and how to interact with it

## Description of the code
The code in this repository was generated using Unity in combination with Vuforia and MRTK. Some of the functionality of the code was adapted from the Vuforia Hololens 2 Sample. [This](https://library.vuforia.com/articles/Solution/Working-with-the-HoloLens-sample-in-Unity.html) tutorial provided by Vuforia was used to set up the unity build for the application. 

The code allows the user to see an AR display over the front cover of the book "Making Van Gogh" when the person is looking at the front cover through the hololens. This was achieved by creating a Vuforia Database with the fornt and back cover of the book and using them as image targets to render VR display on top of it. 


## Images 
Front cover of the book before and after. 
<img src="Front (1).jpg"
     alt="Front Cover of the Book"
     style="float: center; margin-right: 10px;" />
     
Back cover of the book with Book Info
<img src="Back1.jpg"
     alt="Back Cover of the Book 1"
     style="float: center; margin-right: 10px;" />
     
Back cover of the book with Book Review
<img src="Back2.jpg"
     alt="Back Cover of the Book 1"
     style="float: center; margin-right: 10px;" />

## Video
A video of the application running on the hololens can be seen below:
Video.mp4

## Limitations
* It is more difficult to correctly map a sprite to the front cover. It does not align correctly 
* It is harder to see the entire book while holding it because of the restricted field of view of HoloLens

## How to download and run? 
Follow the instructions below to run the app
* Use this [link](https://library.vuforia.com/articles/Solution/Working-with-the-HoloLens-sample-in-Unity.html) to install the correct version of virtual studio as well as the dependencies needed to build and deploy the app on HoloLens 2.
* Connect the HoloLens 2 with your computer using a USB. 
* Run ENTER SOLUTION NAME on Visual Studio. Set the Solution Configurations to Release, Solution Platform to ARM64 , and Deployment Device to Device and Press Ctrl + F5  
* Once the app has deployed, you will be able to see ENRTER APP NAME in all apps.  
