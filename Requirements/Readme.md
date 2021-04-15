# Requirements
## Introduction
- The game called "Snake Game" typically involve the player
controlling a line or snake, there is no official version of the game, so
gameplay varies. The most common version of the game involves the snake
or line eating items which make it longer, with the objective being to avoid
running into a border or the snake itself for as long as possible.
- The player loses when the snake either runs into a border or its own body.
Because of this, the game becomes more difficult as it goes on, due to the
growth of the snake.
## Research
- Nokia has installed the "Snake Game" on many of its phones. The game is
also available on several websites, including YouTube, which allows
viewers to play the game while a video loads.
- The Snake has appeared in many different forms over the decades, but
it’s first appearance took place in the mid 1970s and was
called Blockade. It was the creation of Gremlin Industries, who
specialized in coin-operated arcade machines. In 1984, they closed
their doors, never to open again. But their game still lives on.
- By 1997, it had found its way into people’s pockets, onto their Nokia
phones and created the craze of mobile gaming among teenagers.
- The Nokia 6110 was Nokia’s first phone with Snake and they
continued to manufacture new models with the game installed
throughout the next decade.
## Cost and Features
- Snake Game is a simple console game without any graphics.In this project, we can play the
popular “Snake Game” just like we played it elsewhere. we have to
use the up, down, right or left arrows to move the snake.
- An instruction has been given on the top right side of the menu where
users must go through the instruction to play this game.
- Players will able to check their result after games get over.
- The score section will display the total score of the player, game level and
maze which has been used.
- The object snake position has been set random, so whenever player will
start the game, the snake will appear at random location every time.
- The snake object will always appear with '@'head.
- The number keys “d,a,w,s” has been set within the program to move the
snake to right, left, top and bottom respectively.
## Defining Our System
### Explanation
- we can play the
popular “Snake Game” just like you played it elsewhere. You have to
use the up, down, right or left arrows to move the snake.
- Foods are provided at the several co-ordinates of the screen for the
snake to eat. Every time the snake eats the food, its length will by
increased by one element along with the score.
![Screenshot (272)](https://user-images.githubusercontent.com/49453539/114789621-0559d180-9da1-11eb-871c-3ed23cd9d4c6.png)
# SWOT Analysis
![0001](https://user-images.githubusercontent.com/49453539/114791531-528b7280-9da4-11eb-8c45-818f6800ae2c.jpg)

# 4W's and 1'H
## Who:
- Anyone who is enthusiast to play snake game
## What:
- is a simple console
application with very simple graphics. In this project, you can play the
popular “Snake Game” just like you played it elsewhere.
## when:
- The Snake game has appeared in many different forms over the decades, but
it’s first appearance took place in the mid 1970s and was
called Blockade. It was the creation of Gremlin Industries, who
specialized in coin-operated arcade machines. In 1984, they closed
their doors, never to open again. But their game still lives on.
## Where:
- can be played in system console.
## How:
- we have to
use the up, down, right or left arrows to move the snake.
# Detail Requirements
## High Level Requirements
ID | DESCRIPTION | CATEGORY | Status
------------ | ------------- | ------------ | ------------- 
HR1 | User shall be to change directions of snake | Scenario | Implemented
HR2 | User shall be able to catch the food of snake | Scenario | Implemented
HR3 | User shall be able to not to hit the walls  | Scenario | Implemented
HR4 | User shall be able to see the scores  | Scenario | Implemented
HR5 | scores should always be displayed after "game over!"| Scenario | Implemented
## Low Level Requirements
ID | DESCRIPTION | CATEGORY | Status
------------ | ------------- | ------------ | ------------- 
LR1 | If the player goes on catching the food without hitting the walls then size of the snake will be increased| HR1,HR2,HR3 | Implemented
LR2 | If the player hits the wall or its tail then a messsage "gameover!" and scores should be displayed | HR4,HR5 | Implemented
