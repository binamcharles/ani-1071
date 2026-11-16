#ifndef ANI_VEC2_H
#define ANI_VEC2_H

namespace ani {

struct Vec2 {
    float x;
    float y;
};

Vec2 add(Vec2 a, Vec2 b);
Vec2 scale(Vec2 v, float k);
float dot(Vec2 a, Vec2 b);

}

#endif
