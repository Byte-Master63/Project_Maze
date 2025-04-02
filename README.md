The Maze project (raycasting)

Background

This project is a simple **2D maze renderer** using **raycasting** and **SDL2**. It simulates a first-person perspective of a maze with walls that the player can "see" using raycasting. The player’s position and camera angle are set in the code, and the maze is represented as a 2D array. This project demonstrates the basic principles of raycasting and rendering with SDL2.

Requirements
General
All your files will be compiled on Ubuntu 14.04 LTS, using gcc (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4
We will use the gcc flags -Wall -Werror -Wextra and -pedantic
All your functions must be commented
Your functions should be maximum 40 lines long (one statement per line)
Your functions should be maximum 80 columns long
No more than 5 functions per file
Betty
Your entire repository will be checked using Betty
Don’t push any object files .o or temporary files *~, or any unused source file if you don’t want to lose points !
It is advised to always keep a clear organisation in your repository. For example, store all your sources in a src directory, and all your headers in a inc, headers or dependencies folder

Tasks
0. Walls !
In this first part, you’ll have to:

Create a window with SDL2
Use raycasting to draw walls on your window !
You don’t need to be able to rotate the camera during the execution in this part, but you must provide a way to change the angle of the camera in your code to see if it works after recompiling it
The color of the walls must be different from the color of the ground/ceil
The map doesn’t need to be parsed from a file, but you must provide a way to modify it in your code to see if it works after recompiling it. (e.g. using an array of arrays of integers or characters).

1. Orientation
In this part, you must draw a different color depending on the orientation of the walls.

You must at least draw walls facing NORTH and SOUTH in a different color from walls facing EAST and WEST.
2. Rotation
You must provide a way to rotate the camera during the execution.

For example, you can rotate the camera when the left,right arrows are pressed on the keyboard.
Or you can rotate the camera when the mouse moves, just like a FPS game !
3. Move
You must provide a way to move the camera during the execution.

For example, you can move the camera when the w,a,s,d keys are pressed on the keyboard
In this part, you must handle the collisions of the player (yes, let’s call the camera player now, it’s getting serious) with the walls.

The player must not be able to enter walls
You can make the player slide on the walls instead of just stop it.
5. Parser
In this part you must implement a parser to get the map from a file.

You are free to define the standards of your map (The character for a wall, the character for nothing, the extension of the file if you want, …)
Your program will need a parameter to run which will be the path to the map file
6. Draw the map
In this part, you must draw the map on the window.

You’re free to draw the map where you want, with the color you want, …
You must provide a way to enable/disable it during the execution
Include the player’s line of sight in the map
7. Coding style + Documentation
Check if you code fits the ALX School coding style.
Check if your code is well documented and respect the ALX School documentation format
You can check all of this by yourself, just follow the instructions on this repository

Be careful

The check will be done on each file present on your turn in repository. Even the files that was not required. So don’t forget to always keep your turn in directory clean.

8. Textures
In this part you have to add textures on your walls !
9. Multi task !
Add a way to move on several directions and rotate in the same time. Basically in this part you’ll have to handle multiple events on the same frame.

For example, if the keys to move are w,a,s,d:

If the keys w and s are pressed in the same time, the player shouldn’t move.
If the keys w and d are pressed in the same time, the player should move forward and right in the same time,
…
10. Ground textures
In this part you have to add textures on the ground and/or on the ceiling 
11. Weapons
Add weapons textures !
12. Enemies
Add some enemies !
13. Make it rain
Add rain and a possibility to stop / start the rain with a key.
