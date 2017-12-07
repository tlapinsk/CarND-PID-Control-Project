# PID Control Project
In this project, I used C++ to write a program that uses PID Control to steer a car around a virtual track. 

## Project Info
For a great introduction to the topic, check out [this](https://www.youtube.com/watch?v=UR0hOmjaHp0) YouTube video.

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
Check out the gif below for an example of my PID implementation:



You can also check out the full video [here](https://youtu.be/EsRaAmHNpmE)

Here is the result for the PD implementation:

You can also check out the full video [here](https://youtu.be/x8V2tFdqlVQ)

Here is the result for the PI implementation:

You can also check out the full video [here](https://youtu.be/ZpeBvwV8f0c)

[![PID](https://github.com/tlapinsk/CarND-PID-Control-Project/blob/master/output/pid2.png?raw=true)](https://youtu.be/EsRaAmHNpmE "PID")

## PID Control

P - Proportional:
With Proportional, the controller output changes in "proportion" to the error between process variable and set point. Variable, Kp, controls how quickly the control response is. A larger Kp means the car reaches the reference state faster, but can overshoot if too large.

I - Integral:
The integral component sums the error term over time. The result is that even a small error term will cause the integral component to increase slowly. In our case, Ki will be zero or close to it due to no systematic bias.

D - Derivative:
The derivative component causes the output to decrease if the process variable is increasing rapidly. The derivative response is proportional to the rate of change of the process variable. Kd will control oscillations that the car makes.

Tuning:
[This post](https://discussions.udacity.com/t/how-to-tune-parameters/303845/4) helped me when tuning my parameters. Following these instructions I ended up with the following parameters.

|  Parameter   |    Final State  |
|  -----       |    -------      |
|  Kp          |    0.15         |
|  Ki          |    0            |
|  Kd          |    2.8          |

## Resources
Shoutout to the tutorials provided by Udacity on PID Control. Below are further resources and helpful links that I used to complete this project:

- [Tuning parameters](https://discussions.udacity.com/t/how-to-tune-parameters/303845/4)
- [Intro to PID Control](https://www.youtube.com/watch?v=UR0hOmjaHp0)
- [PID Theory Explained](http://www.ni.com/white-paper/3782/en/)
- [PID controller wiki](https://en.wikipedia.org/wiki/PID_controller)