#include "crosswind/graphical/object/sprite_animation.hpp"
#include "crosswind/graphical/object/sprite.hpp"

cw::graphical::object::sprite_animation::sprite_animation(): current_frame(0){

}

cw::graphical::object::sprite_animation::~sprite_animation(){

}

void cw::graphical::object::sprite_animation::set_origin(const glm::vec3& new_origin){
    
    for(auto& frame : frames){
        frame->set_origin(new_origin);
    }

}

void cw::graphical::object::sprite_animation::set_size(const glm::vec3& new_size) {

    for (auto& frame : frames) {
        frame->set_size(new_size);
    }

}

void cw::graphical::object::sprite_animation::flip(bool default_x) {

    if (x_orientation) {
        if (!default_x) {
            for (int i = 0; i < frames.size(); i++) {
                frames[i]->h_flip();
            }

            x_orientation = default_x;
        }

    } else {

        if (default_x) {
            for (int i = 0; i < frames.size(); i++) {
                frames[i]->h_flip();
            }

            x_orientation = default_x;
        }
    }
}