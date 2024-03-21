#include "../include/player.hpp"

Player::Player(const Vector2 &playerPos) : playerPos(playerPos) {}

Player::~Player() {}

Vector2 Player::getPosition() const
{
    return playerPos;
}

Vector2 Player::getPlayerSize() const {
    return PLAYER_SIZE;
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