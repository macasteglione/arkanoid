#include "../include/ball.hpp"

Ball::Ball(const Vector2 &position) : speed(DEFAULT_SPEED), ballPos(position) {}

Ball::~Ball() {}

Vector2 Ball::getBallPos() const
{
    return ballPos;
}

void Ball::drawBall()
{
    DrawCircleV(ballPos, DEFAULT_RADIUS, WHITE);
}

void Ball::updateBall(Player &player)
{
    ballPos.x += speed.x;
    ballPos.y += speed.y;

    if (ballPos.x >= GetScreenWidth() || ballPos.x <= 0)
        speed.x *= -1;
    if (ballPos.y <= 0)
        speed.y *= -1;

    if (CheckCollisionCircleRec(ballPos, DEFAULT_RADIUS, {player.getPosition().x, player.getPosition().y, player.getPlayerSize().x, player.getPlayerSize().y}))
        speed.y *= -1;
}