# Manual-Gripper-Robot
The code that I used for the manual bot that I built for the International Robotics Challenge, Techfest 2018, IIT Bombay. It is a remote controlled bot that can lift and place objects.

## Table of Content
1. [About the Competetion](#about-the-competetion)
2. [The Manual Bot](#the-manual-bot)

## About the competetion
For the competition, we were required to build two robots, a manual and autonomous bot that would
coordinate with each other to tackle various challenges set forth during the competition. The
autonomous bot had to solve a maze without any form of external help from the participants. It had to
even identify the positions of different coloured blocks and scan a QR code. The manual bot had to be
designed to move using a remote controller and to pick and place blocks. Its main objective was to clear
the way for the autonomous bot by transferring the blocks detected by the autonomous bot in the maze
to specified zones outside the maze. It had to also tackle obstacles and fire a projectile at a target. Each
team was allotted with a time limit of 8 minutes to complete all the tasks and a time limit of 5 minutes
for a pre-run of the autonomous bot for it to learn the maze.

##### The Arena
> ![WhatsApp Image 2019-01-12 at 5 14 12 PM (1)](https://user-images.githubusercontent.com/46392391/55337994-5568e280-54bd-11e9-9995-7de755a03438.jpeg)

## The Manual Bot
Our manual bot focused on agility and control over speed. We built it based on this principle, because
we realised that this competition demanded sharp movements and control while positioning the bot to
lift objects. Therefore we built the bot to be smaller than the recommended size of 400mm x 300mm x
200mm (l×b×h) and this allowed it to move freely in the arena with little interference.
It was constructed on an aluminum sheet taken as a base. It had 4 12V 300 rpm DC motors connected to
wheels for movement. The motors were controlled by a L293D motor shield that was mounted on an
Arduino Uno. The bot also had a servo motor and another DC motor to control the gripper that would
lift and place objects. We used a separate arduino mounted motor driver to control both these motors.
Both the motor drivers were connected to a custom built wired remote controller, that included 2
joysticks for motion and positioning of the gripper arm, 2 buttons to control the gripper and a power
button. We used a standard 2A power bank to power the arduinos and a set of 3 Standard 18650
2200mAh 3.7V Rechargeable Li-ion batteries connected in series (To get a power supply of 2200mAh
11.1 V) to power the motors.

### [Arduino 1](arduino_1.ino)
Controls four DC motors with a joystick. These motors are connected to the wheels of the robot for movement.

### [Arduino 2](arduino_2.ino)
Controls the servo motor that is used to rotate the gripper arm and the DC motor that converges and diverges the gripper arms

##### The Manual Bot
> ![WhatsApp Image 2019-04-01 at 8 39 29 PM](https://user-images.githubusercontent.com/46392391/55338440-5d755200-54be-11e9-993a-dcf04371aa4e.jpeg)
