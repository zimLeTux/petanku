/*
 * <one line to give the program's name and a brief idea of what it does.>
 * Copyright (C) 2016  Simon Larguier <simon.larguier@sfr.fr>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef PHYSICSENGINE_H
#define PHYSICSENGINE_H

typedef struct s_position
{
    float x;
    float y;
}
SPosition;

typedef struct s_physics_ball
{
    SPosition position;
    float weight;
    float radius;
}
SPhysicsBall;



typedef enum e_ground_material
{
    DEFAULT = 0,
    SAND,
    GRASS,
    CONCRETE,
    BEACH_SAND
}
EGroundMaterial;


class PhysicsEngine
{
private:
    float           terrain_width_;
    float           terrain_height_;
    EGroundMaterial ground_type_;
    SPhysicsBall*   positionned_balls_;
    
public:
    int launch_ball(float strength, float theta, float phi, SPhysicsBall ball);
    
}
;

#endif // PHYSICSENGINE_H
