#ifndef __ENTITY_H__
#define __ENTITY_H__

class Entity {

public:
    enum Direction { DOWN, LEFT, RIGHT, UP };
    int x;
    int y;
    int width;
    int height;
    int status;
    Direction dir;
    int idx;

public:
    Entity(int x,
        int y,
        int width,
        int height,
        int status,
        Direction dir)
        :
        x(x),
        y(y),
        width(width),
        height(height),
        status(status),
        dir(dir),
        idx(0) {}

    virtual void update() = 0;
};

#endif //!__ENTITY_H__