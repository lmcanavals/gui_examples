#ifndef __GRAPH_MANAGER_H__
#define __GRAPH_MANAGER_H__

#include "game.h"

using namespace System::Drawing;

ref class GraphicsMan {
    Graphics^ g;
public:
    GraphicsMan(Graphics^ g) :g(g) {}
    void drawGame(Game* game) {
        g->Clear(Color::White);
        for (auto e : game->enemies) {
            drawEnemy(e);
        }
        drawPlayer(game->player);
    }
    void drawEnemy(Enemy* e) {
        auto brush = gcnew SolidBrush(Color::FromArgb(e->color));
        g->FillEllipse(brush, e->x - 10, e->y - 10, 20, 20);
        g->DrawEllipse(Pens::Black, e->x - 10, e->y - 10, 20, 20);

        auto brush2 = gcnew SolidBrush(Color::FromArgb(e->color - 0xdd000000));
        g->FillEllipse(
            brush2,
            e->x - e->vision,
            e->y - e->vision,
            e->vision*2, e->vision*2);
    }
    void drawPlayer(Player* p) {
        auto brush = gcnew SolidBrush(Color::FromArgb(p->color));
        g->FillRectangle(brush, p->x, p->y, 20, 20);
        g->DrawRectangle(Pens::Black, p->x, p->y, 20, 20);
    }
};

#endif // !__GRAPH_MANAGER_H__