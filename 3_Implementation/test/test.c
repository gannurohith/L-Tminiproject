#include "prototypes.h"
#include "unity.h"
#include<snake_operations.h>
#define PROJECT_NAME    "Snake"

void test_VerticalWall(void);
void test_ShowUI_Row(void);
void test_ShowUI(void);
void test_CreateRandomFood(void);
void test_NewGame(void);
void test_GameOver(void);
void test_CheckIfCrashedByWall(void);
void test_CheckIfCrashedByTail(void);  
void test_SetTail(void);
void test_AddNewLengthToSnake(void);
void test_FoodHasBeenEaten(void);
void test_Move(void);
void test_KeyPressHandler(void);
void test_GameHandler(void);/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}



int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
  RUN_TEST(test_VerticalWall);
  RUN_TEST(test_ShowUI_Row);
  RUN_TEST(test_ShowUI);
  RUN_TEST(test_CreateRandomFood);
  RUN_TEST(test_NewGame);
  RUN_TEST(test_GameOver);
  RUN_TEST(test_CheckIfCrashedByWall);
  RUN_TEST(test_CheckIfCrashedByTail);
  RUN_TEST(test_SetTail);
  RUN_TEST(test_FoodHasBeenEaten);
  RUN_TEST(test_Move);
  RUN_TEST(test_KeyPressHandler);
  RUN_TEST(test_GameHandler);
  
    /* Close the Unity Test Framework */
    return UNITY_END();
}
void test_VerticalWall(void){
}

void test_ShowUI_Row(void){
}

void test_CreateRandomFood(void){
}
void test_NewGame(void){
}

void test_GameOver(void){
  }
void test_CheckIfCrashedByWall(void){
}
void test_CheckIfCrashedByTail(void){
}
void test_SetTail(void){
}
void test_AddNewLengthToSnake(void){
}
void test_FoodHasBeenEaten(void){
  
}
void test_Move(void){
}
void test_KeyPressHandler(void){
}
void test_GameHandler(void){
}
