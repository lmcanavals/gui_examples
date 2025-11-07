#ifndef __FSM_H__
#define __FSM_H__

#include <functional>

class FSM {
  std::function<void(float)> current_state;

public:
  FSM() : current_state(nullptr) {}
  void set_state(std::function<void(float)> state) {
    this->current_state = state;
  }
  void update(float dt) {
    if (this->current_state) {
      this->current_state(dt);
    }
  }
};

#endif // !__FSM_H__
