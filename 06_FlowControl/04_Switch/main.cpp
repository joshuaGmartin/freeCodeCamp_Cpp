#include <iostream>
#include <string>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{
    int tool{Pen};

    switch (tool)
    {
    case Pen:
    case Marker:
        std::cout << "Tool is Marker or Pen" << std::endl;
        break;

    case Eraser:
        std::cout << "Tool is Eraser" << std::endl;
        break;

    case Rectangle:
        std::cout << "Tool is Rectangle" << std::endl;
        break;

    case Circle:
        std::cout << "Tool is Circle" << std::endl;
        break;

    case Ellipse:
        std::cout << "Tool is Ellipse" << std::endl;
        break;

    default:
        std::cout << "Tool not found" << std::endl;
        break;
    }

    std::cout << "Next" << std::endl;

    // ===============================================================

    // std::string name{"John"};

    // switch (name) // must be integral (whole number) or enum type
    // {
    // case constant expression:
    //     /* code */
    //     break;

    // default:
    //     break;
    // }

    return 0;
}
