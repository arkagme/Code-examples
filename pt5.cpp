#include <iostream>
#include <cstring>

class ColorAddition {
private:
    char color[20];

public:
    ColorAddition(const char* initialColor) {
        strncpy(color, initialColor, sizeof(color));
        color[sizeof(color) - 1] = '\0'; // Ensure null-termination
    }

    ColorAddition operator+(const ColorAddition& other) const {
        char result[20];
        if (strcmp(color, "Red") == 0 && strcmp(other.color, "Green") == 0)
            strcpy(result, "Yellow");
        else if (strcmp(color, "Red") == 0 && strcmp(other.color, "Blue") == 0)
            strcpy(result, "Magenta");
        else if (strcmp(color, "Green") == 0 && strcmp(other.color, "Blue") == 0)
            strcpy(result, "Cyan");
        else
            strcpy(result, "Unknown");

        return ColorAddition(result);
    }

    void printColor() const {
        std::cout << color << std::endl;
    }
};

int main() {
    ColorAddition red("Red");
    ColorAddition green("Green");
    ColorAddition blue("Blue");

    ColorAddition result1 = red + green;
    ColorAddition result2 = red + blue;
    ColorAddition result3 = green + blue;

    result1.printColor(); // Output: Yellow
    result2.printColor(); // Output: Magenta
    result3.printColor(); // Output: Cyan

    return 0;
}



