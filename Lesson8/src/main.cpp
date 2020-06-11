#include <iostream>
#include <string>
#include <exception>


namespace task1 {
void div(int n, int d){
    std::cout << n << "/" << d << "=";
    if(d == 0)
        throw std::overflow_error("Divide by zero exception");

    std::cout << n/d << std::endl;
    return;
}

}

class Ex {

public:
    Ex(int x) : m_x(x) {}

    int m_x;
};

class Bar {
    int y;
public:
    Bar() : y(0) {}

    void set(int a) {
        if( y + a > 100)
            throw Ex(a+y);
        y = a;
    }
};

class Robot {
    const int maxX;
    const int maxY;
    int m_X;
    int m_Y;

    void move(int x, int y) {
        int newX, newY;

        newX = m_X+x;
        newY = m_Y+y;

        if(newX < 0 || newX > maxX) {
            throw std::logic_error("X Off The Field");
        }
        else if (newY < 0 || newY > maxY) {
            throw std::logic_error("Y Off The Field");
        }
        else {
            m_X = newX;
            m_Y = newY;
        }
    }
public:
    enum class eCmd {Up='u',Down='d',Forward='f',Backward='b'};
    Robot()
        : maxX(10), maxY(10), m_X(0), m_Y(0) {}

    void move(eCmd cmd) {
        switch(cmd) {
        case eCmd::Up:
            move(0,1);
            break;
        case eCmd::Down:
            move(0,-1);
            break;
        case eCmd::Forward:
            move(1,0);
            break;
        case eCmd::Backward:
            move(-1,0);
            break;
        default:
            throw std::logic_error("Illegal command");
        }
    }

    void printPosition() {
        std::cout << "Robot position " << m_X << ", " << m_Y << std::endl;
    }
};

int main(int argc, char** args){

    //task 1
    try {
        task1::div(6,3);
        task1::div(6,0);
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    //task 2
        Bar bar;
        int n;
    do {
        std::cin >> n;
        try {
            bar.set(n);
        } catch (Ex &ex) {
            std::cout << "Exception Bar.y + n = " << ex.m_x << " > 100" << std::endl;\
        }
    } while(n != 0);

    //task 3
    char direction;
    Robot r;
    do {
        r.printPosition();
        std::cout << "Where to move? (u,d,f,b, 0 exit): ";
        std::cin >> direction;

        if(direction == '0')
            break;

        try {
            r.move(static_cast<Robot::eCmd>(direction));
        } catch (std::exception &ex) {
            std::cout << ex.what() << std::endl;
        }
    } while(true);
    return 0;
}

