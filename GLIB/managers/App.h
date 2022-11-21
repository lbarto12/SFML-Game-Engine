#include <SFML/Graphics.hpp>

// TODO: make this completely internal, add scene manager, create single static instance
class App {
protected:
    virtual void Start() {
    }

    virtual void Update() {
    }

    void Main() {
        sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            Update();
            window.display();
        }
    }

public:
    void start() {
        Start();
        Main();
        delete this;
    }
};