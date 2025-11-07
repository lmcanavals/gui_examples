#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "fsm.h"
#include "player.h"
#include "utils.h"

class Enemy {
public:
    const float PERSUETIME = 10;
    int x;
    int y;
    int vision;
    int color;
    FSM brain;
    int timer;
    Player* player;

public:
    Enemy(int x, int y, Player* player, int vision = 150)
        : x(x), y(y), player(player), vision(vision), brain(FSM()) {
        brain.set_state([this](float dt) { this->patrol(dt); });
    }
    void patrol(float dt) {
        color = 0xff00ff55;
        if (sees(*this->player)) {
            timer = 0;
            brain.set_state([this](float dt) { this->shoot(dt); });
        }
    }
    void shoot(float dt) {
        color = 0xffff0000;
        if (sees(*player)) {
            timer = 0;
        }
        if (timer >= PERSUETIME) {
            brain.set_state([this](float dt) { this->patrol(dt); });
        }
    }
    void update(float dt) {
        timer += 1;
        brain.update(dt);
    }
    bool sees(Player& p) { return dist(x, y, p.x, p.y) <= vision; }
};

#endif // !__ENEMY_H__
