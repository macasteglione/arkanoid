/**
 * @file ball.hpp
 * @author Casteglione Matias
 * @brief This file contains the ball class.
 * @version 0.1
 * @date 2024-03-19
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef BALL_HEADER
#define BALL_HEADER

#define INCREMENT 1.1f
#define DEFAULT_RADIUS 10
#define DEFAULT_SPEED Vector2({5, 5})

#include "player.hpp"

class Ball
{
    Vector2 speed, ballPos;

public:
    Ball(const Vector2 &position);
    ~Ball();
    void updateBall(Player &player);
    void drawBall();
    Vector2 getBallPos() const;
};

#endif // !BALL_HEADER