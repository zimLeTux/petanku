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

#ifndef GRAPHICALENGINE_H
#define GRAPHICALENGINE_H

#include <string>

typedef enum e_anchor
{
    N,
    NE,
    E,
    SE,
    S,
    SW,
    W,
    NW
}
EAnchor;

class Image
{
    
};

class Font
{
    
};

class GraphicalEngine
{
private:
    std::unordered_map<std::string, Image> images_map_;
    std::unordered_map<std::string, Font> fonts_map_;
    
public:
    void draw_image(int x, int y, const char* filename);
    void draw_image(int x, int y, float scale, const char* filename);
    void draw_image(int x, int y, float scale, float angle, const char* filename);
    
    void draw_image(int x, int y, Image* image);
    void draw_image(int x, int y, float scale, Image* image);
    void draw_image(int x, int y, float scale, float angle, Image* image);
    
    void draw_image(int x, int y, std::string name);
    void draw_image(int x, int y, float scale, std::string name);
    void draw_image(int x, int y, float scale, float angle, std::string name);
    
    void draw_text(int x, int y, EAnchor anchor, std::string text, Font font);
};

#endif // GRAPHICALENGINE_H
