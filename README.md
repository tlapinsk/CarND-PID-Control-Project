# PID Control Project
In this project, I used C++ to write a program that uses PID Control to steer a car around a virtual track. 

## Project Info
For a great YouTube video on PID control, [click here](https://www.youtube.com/watch?v=UR0hOmjaHp0)

To see the implementation please visit the following file in the 'src' folder:

1. PID.cpp
2. main.cpp

## Setup instructions
FYI, I ran my code on a Macbook Pro. Please ensure you have downloaded the Udacity SDCND Simulator [here](https://github.com/udacity/self-driving-car-sim/releases/) and have installed cmake (3.5), make (4.1), and gcc/gcc+ (5.4).

1. Open Terminal
2. `git clone https://github.com/tlapinsk/CarND-PID-Control-Project.git`
3. `cd CarND-PID-Control-Project`
4. `sh install-mac.sh`
5. `mkdir build && cd build`
6. `cmake`
7. `make`
8. `./pid`
9. Run the term2_sim application, select Project 3, and click 'Start'

## Results
In the following video, the car reached as fast as 34 MPH

[![PID](https://github.com/tlapinsk/CarND-Kidnapped-Vehicle-Project/blob/master/output/results.png?raw=true)](https://www.youtube.com/watch?v=EsRaAmHNpmE "PID")

## Resources
Shoutout to the tutorials provided by Udacity and Mercedes on Particle Filters. Below are further resources and helpful links that I used to complete this project:

- [Tracking a self-driving car with high precision](https://towardsdatascience.com/helping-a-self-driving-car-localize-itself-88705f419e4a)
- [Udacity Self-Driving Car Nanodegree Project 8 - Kidnapped Vehicle](http://jeremyshannon.com/2017/06/02/udacity-sdcnd-kidnapped-vehicle.html)
- [RMSE](https://discussions.udacity.com/t/rmse-is-ok-but-not-great/465374/4)
- [updateWeights](https://discussions.udacity.com/t/updateweights-equation-clarification/369534/12)