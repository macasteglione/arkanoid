/**
 * @file Player.hpp
 * @author Casteglione Matias
 * @brief This file contains the player class.
 * @version 0.1
 * @date 2024-03-19
 *
 * @copyright Copyright (c) 2024
 *
 */

#ifndef PLAYER_HEADER
#define PLAYER_HEADER

#define SPEED 7.f
#define PLAYER_SIZE Vector2({100.f, 10.f})

#include "utils.h"

class Player
{
    Vector2 playerPos;

public:
    Player(const Vector2 &playerPos);
    ~Player();
    Vector2 getPosition() const;
    Vector2 getPlayerSize() const;
    void goLeft(const KeyboardKey &key);
    void goRight(const KeyboardKey &key);
    void drawPlayer();
    void setBoundary();
};

#endif // PLAYER_HEADER