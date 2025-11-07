#ifndef __IGRAPHICS_MANAGER_H__
#define __IGRAPHICS_MANAGER_H__

#include "car.h"
#include "figure.h"

using namespace System::Drawing;

ref class GraphicsManager {
    Graphics^ g;

public:
    GraphicsManager(Graphics^ g) : g(g) {}
    void drawCar(Car* car) {
        g->Clear(Color::White);
        for (auto fig : car->getFigures()) {
            auto brush = gcnew SolidBrush(Color::FromArgb(fig->getColor()));
            if (fig->getType() == Figure::RECTANGLE) {
                g->FillRectangle(brush, fig->getX(), fig->getY(), fig->getW(),
                    fig->getH());
            } else {
                g->FillEllipse(brush, fig->getX(), fig->getY(), fig->getW(),
                    fig->getH());
                g->DrawEllipse(Pens::Black, fig->getX(), fig->getY(), fig->getW(), fig->getH());
            }
        }
    }
};

#endif // !__IGRAPHICS_MANAGER_H__
