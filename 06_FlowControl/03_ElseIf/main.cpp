#include <iostream>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    int tool{Marker};

    // if (tool) is always true (it exists)
    if (tool == Pen)
    {
        std::cout << "Using Pen" << std::endl;
    }
    if (tool == Marker)
    {
        std::cout << "Using Marker" << std::endl;
    }
    if (tool == Eraser)
    {
        std::cout << "Using Eraser" << std::endl;
    }
    if (tool == Rectangle)
    {
        std::cout << "Using Rectangle" << std::endl;
    }
    if (tool == Circle)
    {
        std::cout << "Using Circle" << std::endl;
    }
    if (tool == Ellipse)
    {
        std::cout << "Using Ellipse" << std::endl;
    }

    std::cout << "Next" << std::endl;

    return 0;
}
