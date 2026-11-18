#include <vec2.h>

namespace {

float produit(float a, float b) {
    return a * b;
}
}
namespace ani {

Vec2 add(Vec2 a, Vec2 b) {
    return {a.x + b.x, a.y + b.y};
}

Vec2 scale(Vec2 v, float k) {
    return {produit(v.x, k), produit(v.y, k)};
}

float dot(Vec2 a, Vec2 b) {
    return produit(a.x, b.x) + produit(a.y, b.y);
}

}
