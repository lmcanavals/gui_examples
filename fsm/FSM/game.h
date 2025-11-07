#ifndef __GAME_H__
#define __GAME_H__

#include "enemy.h"
#include "player.h"
#include <vector>

class Game {
public:
    int cnvWidth;
    int cnvHeight;
    std::vector<Enemy*> enemies;
    Player* player;

    Game(int cnvWidth, int cnvHeight) : cnvWidth(cnvWidth), cnvHeight(cnvHeight) {
        srand(22);
        player = new Player(rand() % cnvWidth, rand() % cnvHeight, 10, 10, 0xff00aaff);
        enemies.push_back(new Enemy(rand() % cnvWidth, rand() % cnvHeight, player));
        enemies.push_back(new Enemy(rand() % cnvWidth, rand() % cnvHeight, player));
        enemies.push_back(new Enemy(rand() % cnvWidth, rand() % cnvHeight, player));
    }

    void updateAll() {
        for (auto enemy : enemies) {
            enemy->update(0.0f);
        }
    }

    void handleInput(char key) {
        switch (key) {
        case 'w': player->move(0, -5, cnvWidth, cnvHeight); break;
        case 'a': player->move(-5, 0, cnvWidth, cnvHeight); break;
        case 's': player->move(0, 5, cnvWidth, cnvHeight); break;
        case 'd': player->move(5, 0, cnvWidth, cnvHeight); break;
        }
    }
};

#endif // !__GAME_H__