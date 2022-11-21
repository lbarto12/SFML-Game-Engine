#include "GLIB/managers/App.h"
#include <iostream>

class Game : public App {
public:
    void Start() {
        std::cout << "started" << std::endl;
    }

    void Update() {
        std::cout << "running" << std::endl;
    }
};

int main() {
    (new Game())
        ->start();
}