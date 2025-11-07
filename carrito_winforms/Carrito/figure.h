#ifndef __FIGURE_H__
#define __FIGURE_H__

class Figure {
public:
  enum Type { ELLIPSE, RECTANGLE };

protected:
  int x;
  int y;
  int w;
  int h;
  int color;
  Type type;

public:
  Figure(int x, int y, int w, int h, int color, Type type)
      : x(x), y(y), w(w), h(h), color(color), type(type) {}

  int getX() { return x; }
  int getY() { return y; }
  int getW() { return w; }
  int getH() { return h; }
  int getColor() { return color; }
  Type getType() { return type; }
  void setX(int x) { this->x = x; }
  void setY(int y) { this->y = y; }
  void setW(int w) { this->w = w; }
  void setH(int h) { this->h = h; }
  void setColor(int color) { this->color = color; }
  void setType(Type type) { this->type = type; }
};

#endif // !__FIGURE_H__
