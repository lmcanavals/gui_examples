#ifndef __PLAYER_H__
#define __PLAYER_H__

class Player {
public:
  int x;
  int y;
  int w;
  int h;
  int color;
  // TODO: agregar su FSM brain; y sus correspondientes estados;

  Player(int x, int y, int w, int h, int color)
      : x(x), y(y), w(w), h(h), color(color) {}
  void move(int dx, int dy, int W, int H) {
      if (x + dx <= 0 || x + w + dx >= W
          || y + dy <= 0 || y + h + dy >= H) {
          return;
      }
      x += dx;
      y += dy;
  }
};

#endif // !__PLAYER_H__
