#ifndef _CAR_H_
#define __CAR_H__

#include "figure.h"
#include <vector>

class Car : public Figure {
  std::vector<Figure *> figures;

public:
  Car(int x, int y, int w, int h, int color)
      : Figure(x, y, w, h, color, RECTANGLE),
        figures({
            new Figure(x + w / 3, y, w / 2, h / 3, color, RECTANGLE),
            new Figure(x, y + h / 3, w, h / 2, color, RECTANGLE),
            new Figure(x + h / 10, y + h - h / 4, h / 4, h / 4, color, ELLIPSE),
            new Figure(x + w - h / 4 - h / 10, y + h - h / 4, h / 4, h / 4,
                       color, ELLIPSE),
        }) {}
  std::vector<Figure *> &getFigures() { return figures; }
  void move(int dx, int dy, int width, int height) {
    if (x + dx + w >= width || x + dx <= 0 || y + dy + h >= height ||
        y + dy <= 0) {
      return;
    }
    x += dx;
    y += dy;
    for (auto fig : figures) {
      fig->setX(fig->getX() + dx);
      fig->setY(fig->getY() + dy);
    }
  }
};

#endif // !__CAR_H__
