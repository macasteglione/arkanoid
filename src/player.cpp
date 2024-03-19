#include "../include/player.hpp"

const Vector2 Player::PLAYER_SIZE = {100.0f, 10.0f};
const float Player::SPEED = 7.f;

Player::Player(const Vector2 &playerPos) : playerPos(playerPos) {}

Player::~Player() {}

Vector2 Player::getPosition() const
{
    return playerPos;
}

void Player::goLeft(const KeyboardKey &key)
{
    playerPos.x -= IsKeyDown(key) ? SPEED : 0;
}

void Player::goRight(const KeyboardKey &key)
{
    playerPos.x += IsKeyDown(key) ? SPEED : 0;
}

void Player::drawPlayer()
{
    DrawRectangleV(playerPos, PLAYER_SIZE, WHITE);
}

void Player::setBoundary()
{
    playerPos.x = Clamp(playerPos.x, 0, GetScreenWidth() - PLAYER_SIZE.x);
}