#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

using color = vec3;

void write_color(std::ostream& out, const color pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Write the translated [0, 255] value of each color component
    out << int(255.999 * r) << ' '
        << int(255.999 * g) << ' '
        << int(255.999 * b) << '\n';
}

#endif