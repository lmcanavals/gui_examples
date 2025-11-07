#ifndef __SWORDSMASTER_H__
#define __SWORDSMASTER_H__

#include <vector>
#include "entity.h"

#define IDLE 0
#define WALK 1
#define RUN 2
#define ATTACK 3
#define WALK_ATTACK 4
#define RUN_ATTACK 5 
#define HURT 6 
#define DEAD 7  

class Swordsmaster : public Entity {
public:
    std::vector<std::vector<int>> maxidx{
        {12, 12, 12, 4},
        {6, 6, 6, 6},
        {8, 8, 8, 8},
        {8, 8, 8, 8},
        {6, 6, 6, 6},
        {8, 8, 8, 8},
        {5, 5, 5, 5},
        {7, 7, 7, 7}
    };

    Swordsmaster(int scrWidth, int scrHeight)
        : Entity(
            scrWidth / 2,
            scrHeight / 2,
            64,
            64,
            IDLE,
            DOWN
        ) {}
    void updateState(int status) {
        this->status = status;
        idx = 0;
    }
    void updateDir(Direction dir) {
        this->dir = dir;
        idx = 0;
    }
    void update() override {
        idx = (idx + 1) % maxidx[status][dir];
    }
};

#endif //! __SWORDSMASTER_H__