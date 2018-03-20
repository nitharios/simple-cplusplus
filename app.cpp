#include <iostream>
using namespace std;

bool gameOver;

/* map dimensions */
const int width = 20;
const int height = 20;

/* position values */
int x, y, fruitX, fruitY, score;
enum eDirection
{
  STOP = 0,
  LEFT,
  RIGHT,
  UP,
  DOWN
};
eDirection dir;

void Setup() 
{
  gameOver = false;
  dir = STOP;

  // set snake in middle
  x = width / 2;
  y = height / 2;

  // randomly place fruit
  fruitX = rand() % width;
  fruitY = rand() % height;
}

void Draw() 
{

}

void Input() 
{

}

void Logic() 
{

}

int app() 
{
  Setup();
  while (!gameOver) 
  {
    Draw();
    Input();
    Logic();
    // Sleep(10); Linux --> sleep(10) 
  }
  return 0;
}
