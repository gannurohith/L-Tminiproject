/**
 * @file prototypes.h
 * @author Gannu Rohith (https://github.com/gannurohith)
 * @brief This program is for making snake game using C code
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_X 15
#define MAX_Y 15


typedef int bool;
enum boolEnum { false, true };
typedef enum boolEnum ;


struct Location_s
{
	int x;
	int y;
};
typedef struct Location_s Location;




enum DirectionEnum {
	Up, Down, Left, Right
};
typedef enum DirectionEnum Direction;
struct Snake_s
{
	Direction SnakeDirection;
	Location Head;
	Location Tail[MAX_X * MAX_Y];
	int Length;
};
typedef struct Snake_s Snake;


void VerticalWall();
void ShowUI_Row(int y);
void ShowUI();

bool CheckLocationIfEmpty(Location loc);
Location FindNearestEmptyLocation(Location loc);
void CreateRandomFood();
void NewGame();
void GameOver();
void CheckIfCrashedByWall();
void CheckIfCrashedByTail();  
void SetTail(Location zeroTailBackup);
void AddNewLengthToSnake();
void FoodHasBeenEaten();
void Move();
void KeyPressHandler();
void GameHandler();

#endif
