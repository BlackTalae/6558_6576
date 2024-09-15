# **PROJECT FUNNY TURTLE + :turtle: :pizza: :pizza:** 
##### Project about using knowladge of ROS2 (Topics, Service, Parameter, Namespace and Launch File) to control turtles from turtlesim_plus or use in Framework and appropriately understand the architecture map of ROS2
# **Table of Content**
- Architecture Map
- How to Use the Project
- Demo

## Architecture Map
Provide a detailed description and a diagram of your ROS2 architecture, explaining the nodes, topics, services, and how they interact.

## How to Use the Project
In this project we have divided it into 2 main part: 
1. Teleop_turtle part
2. Copy_turtle part

At the first part (Teleop_turtle) is about controlling turtle using keyboard key and make alphabets with spawn pizza

you have to open terminal and open 3 termanals by pressing ctrl + shift + T then type these following 3 commands in each terminal
  
  1. This command runs a turtlesim_plus node from the turtlesim_plus package. This node controls turtlesim_plus simulation
```
ros2 run turtlesim_plus turtlesim_plus_node.py
```
  2. This command runs a launch file which contains package named "funny_turtleplus" that contain a file named "teleop_turtle.launch.py" which contains a lot of services and a file
     basically this command can give you a chance to control spawn pizza save pizza path and clear pizza
```
ros2 launch funny_turtleplus teleop_turtle.launch.py
```
  3. This command runs a file named "teleop_key" which contains teleop_keyboard node that allow you to control your turtle with keyboard
```
ros2 run funny_turtleplus teleop_key.py
```
![image](https://github.com/user-attachments/assets/cb022dda-d66f-49d5-b152-77550030faa8)

After type these commands in terminals you must press 'enter' from 1. to 3. your screen will be like this

![image](https://github.com/user-attachments/assets/d30f0fc1-1338-4127-90cf-c488a9fefa2e)

You can use these key to move your turtle on the screen

![image](https://github.com/user-attachments/assets/f4c5a298-d854-41b4-b115-714caed39309)

you have to draw 4 letters on the screen example 'FIBO' like this video by pressing I on keyboard to spawn pizza and after you finish draw 1 letter you must press O to save but if you accidentally draw the alphabet wrong and you want to delete it you must press "p" to clear

https://github.com/user-attachments/assets/b1bf8f2e-1377-40cc-864d-e3ac1f096549

After you press O to save path and the value X,Y of pizza will be store in yaml files then the value will be use again on next part


In the second part (Copy_turtle part) after yaml files get the value, the value will be use to set target of turtles to automatically draw the pizza path or the alphabets like in this video

Firstly, you have to run following commands down below

  1. This command runs a turtlesim_plus node from the turtlesim_plus package. This node controls turtlesim_plus simulation and has 1 turtle at the center of the screen
```
ros2 run turtlesim_plus turtlesim_plus_node.py
```
  2. This command runs to create other 3 turtles at the same time
```
ros2 launch funny_turtleplus copy_turtle.launch.py
```
  3. This command runs to make all turtles move to start point at (1.0, 1.0) 
```
ros2 run funny_turtleplus controller.py
```
  4. This command runs to make all turtles recieve target x,y from yaml file and start to saperate to automatically draw alphabets like the original
```
ros2 run funny_turtleplus copy_schedule.py
```
https://github.com/user-attachments/assets/98e9d1ff-d6db-4047-a6c8-fb5d77188e7e



## Demo Videos

This video show you how to create the word "FIBO" and automaticall draw by 4 turtles



# CREDIT 
This Project create by Mr.Anuwit intet 65340500058 and Mr.Sippanon sornkunkaew 65340500076

